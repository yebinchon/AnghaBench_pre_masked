
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ (* get_media_type ) (struct ixgbe_hw*) ;int * setup_link; int set_rate_select_speed; int setup_mac_link; int * flap_tx_laser; int * enable_tx_laser; int * disable_tx_laser; } ;
struct ixgbe_mac_info {TYPE_2__ ops; } ;
struct TYPE_3__ {scalar_t__ smart_speed; scalar_t__ multispeed_fiber; } ;
struct ixgbe_hw {TYPE_1__ phy; struct ixgbe_mac_info mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct ixgbe_hw*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*) ;

__attribute__((used)) static void FUNC_4(struct ixgbe_hw *VAR_11)
{
 struct ixgbe_mac_info *VAR_12 = &VAR_11->mac;




 if ((VAR_12->ops.get_media_type(VAR_11) == VAR_4) &&
     !FUNC_0(VAR_11)) {
  VAR_12->ops.disable_tx_laser =
           &VAR_0;
  VAR_12->ops.enable_tx_laser =
     &VAR_1;
  VAR_12->ops.flap_tx_laser = &VAR_2;
 } else {
  VAR_12->ops.disable_tx_laser = ((void*)0);
  VAR_12->ops.enable_tx_laser = ((void*)0);
  VAR_12->ops.flap_tx_laser = ((void*)0);
 }

 if (VAR_11->phy.multispeed_fiber) {

  VAR_12->ops.setup_link = &VAR_7;
  VAR_12->ops.setup_mac_link = VAR_6;
  VAR_12->ops.set_rate_select_speed =
            VAR_5;
 } else {
  if ((VAR_12->ops.get_media_type(VAR_11) ==
       VAR_3) &&
      (VAR_11->phy.smart_speed == VAR_9 ||
       VAR_11->phy.smart_speed == VAR_10) &&
       !FUNC_1(VAR_11))
   VAR_12->ops.setup_link = &VAR_8;
  else
   VAR_12->ops.setup_link = &VAR_6;
 }
}
