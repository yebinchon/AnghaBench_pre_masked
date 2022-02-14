
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;

__attribute__((used)) static s32 FUNC_3(struct ixgbe_hw *VAR_1, u16 VAR_2)
{
 u32 VAR_3;




 VAR_3 = FUNC_0(VAR_1, FUNC_1(0));

 VAR_3 |= ((VAR_2 + 4) | VAR_0);
 FUNC_2(VAR_1, FUNC_1(0), VAR_3);

 return 0;
}
