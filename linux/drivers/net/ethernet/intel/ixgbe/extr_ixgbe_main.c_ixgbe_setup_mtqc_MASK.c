
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
struct ixgbe_adapter {int hw_tcs; int flags; int num_tx_queues; int num_xdp_queues; TYPE_2__* ring_feature; struct ixgbe_hw hw; } ;
struct TYPE_4__ {scalar_t__ mask; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct ixgbe_hw*,int ,int) ;
 size_t VAR_14 ;
 scalar_t__ VAR_15 ;

__attribute__((used)) static void FUNC_2(struct ixgbe_adapter *VAR_16)
{
 struct ixgbe_hw *VAR_17 = &VAR_16->hw;
 u32 VAR_18, VAR_19;
 u8 VAR_20 = VAR_16->hw_tcs;

 if (VAR_17->mac.type == VAR_15)
  return;


 VAR_18 = FUNC_0(VAR_17, VAR_10);
 VAR_18 |= VAR_11;
 FUNC_1(VAR_17, VAR_10, VAR_18);


 if (VAR_16->flags & VAR_1) {
  VAR_19 = VAR_9;
  if (VAR_20 > 4)
   VAR_19 |= VAR_8 | VAR_7;
  else if (VAR_20 > 1)
   VAR_19 |= VAR_8 | VAR_4;
  else if (VAR_16->ring_feature[VAR_14].mask ==
    VAR_0)
   VAR_19 |= VAR_3;
  else
   VAR_19 |= VAR_6;
 } else {
  if (VAR_20 > 4) {
   VAR_19 = VAR_8 | VAR_7;
  } else if (VAR_20 > 1) {
   VAR_19 = VAR_8 | VAR_4;
  } else {
   u8 VAR_21 = VAR_16->num_tx_queues +
    VAR_16->num_xdp_queues;
   if (VAR_21 > 63)
    VAR_19 = VAR_8 | VAR_4;
   else
    VAR_19 = VAR_5;
  }
 }

 FUNC_1(VAR_17, VAR_2, VAR_19);


 if (VAR_20) {
  u32 VAR_22 = FUNC_0(VAR_17, VAR_12);
  VAR_22 |= VAR_13;
  FUNC_1(VAR_17, VAR_12, VAR_22);
 }


 VAR_18 &= ~VAR_11;
 FUNC_1(VAR_17, VAR_10, VAR_18);
}
