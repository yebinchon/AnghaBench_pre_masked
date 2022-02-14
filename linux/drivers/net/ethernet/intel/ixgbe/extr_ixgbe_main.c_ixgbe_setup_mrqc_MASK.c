
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
struct ixgbe_adapter {int hw_tcs; int flags; int flags2; int num_rx_pools; TYPE_1__* ring_feature; struct ixgbe_hw hw; } ;
struct TYPE_3__ {scalar_t__ mask; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ixgbe_hw*,int ) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 int FUNC_4 (struct ixgbe_adapter*) ;
 int FUNC_5 (struct ixgbe_adapter*) ;

__attribute__((used)) static void FUNC_6(struct ixgbe_adapter *VAR_26)
{
 struct ixgbe_hw *VAR_27 = &VAR_26->hw;
 u32 VAR_28 = 0, VAR_29 = 0, VAR_30 = 0;
 u32 VAR_31;


 VAR_31 = FUNC_1(VAR_27, VAR_20);
 VAR_31 |= VAR_21;
 FUNC_2(VAR_27, VAR_20, VAR_31);

 if (VAR_26->hw.mac.type == VAR_24) {
  if (VAR_26->ring_feature[VAR_22].mask)
   VAR_28 = VAR_7;
 } else {
  u8 VAR_32 = VAR_26->hw_tcs;

  if (VAR_26->flags & VAR_3) {
   if (VAR_32 > 4)
    VAR_28 = VAR_19;
   else if (VAR_32 > 1)
    VAR_28 = VAR_18;
   else if (VAR_26->ring_feature[VAR_23].mask ==
     VAR_0)
    VAR_28 = VAR_16;
   else
    VAR_28 = VAR_17;




   if (VAR_27->mac.type >= VAR_25)
    VAR_28 |= VAR_5;
  } else {
   if (VAR_32 > 4)
    VAR_28 = VAR_15;
   else if (VAR_32 > 1)
    VAR_28 = VAR_14;
   else
    VAR_28 = VAR_7;
  }
 }


 VAR_29 |= VAR_8 |
       VAR_9 |
       VAR_11 |
       VAR_12;

 if (VAR_26->flags2 & VAR_1)
  VAR_29 |= VAR_10;
 if (VAR_26->flags2 & VAR_2)
  VAR_29 |= VAR_13;

 if ((VAR_27->mac.type >= VAR_25) &&
     (VAR_26->flags & VAR_3)) {
  u16 VAR_33 = VAR_26->num_rx_pools;


  VAR_28 |= VAR_6;
  FUNC_2(VAR_27, VAR_4, VAR_28);


  FUNC_5(VAR_26);
  VAR_30 = VAR_7;
  VAR_30 |= VAR_29;

  while (VAR_33--)
   FUNC_2(VAR_27,
     FUNC_0(FUNC_3(VAR_33)),
     VAR_30);
 } else {
  FUNC_4(VAR_26);
  VAR_28 |= VAR_29;
  FUNC_2(VAR_27, VAR_4, VAR_28);
 }
}
