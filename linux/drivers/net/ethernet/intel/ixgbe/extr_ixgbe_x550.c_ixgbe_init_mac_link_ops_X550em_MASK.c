
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* get_media_type ) (struct ixgbe_hw*) ;int setup_link; int check_link; int setup_fc; int set_rate_select_speed; int setup_mac_link; int * flap_tx_laser; int * enable_tx_laser; int * disable_tx_laser; } ;
struct ixgbe_mac_info {scalar_t__ type; TYPE_1__ ops; } ;
struct ixgbe_hw {struct ixgbe_mac_info mac; int device_id; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ixgbe_hw*) ;
 scalar_t__ VAR_4 ;



 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct ixgbe_hw*) ;

__attribute__((used)) static void FUNC_2(struct ixgbe_hw *VAR_14)
{
 struct ixgbe_mac_info *VAR_15 = &VAR_14->mac;

 VAR_15->ops.setup_fc = VAR_7;

 switch (VAR_15->ops.get_media_type(VAR_14)) {
 case 128:



  VAR_15->ops.disable_tx_laser = ((void*)0);
  VAR_15->ops.enable_tx_laser = ((void*)0);
  VAR_15->ops.flap_tx_laser = ((void*)0);
  VAR_15->ops.setup_link = VAR_8;
  switch (VAR_14->device_id) {
  case 131:
   VAR_15->ops.setup_mac_link = VAR_9;
   break;
  case 132:
   VAR_15->ops.setup_mac_link =
      VAR_10;
   break;
  default:
   VAR_15->ops.setup_mac_link =
      VAR_11;
   break;
  }
  VAR_15->ops.set_rate_select_speed =
     VAR_5;
  break;
 case 129:
  if (VAR_14->device_id == VAR_2)
   break;
  VAR_15->ops.setup_link = VAR_12;
  VAR_15->ops.setup_fc = VAR_6;
  VAR_15->ops.check_link = VAR_3;
  break;
 case 130:
  if (VAR_14->device_id == VAR_0 ||
      VAR_14->device_id == VAR_1)
   VAR_15->ops.setup_link = VAR_13;
  break;
 default:
  break;
 }


 if (VAR_14->mac.type == VAR_4)
  FUNC_0(VAR_14);
}
