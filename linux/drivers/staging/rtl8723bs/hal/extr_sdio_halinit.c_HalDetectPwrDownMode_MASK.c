
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pwrctrl_priv {scalar_t__ reg_pdnmode; } ;
struct hal_com_data {int pwrdown; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct adapter*,int,int,int *) ;
 struct hal_com_data* FUNC_2 (struct adapter*) ;
 struct pwrctrl_priv* FUNC_3 (struct adapter*) ;

__attribute__((used)) static bool FUNC_4(struct adapter *VAR_1)
{
 u8 VAR_2;
 struct hal_com_data *VAR_3 = FUNC_2(VAR_1);
 struct pwrctrl_priv *VAR_4 = FUNC_3(VAR_1);


 FUNC_1(VAR_1, 1, 0x7B , (u32 *)&VAR_2);


 if (VAR_2 & VAR_0 && VAR_4->reg_pdnmode)
  VAR_3->pwrdown = 1;
 else
  VAR_3->pwrdown = 0;

 FUNC_0("HalDetectPwrDownMode(): PDN =%d\n", VAR_3->pwrdown);

 return VAR_3->pwrdown;
}
