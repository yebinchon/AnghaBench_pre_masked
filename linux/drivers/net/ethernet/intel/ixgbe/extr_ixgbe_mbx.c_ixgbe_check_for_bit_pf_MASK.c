
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ixgbe_hw*,int ) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;

__attribute__((used)) static s32 FUNC_3(struct ixgbe_hw *VAR_1, u32 VAR_2, s32 VAR_3)
{
 u32 VAR_4 = FUNC_1(VAR_1, FUNC_0(VAR_3));

 if (VAR_4 & VAR_2) {
  FUNC_2(VAR_1, FUNC_0(VAR_3), VAR_2);
  return 0;
 }

 return VAR_0;
}
