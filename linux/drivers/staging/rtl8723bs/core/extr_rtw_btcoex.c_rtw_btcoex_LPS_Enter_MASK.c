
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pwrctrl_priv {int bpower_saving; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 struct pwrctrl_priv* FUNC_0 (struct adapter*) ;
 int FUNC_1 (struct adapter*) ;
 int FUNC_2 (struct adapter*,int ,int ,int ,char*) ;

void FUNC_3(struct adapter *VAR_1)
{
 struct pwrctrl_priv *VAR_2;
 u8 VAR_3;


 VAR_2 = FUNC_0(VAR_1);

 VAR_2->bpower_saving = 1;
 VAR_3 = FUNC_1(VAR_1);
 FUNC_2(VAR_1, VAR_0, 0, VAR_3, "BTCOEX");
}
