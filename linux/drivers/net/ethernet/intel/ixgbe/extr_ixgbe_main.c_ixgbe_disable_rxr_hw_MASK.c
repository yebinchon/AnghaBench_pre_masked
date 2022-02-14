
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ixgbe_ring {int reg_idx; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
struct ixgbe_adapter {struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;
 int VAR_5 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct ixgbe_adapter*) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct ixgbe_adapter *VAR_7,
     struct ixgbe_ring *VAR_8)
{
 unsigned long VAR_9, VAR_10;
 struct ixgbe_hw *VAR_11 = &VAR_7->hw;
 u8 VAR_12 = VAR_8->reg_idx;
 int VAR_13;
 u32 VAR_14;

 VAR_14 = FUNC_0(VAR_11, FUNC_1(VAR_12));
 VAR_14 &= ~VAR_3;
 VAR_14 |= VAR_4;


 FUNC_2(VAR_11, FUNC_1(VAR_12), VAR_14);


 if (VAR_11->mac.type == VAR_6 &&
     !(FUNC_0(VAR_11, VAR_0) & VAR_1))
  return;


 VAR_10 = FUNC_4(VAR_7) / 100;

 VAR_13 = VAR_2;
 VAR_9 = VAR_10;

 while (VAR_13--) {
  FUNC_5(VAR_9, VAR_9 + 10);
  VAR_9 += VAR_10 * 2;
  VAR_14 = FUNC_0(VAR_11, FUNC_1(VAR_12));

  if (!(VAR_14 & VAR_3))
   return;
 }

 FUNC_3(VAR_5, "RXDCTL.ENABLE not cleared within the polling period\n");
}
