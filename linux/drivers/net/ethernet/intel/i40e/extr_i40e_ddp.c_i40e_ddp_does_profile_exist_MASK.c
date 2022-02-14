
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
 scalar_t__ FUNC_0 (struct i40e_hw*,int *,int,int ,int *) ;
 scalar_t__ FUNC_1 (struct i40e_profile_info*,int *) ;

__attribute__((used)) static int FUNC_2(struct i40e_hw *VAR_1,
           struct i40e_profile_info *VAR_2)
{
 struct i40e_ddp_profile_list *VAR_3;
 u8 VAR_4[VAR_0];
 i40e_status VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(VAR_1, VAR_4, VAR_0, 0,
          ((void*)0));
 if (VAR_5)
  return -1;

 VAR_3 = (struct i40e_ddp_profile_list *)VAR_4;
 for (VAR_6 = 0; VAR_6 < VAR_3->p_count; VAR_6++) {
  if (FUNC_1(VAR_2, &VAR_3->p_info[VAR_6]))
   return 1;
 }
 return 0;
}
