
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i40e_profile_info {int dummy; } ;
struct i40e_hw {int dummy; } ;
struct i40e_ddp_profile_list {int p_count; int * p_info; } ;
typedef scalar_t__ i40e_status ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct i40e_hw*,int *,int,int ,int *) ;
 scalar_t__ FUNC_1 (struct i40e_profile_info*,int *) ;

__attribute__((used)) static int FUNC_2(struct i40e_hw *VAR_2,
      struct i40e_profile_info *VAR_3)
{
 struct i40e_ddp_profile_list *VAR_4;
 u8 VAR_5[VAR_1];
 i40e_status VAR_6;
 int VAR_7;

 VAR_6 = FUNC_0(VAR_2, VAR_5, VAR_1, 0,
          ((void*)0));
 if (VAR_6)
  return -VAR_0;

 VAR_4 = (struct i40e_ddp_profile_list *)VAR_5;
 for (VAR_7 = 0; VAR_7 < VAR_4->p_count; VAR_7++) {
  if (FUNC_1(VAR_3,
           &VAR_4->p_info[VAR_7]))
   return 1;
 }
 return 0;
}
