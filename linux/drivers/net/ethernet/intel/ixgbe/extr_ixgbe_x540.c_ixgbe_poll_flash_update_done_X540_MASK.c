
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (struct ixgbe_hw*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static s32 FUNC_3(struct ixgbe_hw *VAR_3)
{
 u32 VAR_4;
 u32 VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_5 = FUNC_1(VAR_3, FUNC_0(VAR_3));
  if (VAR_5 & VAR_0)
   return 0;
  FUNC_2(5);
 }
 return VAR_1;
}
