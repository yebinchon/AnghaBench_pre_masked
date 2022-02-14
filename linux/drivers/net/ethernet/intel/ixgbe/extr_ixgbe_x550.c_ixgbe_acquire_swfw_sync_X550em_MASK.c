
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*,int) ;
 int FUNC_1 (struct ixgbe_hw*,int) ;

__attribute__((used)) static s32 FUNC_2(struct ixgbe_hw *VAR_1, u32 VAR_2)
{
 s32 VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;

 if (VAR_2 & VAR_0)
  FUNC_1(VAR_1, 1);

 return 0;
}
