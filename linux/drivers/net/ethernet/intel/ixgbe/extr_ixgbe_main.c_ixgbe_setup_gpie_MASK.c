
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int type; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
struct ixgbe_adapter {int flags; int flags2; struct ixgbe_hw hw; TYPE_1__* ring_feature; } ;
struct TYPE_3__ {int mask; } ;




 int VAR_0 ;
 int FUNC_0 (int) ;
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
 int FUNC_1 (struct ixgbe_hw*) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;
 size_t VAR_19 ;







__attribute__((used)) static void FUNC_3(struct ixgbe_adapter *VAR_20)
{
 struct ixgbe_hw *VAR_21 = &VAR_20->hw;
 u32 VAR_22 = 0;

 if (VAR_20->flags & VAR_4) {
  VAR_22 = VAR_8 | VAR_10 |
         VAR_9;
  VAR_22 |= VAR_7;




  switch (VAR_21->mac.type) {
  case 133:
   FUNC_2(VAR_21, VAR_0, VAR_1);
   break;
  case 132:
  case 131:
  case 130:
  case 129:
  case 128:
  default:
   FUNC_2(VAR_21, FUNC_0(0), 0xFFFFFFFF);
   FUNC_2(VAR_21, FUNC_0(1), 0xFFFFFFFF);
   break;
  }
 } else {


  FUNC_2(VAR_21, VAR_0, VAR_1);
 }




 if (VAR_20->flags & VAR_5) {
  VAR_22 &= ~VAR_14;

  switch (VAR_20->ring_feature[VAR_19].mask) {
  case 134:
   VAR_22 |= VAR_11;
   break;
  case 135:
   VAR_22 |= VAR_12;
   break;
  default:
   VAR_22 |= VAR_13;
   break;
  }
 }


 if (VAR_20->flags2 & VAR_2) {
  switch (VAR_20->hw.mac.type) {
  case 132:
   VAR_22 |= VAR_15;
   break;
  default:
   break;
  }
 }


 if (VAR_20->flags & VAR_3)
  VAR_22 |= FUNC_1(VAR_21);

 switch (VAR_21->mac.type) {
 case 132:
  VAR_22 |= VAR_17 | VAR_18;
  break;
 case 129:
 case 128:
  VAR_22 |= VAR_16;
  break;
 default:
  break;
 }

 FUNC_2(VAR_21, VAR_6, VAR_22);
}
