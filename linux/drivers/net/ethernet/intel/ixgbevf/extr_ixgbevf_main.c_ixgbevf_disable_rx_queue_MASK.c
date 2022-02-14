
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ixgbevf_ring {int reg_idx; } ;
struct ixgbe_hw {int hw_addr; } ;
struct ixgbevf_adapter {struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ixgbe_hw*,int ,int) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct ixgbevf_adapter *VAR_2,
         struct ixgbevf_ring *VAR_3)
{
 struct ixgbe_hw *VAR_4 = &VAR_2->hw;
 int VAR_5 = VAR_0;
 u32 VAR_6;
 u8 VAR_7 = VAR_3->reg_idx;

 if (FUNC_1(VAR_4->hw_addr))
  return;
 VAR_6 = FUNC_0(VAR_4, FUNC_2(VAR_7));
 VAR_6 &= ~VAR_1;


 FUNC_3(VAR_4, FUNC_2(VAR_7), VAR_6);


 do {
  FUNC_5(10);
  VAR_6 = FUNC_0(VAR_4, FUNC_2(VAR_7));
 } while (--VAR_5 && (VAR_6 & VAR_1));

 if (!VAR_5)
  FUNC_4("RXDCTL.ENABLE queue %d not cleared while polling\n",
         VAR_7);
}
