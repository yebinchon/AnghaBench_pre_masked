
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i40e_hw {int dummy; } ;
struct i40e_aqc_mac_address_read_data {int pf_lan_mac; } ;
typedef int i40e_status ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct i40e_hw*,int*,struct i40e_aqc_mac_address_read_data*,int *) ;

i40e_status FUNC_2(struct i40e_hw *VAR_1, u8 *VAR_2)
{
 struct i40e_aqc_mac_address_read_data VAR_3;
 i40e_status VAR_4;
 u16 VAR_5 = 0;

 VAR_4 = FUNC_1(VAR_1, &VAR_5, &VAR_3, ((void*)0));

 if (VAR_5 & VAR_0)
  FUNC_0(VAR_2, VAR_3.pf_lan_mac);

 return VAR_4;
}
