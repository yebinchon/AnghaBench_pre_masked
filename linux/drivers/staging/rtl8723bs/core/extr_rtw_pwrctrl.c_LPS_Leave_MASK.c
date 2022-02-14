
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwrctrl_priv {scalar_t__ pwr_mode; int bpower_saving; scalar_t__ bLeisurePs; } ;
struct dvobj_priv {int dummy; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct adapter*,int ) ;
 scalar_t__ VAR_1 ;
 struct dvobj_priv* FUNC_1 (struct adapter*) ;
 struct pwrctrl_priv* FUNC_2 (struct dvobj_priv*) ;
 scalar_t__ FUNC_3 (struct adapter*) ;
 int FUNC_4 (struct adapter*,scalar_t__,int ,int ,char*) ;
 int FUNC_5 (char*,char*,char const*) ;

void FUNC_6(struct adapter *VAR_2, const char *VAR_3)
{


 struct dvobj_priv *VAR_4 = FUNC_1(VAR_2);
 struct pwrctrl_priv *VAR_5 = FUNC_2(VAR_4);
 char VAR_6[32] = {0};



 if (FUNC_3(VAR_2))
  return;

 if (VAR_5->bLeisurePs) {
  if (VAR_5->pwr_mode != VAR_1) {
   FUNC_5(VAR_6, "WIFI-%s", VAR_3);
   FUNC_4(VAR_2, VAR_1, 0, 0, VAR_6);

   if (VAR_5->pwr_mode == VAR_1)
    FUNC_0(VAR_2, 100);
  }
 }

 VAR_5->bpower_saving = 0;


}
