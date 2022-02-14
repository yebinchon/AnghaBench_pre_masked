
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hvsi_priv {scalar_t__ inbuf; } ;
struct hvsi_control {int word; int verb; } ;


 int VAR_0 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hvsi_priv*,int) ;
 int FUNC_3 (struct hvsi_priv*) ;

__attribute__((used)) static void FUNC_4(struct hvsi_priv *VAR_1)
{
 struct hvsi_control *VAR_2 = (struct hvsi_control *)VAR_1->inbuf;

 switch (FUNC_0(VAR_2->verb)) {
 case 129:

  FUNC_3(VAR_1);
  break;
 case 128:

  FUNC_2(VAR_1, FUNC_1(VAR_2->word) & VAR_0);
  break;
 }
}
