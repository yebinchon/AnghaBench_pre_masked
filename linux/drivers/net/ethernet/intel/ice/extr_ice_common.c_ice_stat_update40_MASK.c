
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct ice_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ice_hw*,int ) ;

void
FUNC_2(struct ice_hw *VAR_0, u32 VAR_1, bool VAR_2,
    u64 *VAR_3, u64 *VAR_4)
{
 u64 VAR_5 = FUNC_1(VAR_0, VAR_1) & (FUNC_0(40) - 1);






 if (!VAR_2) {
  *VAR_3 = VAR_5;
  return;
 }




 if (VAR_5 >= *VAR_3)
  *VAR_4 += VAR_5 - *VAR_3;
 else

  *VAR_4 += (VAR_5 + FUNC_0(40)) - *VAR_3;


 *VAR_3 = VAR_5;
}
