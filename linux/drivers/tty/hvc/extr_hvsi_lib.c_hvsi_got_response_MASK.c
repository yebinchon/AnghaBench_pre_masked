
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mctrl_word; } ;
struct hvsi_query_response {int verb; TYPE_1__ u; } ;
struct hvsi_priv {int mctrl_update; scalar_t__ inbuf; } ;


 int VAR_0 ;

 int FUNC_0 (int ) ;
 int FUNC_1 (struct hvsi_priv*,int) ;

__attribute__((used)) static void FUNC_2(struct hvsi_priv *VAR_1)
{
 struct hvsi_query_response *VAR_2 =
  (struct hvsi_query_response *)VAR_1->inbuf;

 switch(VAR_2->verb) {
 case 128:
  FUNC_1(VAR_1, FUNC_0(VAR_2->u.mctrl_word) & VAR_0);
  VAR_1->mctrl_update = 1;
  break;
 }
}
