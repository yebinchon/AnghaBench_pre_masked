
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int features; int flags; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_3__ {int user_set_promisc; } ;
struct ixgbe_hw {TYPE_2__ mac; TYPE_1__ addr_ctrl; } ;
struct ixgbe_adapter {struct ixgbe_hw hw; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct net_device*,int ,int ) ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_5 (struct ixgbe_adapter*) ;
 int FUNC_6 (struct ixgbe_adapter*) ;
 int FUNC_7 (struct ixgbe_adapter*) ;
 int FUNC_8 (struct ixgbe_adapter*) ;
 int FUNC_9 (struct net_device*) ;
 struct ixgbe_adapter* FUNC_10 (struct net_device*) ;

void FUNC_11(struct net_device *VAR_20)
{
 struct ixgbe_adapter *VAR_21 = FUNC_10(VAR_20);
 struct ixgbe_hw *VAR_22 = &VAR_21->hw;
 u32 VAR_23, VAR_24 = VAR_10 | VAR_9;
 netdev_features_t VAR_25 = VAR_20->features;
 int VAR_26;


 VAR_23 = FUNC_0(VAR_22, VAR_2);


 VAR_23 &= ~VAR_7;
 VAR_23 |= VAR_3;
 VAR_23 |= VAR_4;
 VAR_23 |= VAR_6;


 VAR_23 &= ~(VAR_8 | VAR_5);
 if (VAR_20->flags & VAR_1) {
  VAR_22->addr_ctrl.user_set_promisc = 1;
  VAR_23 |= (VAR_8 | VAR_5);
  VAR_24 |= VAR_11;
  VAR_25 &= ~VAR_14;
 } else {
  if (VAR_20->flags & VAR_0) {
   VAR_23 |= VAR_5;
   VAR_24 |= VAR_11;
  }
  VAR_22->addr_ctrl.user_set_promisc = 0;
 }






 if (FUNC_4(VAR_20, VAR_18, VAR_19)) {
  VAR_23 |= VAR_8;
  VAR_24 |= VAR_13;
 }





 VAR_26 = FUNC_9(VAR_20);
 if (VAR_26 < 0) {
  VAR_23 |= VAR_5;
  VAR_24 |= VAR_11;
 } else if (VAR_26) {
  VAR_24 |= VAR_12;
 }

 if (VAR_22->mac.type != VAR_17) {
  VAR_24 |= FUNC_0(VAR_22, FUNC_1(FUNC_3(0))) &
    ~(VAR_11 | VAR_12 |
      VAR_13);
  FUNC_2(VAR_22, FUNC_1(FUNC_3(0)), VAR_24);
 }


 if (VAR_25 & VAR_16) {


  VAR_23 |= (VAR_7 |
     VAR_3 |
     VAR_6);

  VAR_23 &= ~(VAR_4);

 }

 FUNC_2(VAR_22, VAR_2, VAR_23);

 if (VAR_25 & VAR_15)
  FUNC_8(VAR_21);
 else
  FUNC_7(VAR_21);

 if (VAR_25 & VAR_14)
  FUNC_5(VAR_21);
 else
  FUNC_6(VAR_21);
}
