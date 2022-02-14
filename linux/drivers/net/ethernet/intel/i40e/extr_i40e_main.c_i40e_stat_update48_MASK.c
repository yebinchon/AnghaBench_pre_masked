
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct i40e_hw {scalar_t__ device_id; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct i40e_hw*,int ) ;
 int FUNC_3 (struct i40e_hw*,int ) ;

__attribute__((used)) static void FUNC_4(struct i40e_hw *VAR_1, u32 VAR_2, u32 VAR_3,
          bool VAR_4, u64 *VAR_5, u64 *VAR_6)
{
 u64 VAR_7;

 if (VAR_1->device_id == VAR_0) {
  VAR_7 = FUNC_2(VAR_1, VAR_3);
  VAR_7 |= ((u64)(FUNC_2(VAR_1, VAR_2) & 0xFFFF)) << 32;
 } else {
  VAR_7 = FUNC_3(VAR_1, VAR_3);
 }
 if (!VAR_4)
  *VAR_5 = VAR_7;
 if (FUNC_1(VAR_7 >= *VAR_5))
  *VAR_6 = VAR_7 - *VAR_5;
 else
  *VAR_6 = (VAR_7 + FUNC_0(48)) - *VAR_5;
 *VAR_6 &= 0xFFFFFFFFFFFFULL;
}
