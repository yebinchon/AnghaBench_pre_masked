
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct timespec64 {int dummy; } ;
struct i40e_hw {int dummy; } ;
struct i40e_pf {struct i40e_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct timespec64 const*) ;
 int FUNC_1 (struct i40e_hw*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct i40e_pf *VAR_2, const struct timespec64 *VAR_3)
{
 struct i40e_hw *VAR_4 = &VAR_2->hw;
 u64 VAR_5 = FUNC_0(VAR_3);




 FUNC_1(VAR_4, VAR_1, VAR_5 & 0xFFFFFFFF);
 FUNC_1(VAR_4, VAR_0, VAR_5 >> 32);
}
