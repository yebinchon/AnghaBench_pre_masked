
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int type; } ;
struct TYPE_3__ {int type; } ;
struct ixgbe_hw {TYPE_2__ phy; int device_id; TYPE_1__ mac; } ;
struct ixgbe_adapter {int flags; int flags2; struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ixgbe_hw*) ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (struct ixgbe_hw*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (struct ixgbe_hw*) ;
 int FUNC_4 (struct ixgbe_hw*,int ,int) ;
 int FUNC_5 (struct ixgbe_adapter*,int ) ;





 int VAR_17 ;

__attribute__((used)) static inline void FUNC_6(struct ixgbe_adapter *VAR_18, bool VAR_19,
        bool VAR_20)
{
 struct ixgbe_hw *VAR_21 = &VAR_18->hw;
 u32 VAR_22 = (VAR_6 & ~VAR_10);


 if (VAR_18->flags & VAR_16)
  VAR_22 &= ~VAR_8;

 if (VAR_18->flags2 & VAR_13)
  switch (VAR_18->hw.mac.type) {
  case 132:
   VAR_22 |= FUNC_0(VAR_21);
   break;
  case 131:
  case 130:
  case 129:
  case 128:
   VAR_22 |= VAR_11;
   break;
  default:
   break;
  }
 if (VAR_18->flags & VAR_14)
  VAR_22 |= FUNC_1(VAR_21);
 switch (VAR_18->hw.mac.type) {
 case 132:
  VAR_22 |= FUNC_1(VAR_21);
  VAR_22 |= FUNC_2(VAR_21);

 case 131:
 case 130:
 case 129:
 case 128:
  if (VAR_18->hw.device_id == VAR_2 ||
      VAR_18->hw.device_id == VAR_0 ||
      VAR_18->hw.device_id == VAR_1)
   VAR_22 |= FUNC_0(&VAR_18->hw);
  if (VAR_18->hw.phy.type == VAR_17)
   VAR_22 |= VAR_3;
  VAR_22 |= VAR_5;
  VAR_22 |= VAR_9;
  break;
 default:
  break;
 }

 if ((VAR_18->flags & VAR_15) &&
     !(VAR_18->flags2 & VAR_12))
  VAR_22 |= VAR_7;

 FUNC_4(&VAR_18->hw, VAR_4, VAR_22);
 if (VAR_19)
  FUNC_5(VAR_18, ~0);
 if (VAR_20)
  FUNC_3(&VAR_18->hw);
}
