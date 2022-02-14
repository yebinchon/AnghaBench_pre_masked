
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int features; } ;
struct ixgbe_adapter {int flags2; int rx_itr_setting; int flags; int hw_tcs; int num_rx_pools; int atr_sample_rate; TYPE_1__* ring_feature; } ;
typedef int netdev_features_t ;
struct TYPE_2__ {int limit; } ;


 int VAR_0 ;
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
 size_t VAR_19 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ixgbe_adapter*,int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct ixgbe_adapter*) ;
 int FUNC_4 (struct net_device*) ;
 struct ixgbe_adapter* FUNC_5 (struct net_device*) ;
 int VAR_20 ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_21,
         netdev_features_t VAR_22)
{
 struct ixgbe_adapter *VAR_23 = FUNC_5(VAR_21);
 netdev_features_t VAR_24 = VAR_21->features ^ VAR_22;
 bool VAR_25 = 0;


 if (!(VAR_22 & VAR_15)) {
  if (VAR_23->flags2 & VAR_1)
   VAR_25 = 1;
  VAR_23->flags2 &= ~VAR_1;
 } else if ((VAR_23->flags2 & VAR_0) &&
     !(VAR_23->flags2 & VAR_1)) {
  if (VAR_23->rx_itr_setting == 1 ||
      VAR_23->rx_itr_setting > VAR_8) {
   VAR_23->flags2 |= VAR_1;
   VAR_25 = 1;
  } else if ((VAR_24 ^ VAR_22) & VAR_15) {
   FUNC_0(VAR_20, "rx-usecs set too low, "
          "disabling RSC\n");
  }
 }





 if ((VAR_22 & VAR_16) || (VAR_22 & VAR_12)) {

  if (!(VAR_23->flags & VAR_4))
   VAR_25 = 1;

  VAR_23->flags &= ~VAR_3;
  VAR_23->flags |= VAR_4;
 } else {

  if (VAR_23->flags & VAR_4)
   VAR_25 = 1;

  VAR_23->flags &= ~VAR_4;


  if (VAR_23->flags & VAR_6 ||

      (VAR_23->hw_tcs > 1) ||

      (VAR_23->ring_feature[VAR_19].limit <= 1) ||

      (!VAR_23->atr_sample_rate))
   ;
  else
   VAR_23->flags |= VAR_3;
 }

 if (VAR_24 & VAR_17)
  VAR_25 = 1;

 VAR_21->features = VAR_22;

 if ((VAR_23->flags & VAR_7)) {
  if (VAR_22 & VAR_18) {
   VAR_23->flags2 |= VAR_2;
  } else {
   u32 VAR_26 = VAR_10;

   FUNC_1(VAR_23, VAR_26);
  }
 }

 if ((VAR_23->flags & VAR_5)) {
  if (VAR_22 & VAR_18) {
   VAR_23->flags2 |= VAR_2;
  } else {
   u32 VAR_27 = VAR_9;

   FUNC_1(VAR_23, VAR_27);
  }
 }

 if ((VAR_24 & VAR_11) && VAR_23->num_rx_pools > 1)
  FUNC_3(VAR_23);
 else if (VAR_25)
  FUNC_2(VAR_21);
 else if (VAR_24 & (VAR_14 |
       VAR_13))
  FUNC_4(VAR_21);

 return 1;
}
