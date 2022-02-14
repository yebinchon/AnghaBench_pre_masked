
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_7__ {scalar_t__ (* get_speed_and_duplex ) (struct igc_hw*,scalar_t__*,scalar_t__*) ;} ;
struct igc_mac_info {TYPE_3__ ops; scalar_t__ autoneg; scalar_t__ autoneg_failed; } ;
struct TYPE_8__ {scalar_t__ requested_mode; void* current_mode; scalar_t__ strict_ieee; } ;
struct TYPE_5__ {scalar_t__ (* read_reg ) (struct igc_hw*,int ,scalar_t__*) ;} ;
struct TYPE_6__ {scalar_t__ media_type; TYPE_1__ ops; } ;
struct igc_hw {TYPE_4__ fc; struct igc_mac_info mac; TYPE_2__ phy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 void* VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_1 (struct igc_hw*) ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_2 (struct igc_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_3 (struct igc_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_4 (struct igc_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_5 (struct igc_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_6 (struct igc_hw*,scalar_t__*,scalar_t__*) ;

s32 FUNC_7(struct igc_hw *VAR_14)
{
 u16 VAR_15, VAR_16, VAR_17;
 struct igc_mac_info *VAR_18 = &VAR_14->mac;
 u16 VAR_19, VAR_20;
 s32 VAR_21 = 0;





 if (VAR_18->autoneg_failed) {
  if (VAR_14->phy.media_type == VAR_13)
   VAR_21 = FUNC_1(VAR_14);
 }

 if (VAR_21) {
  FUNC_0("Error forcing flow control settings\n");
  goto out;
 }






 if (VAR_14->phy.media_type == VAR_13 && VAR_18->autoneg) {




  VAR_21 = VAR_14->phy.ops.read_reg(VAR_14, VAR_8,
            &VAR_15);
  if (VAR_21)
   goto out;
  VAR_21 = VAR_14->phy.ops.read_reg(VAR_14, VAR_8,
            &VAR_15);
  if (VAR_21)
   goto out;

  if (!(VAR_15 & VAR_1)) {
   FUNC_0("Copper PHY and Auto Neg has not completed.\n");
   goto out;
  }







  VAR_21 = VAR_14->phy.ops.read_reg(VAR_14, VAR_6,
            &VAR_16);
  if (VAR_21)
   goto out;
  VAR_21 = VAR_14->phy.ops.read_reg(VAR_14, VAR_7,
            &VAR_17);
  if (VAR_21)
   goto out;
  if ((VAR_16 & VAR_3) &&
      (VAR_17 & VAR_5)) {






   if (VAR_14->fc.requested_mode == VAR_9) {
    VAR_14->fc.current_mode = VAR_9;
    FUNC_0("Flow Control = FULL.\n");
   } else {
    VAR_14->fc.current_mode = VAR_11;
    FUNC_0("Flow Control = RX PAUSE frames only.\n");
   }
  }
  else if (!(VAR_16 & VAR_3) &&
    (VAR_16 & VAR_2) &&
    (VAR_17 & VAR_5) &&
    (VAR_17 & VAR_4)) {
   VAR_14->fc.current_mode = VAR_12;
   FUNC_0("Flow Control = TX PAUSE frames only.\n");
  }







  else if ((VAR_16 & VAR_3) &&
    (VAR_16 & VAR_2) &&
    !(VAR_17 & VAR_5) &&
    (VAR_17 & VAR_4)) {
   VAR_14->fc.current_mode = VAR_11;
   FUNC_0("Flow Control = RX PAUSE frames only.\n");
  }
  else if ((VAR_14->fc.requested_mode == VAR_10) ||
    (VAR_14->fc.requested_mode == VAR_12) ||
    (VAR_14->fc.strict_ieee)) {
   VAR_14->fc.current_mode = VAR_10;
   FUNC_0("Flow Control = NONE.\n");
  } else {
   VAR_14->fc.current_mode = VAR_11;
   FUNC_0("Flow Control = RX PAUSE frames only.\n");
  }





  VAR_21 = VAR_14->mac.ops.get_speed_and_duplex(VAR_14, &VAR_19, &VAR_20);
  if (VAR_21) {
   FUNC_0("Error getting link speed and duplex\n");
   goto out;
  }

  if (VAR_20 == VAR_0)
   VAR_14->fc.current_mode = VAR_10;




  VAR_21 = FUNC_1(VAR_14);
  if (VAR_21) {
   FUNC_0("Error forcing flow control settings\n");
   goto out;
  }
 }

out:
 return 0;
}
