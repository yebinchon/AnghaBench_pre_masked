
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i40e_hw {int dummy; } ;
struct i40e_hmc_info {int dummy; } ;
typedef int i40e_status ;


 int FUNC_0 (struct i40e_hmc_info*,int ) ;
 int FUNC_1 (struct i40e_hw*,struct i40e_hmc_info*,int ,int) ;

__attribute__((used)) static i40e_status FUNC_2(struct i40e_hw *VAR_0,
            struct i40e_hmc_info *VAR_1,
            u32 VAR_2)
{
 i40e_status VAR_3 = 0;

 if (!FUNC_0(VAR_1, VAR_2))
  VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2, 1);

 return VAR_3;
}
