
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; int type; } ;
struct hvsi_query {TYPE_1__ hdr; int verb; } ;
struct hvsi_priv {scalar_t__ mctrl_update; int established; int termno; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct hvsi_priv*) ;
 int FUNC_2 (struct hvsi_priv*,TYPE_1__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int ,...) ;

int FUNC_5(struct hvsi_priv *VAR_4)
{
 struct hvsi_query VAR_5;
 int VAR_6, VAR_7;

 FUNC_4("HVSI@%x: Querying modem control status...\n",
   VAR_4->termno);

 VAR_4->mctrl_update = 0;
 VAR_5.hdr.type = VAR_3;
 VAR_5.hdr.len = sizeof(struct hvsi_query);
 VAR_5.verb = FUNC_0(VAR_2);
 VAR_6 = FUNC_2(VAR_4, &VAR_5.hdr);
 if (VAR_6 <= 0) {
  FUNC_4("HVSI@%x: Error %d...\n", VAR_4->termno, VAR_6);
  return VAR_6;
 }


 for (VAR_7 = 0; VAR_7 < 20; VAR_7++) {
  if (!VAR_4->established)
   return -VAR_1;
  if (VAR_4->mctrl_update)
   return 0;
  if (!FUNC_1(VAR_4))
   FUNC_3(10);
 }
 return -VAR_0;
}
