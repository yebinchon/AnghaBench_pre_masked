
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i40e_hw {int dummy; } ;
struct i40e_aqc_mac_address_read_data {int port_mac; } ;
typedef scalar_t__ i40e_status ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (struct i40e_hw*,int*,struct i40e_aqc_mac_address_read_data*,int *) ;

i40e_status FUNC_2(struct i40e_hw *VAR_2, u8 *VAR_3)
{
 struct i40e_aqc_mac_address_read_data VAR_4;
 i40e_status VAR_5;
 u16 VAR_6 = 0;

 VAR_5 = FUNC_1(VAR_2, &VAR_6, &VAR_4, ((void*)0));
 if (VAR_5)
  return VAR_5;

 if (VAR_6 & VAR_0)
  FUNC_0(VAR_3, VAR_4.port_mac);
 else
  VAR_5 = VAR_1;

 return VAR_5;
}
