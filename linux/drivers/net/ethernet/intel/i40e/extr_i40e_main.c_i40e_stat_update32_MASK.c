
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct i40e_hw {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct i40e_hw*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct i40e_hw *VAR_0, u32 VAR_1,
          bool VAR_2, u64 *VAR_3, u64 *VAR_4)
{
 u32 VAR_5;

 VAR_5 = FUNC_2(VAR_0, VAR_1);
 if (!VAR_2)
  *VAR_3 = VAR_5;
 if (FUNC_1(VAR_5 >= *VAR_3))
  *VAR_4 = (u32)(VAR_5 - *VAR_3);
 else
  *VAR_4 = (u32)((VAR_5 + FUNC_0(32)) - *VAR_3);
}
