
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;
 int FUNC_3 (struct ixgbe_hw*) ;
 int FUNC_4 (struct ixgbe_hw*) ;
 int FUNC_5 (int,int) ;

void FUNC_6(struct ixgbe_hw *VAR_3, u32 VAR_4)
{
 u32 VAR_5 = VAR_4 & (VAR_1 | VAR_2);
 u32 VAR_6;

 if (VAR_4 & VAR_0)
  VAR_5 |= VAR_4 & VAR_0;
 FUNC_3(VAR_3);

 VAR_6 = FUNC_0(VAR_3, FUNC_1(VAR_3));
 VAR_6 &= ~VAR_5;
 FUNC_2(VAR_3, FUNC_1(VAR_3), VAR_6);

 FUNC_4(VAR_3);
 FUNC_5(5000, 6000);
}
