
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct ixgbe_hw*) ;
 int FUNC_1 (struct ixgbe_hw*,int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static s32 FUNC_3(struct ixgbe_hw *VAR_1, u32 VAR_2, u8 VAR_3)
{
 u32 VAR_4;

 VAR_4 = (VAR_2 << 8) | VAR_3;
 FUNC_1(VAR_1, VAR_0, VAR_4);
 FUNC_0(VAR_1);
 FUNC_2(10);

 return 0;
}
