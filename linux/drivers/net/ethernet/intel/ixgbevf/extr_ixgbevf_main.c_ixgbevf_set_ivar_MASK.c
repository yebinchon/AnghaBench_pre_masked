
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
struct ixgbevf_adapter {struct ixgbe_hw hw; } ;
typedef int s8 ;


 int VAR_0 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct ixgbevf_adapter *VAR_2, s8 VAR_3,
        u8 VAR_4, u8 VAR_5)
{
 u32 VAR_6, VAR_7;
 struct ixgbe_hw *VAR_8 = &VAR_2->hw;

 if (VAR_3 == -1) {

  VAR_5 |= VAR_0;
  VAR_6 = FUNC_0(VAR_8, VAR_1);
  VAR_6 &= ~0xFF;
  VAR_6 |= VAR_5;
  FUNC_2(VAR_8, VAR_1, VAR_6);
 } else {

  VAR_5 |= VAR_0;
  VAR_7 = ((16 * (VAR_4 & 1)) + (8 * VAR_3));
  VAR_6 = FUNC_0(VAR_8, FUNC_1(VAR_4 >> 1));
  VAR_6 &= ~(0xFF << VAR_7);
  VAR_6 |= (VAR_5 << VAR_7);
  FUNC_2(VAR_8, FUNC_1(VAR_4 >> 1), VAR_6);
 }
}
