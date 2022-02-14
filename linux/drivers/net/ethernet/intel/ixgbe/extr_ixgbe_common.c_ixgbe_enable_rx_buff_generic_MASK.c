
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int ) ;

s32 FUNC_3(struct ixgbe_hw *VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_0);
 VAR_3 &= ~VAR_1;
 FUNC_2(VAR_2, VAR_0, VAR_3);
 FUNC_1(VAR_2);

 return 0;
}
