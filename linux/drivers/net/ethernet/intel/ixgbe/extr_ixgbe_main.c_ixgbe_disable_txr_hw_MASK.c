
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ixgbe_ring {int reg_idx; } ;
struct ixgbe_hw {int dummy; } ;
struct ixgbe_adapter {struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct ixgbe_hw*,int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct ixgbe_adapter*) ;
 int FUNC_5 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct ixgbe_adapter *VAR_4,
     struct ixgbe_ring *VAR_5)
{
 unsigned long VAR_6, VAR_7;
 struct ixgbe_hw *VAR_8 = &VAR_4->hw;
 u8 VAR_9 = VAR_5->reg_idx;
 int VAR_10;
 u32 VAR_11;

 FUNC_2(VAR_8, FUNC_1(VAR_9), VAR_2);


 VAR_7 = FUNC_4(VAR_4) / 100;

 VAR_10 = VAR_0;
 VAR_6 = VAR_7;

 while (VAR_10--) {
  FUNC_5(VAR_6, VAR_6 + 10);
  VAR_6 += VAR_7 * 2;
  VAR_11 = FUNC_0(VAR_8, FUNC_1(VAR_9));

  if (!(VAR_11 & VAR_1))
   return;
 }

 FUNC_3(VAR_3, "TXDCTL.ENABLE not cleared within the polling period\n");
}
