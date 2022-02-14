
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i40e_lldp_variables {int dummy; } ;
struct i40e_hw {int dummy; } ;
typedef int mem ;
typedef scalar_t__ i40e_status ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct i40e_hw*,struct i40e_lldp_variables*,int ,int ) ;
 scalar_t__ FUNC_1 (struct i40e_hw*,int ) ;
 scalar_t__ FUNC_2 (struct i40e_hw*,int ,int ,int,int*,int,int *) ;
 int FUNC_3 (struct i40e_hw*) ;

i40e_status FUNC_4(struct i40e_hw *VAR_8,
          struct i40e_lldp_variables *VAR_9)
{
 i40e_status VAR_10 = 0;
 u32 VAR_11;

 if (!VAR_9)
  return VAR_1;

 VAR_10 = FUNC_1(VAR_8, VAR_3);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_2(VAR_8, VAR_6, 0, sizeof(VAR_11),
          &VAR_11, 1, ((void*)0));
 FUNC_3(VAR_8);
 if (VAR_10)
  return VAR_10;





 if (VAR_11 & VAR_7) {

  VAR_10 = FUNC_0(VAR_8, VAR_9, VAR_4,
       VAR_5);
 } else {

  VAR_10 = FUNC_0(VAR_8, VAR_9, VAR_0,
       VAR_2);
 }

 return VAR_10;
}
