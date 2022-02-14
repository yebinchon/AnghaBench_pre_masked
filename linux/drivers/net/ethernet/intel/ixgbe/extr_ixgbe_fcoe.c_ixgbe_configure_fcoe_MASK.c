
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct ixgbe_ring_feature {int offset; int indices; } ;
struct TYPE_5__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
struct ixgbe_adapter {int flags; TYPE_3__** rx_ring; struct ixgbe_hw hw; TYPE_1__* netdev; struct ixgbe_ring_feature* ring_feature; } ;
struct TYPE_6__ {int reg_idx; } ;
struct TYPE_4__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_3 (struct ixgbe_hw*,int ,int) ;
 int VAR_23 ;
 size_t VAR_24 ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_25 ;

void FUNC_5(struct ixgbe_adapter *VAR_26)
{
 struct ixgbe_ring_feature *VAR_27 = &VAR_26->ring_feature[VAR_24];
 struct ixgbe_hw *VAR_28 = &VAR_26->hw;
 int VAR_29, VAR_30, VAR_31, VAR_32 = 0;
 int VAR_33;
 u32 VAR_34;


 if (!(VAR_26->netdev->features & VAR_23))
  return;


 VAR_34 = VAR_0 | VAR_3 | VAR_4;
 if (VAR_26->flags & VAR_22) {
  VAR_34 |= VAR_7;
  VAR_34 |= FUNC_4(0) << VAR_8;
 }
 FUNC_3(VAR_28, FUNC_0(VAR_5), VAR_34);
 FUNC_3(VAR_28, FUNC_1(VAR_5), 0);


 if (!(VAR_26->flags & VAR_21))
  return;


 VAR_33 = VAR_16;
 if (VAR_26->hw.mac.type == VAR_25)
  VAR_33 = VAR_17;

 for (VAR_29 = 0; VAR_29 < VAR_33; VAR_29++) {
  if (VAR_26->hw.mac.type == VAR_25) {
   int VAR_35 = VAR_27->offset + ((VAR_29 + VAR_33) %
       VAR_27->indices);
   VAR_32 = VAR_26->rx_ring[VAR_35]->reg_idx;
   VAR_32 = (VAR_32 << VAR_14) &
       VAR_13;
  }

  VAR_31 = VAR_27->offset + (VAR_29 % VAR_27->indices);
  VAR_31 &= VAR_15;
  VAR_30 = VAR_26->rx_ring[VAR_31]->reg_idx;
  VAR_30 |= VAR_32;
  FUNC_3(VAR_28, FUNC_2(VAR_29), VAR_30);
 }
 FUNC_3(VAR_28, VAR_11, VAR_12);


 VAR_34 = VAR_1 | VAR_4;
 if (VAR_26->flags & VAR_22) {
  VAR_34 |= VAR_7;
  VAR_34 |= FUNC_4(0) << VAR_8;
 }
 FUNC_3(VAR_28, FUNC_0(VAR_6), VAR_34);


 VAR_30 = VAR_26->rx_ring[VAR_27->offset]->reg_idx;
 FUNC_3(VAR_28, FUNC_1(VAR_6),
   VAR_9 |
   (VAR_30 << VAR_10));


 FUNC_3(VAR_28, VAR_18,
   VAR_19 |
   (VAR_2 << VAR_20));
}
