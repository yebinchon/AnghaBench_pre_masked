
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i40e_vsi {int dummy; } ;
struct i40e_mac_filter {int dummy; } ;
typedef int s16 ;


 int FUNC_0 (struct i40e_vsi*,struct i40e_mac_filter*) ;
 struct i40e_mac_filter* FUNC_1 (struct i40e_vsi*,int const*,int ) ;

void FUNC_2(struct i40e_vsi *VAR_0, const u8 *VAR_1, s16 VAR_2)
{
 struct i40e_mac_filter *VAR_3;

 if (!VAR_0 || !VAR_1)
  return;

 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
 FUNC_0(VAR_0, VAR_3);
}
