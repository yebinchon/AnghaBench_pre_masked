
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;


 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct ixgbe_hw*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct ixgbe_hw *VAR_2, u32 VAR_3, bool VAR_4)
{
 u32 VAR_5 = FUNC_0(VAR_2, FUNC_1(VAR_3));
 VAR_5 |= VAR_1;
 if (VAR_4)
  VAR_5 |= VAR_0;
 else
  VAR_5 &= ~VAR_0;
 FUNC_2(VAR_2, FUNC_1(VAR_3), VAR_5);
}
