
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_9__ {scalar_t__ (* read_i2c_eeprom ) (struct ixgbe_hw*,int ,scalar_t__*) ;} ;
struct TYPE_10__ {int sfp_type; scalar_t__ type; int sfp_setup_needed; int multispeed_fiber; scalar_t__ id; TYPE_4__ ops; } ;
struct TYPE_6__ {scalar_t__ (* get_media_type ) (struct ixgbe_hw*) ;int (* get_device_caps ) (struct ixgbe_hw*,int*) ;int (* set_lan_id ) (struct ixgbe_hw*) ;} ;
struct TYPE_7__ {TYPE_1__ ops; } ;
struct TYPE_8__ {scalar_t__ lan_id; } ;
struct ixgbe_hw {TYPE_5__ phy; scalar_t__ allow_unsupported_sfp; TYPE_2__ mac; TYPE_3__ bus; struct ixgbe_adapter* back; } ;
struct ixgbe_adapter {int dummy; } ;
typedef scalar_t__ s32 ;
typedef enum ixgbe_sfp_type { ____Placeholder_ixgbe_sfp_type } ixgbe_sfp_type ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ixgbe_hw*,char*) ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 void* VAR_31 ;
 scalar_t__ VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 void* VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*,int ,scalar_t__*) ;
 int FUNC_5 (struct ixgbe_hw*,int*) ;
 int FUNC_6 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_7 (struct ixgbe_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_8 (struct ixgbe_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_9 (struct ixgbe_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_10 (struct ixgbe_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_11 (struct ixgbe_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_12 (struct ixgbe_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_13 (struct ixgbe_hw*,int ,scalar_t__*) ;

__attribute__((used)) static s32 FUNC_14(struct ixgbe_hw *VAR_40)
{
 struct ixgbe_adapter *VAR_41 = VAR_40->back;
 s32 VAR_42;
 u32 VAR_43 = 0;
 enum ixgbe_sfp_type VAR_44 = VAR_40->phy.sfp_type;
 u8 VAR_45 = 0;
 u8 VAR_46 = 0;
 u8 VAR_47 = 0;
 u8 VAR_48[3] = {0, 0, 0};
 u16 VAR_49 = 0;
 u8 VAR_50 = 0;
 u8 VAR_51 = 0;
 u8 VAR_52 = 0;
 bool VAR_53 = 0;

 if (VAR_40->mac.ops.get_media_type(VAR_40) != VAR_26) {
  VAR_40->phy.sfp_type = VAR_37;
  return VAR_1;
 }


 VAR_40->mac.ops.set_lan_id(VAR_40);

 VAR_42 = VAR_40->phy.ops.read_i2c_eeprom(VAR_40, VAR_7,
          &VAR_45);

 if (VAR_42 != 0)
  goto err_read_i2c_eeprom;

 if (VAR_45 != VAR_8) {
  VAR_40->phy.type = VAR_31;
  return VAR_2;
 }

 VAR_40->phy.id = VAR_45;

 VAR_42 = VAR_40->phy.ops.read_i2c_eeprom(VAR_40, VAR_9,
          &VAR_47);

 if (VAR_42 != 0)
  goto err_read_i2c_eeprom;

 VAR_42 = VAR_40->phy.ops.read_i2c_eeprom(VAR_40, VAR_10,
          &VAR_46);

 if (VAR_42 != 0)
  goto err_read_i2c_eeprom;

 if (VAR_47 & VAR_15) {
  VAR_40->phy.type = VAR_29;
  if (VAR_40->bus.lan_id == 0)
   VAR_40->phy.sfp_type = VAR_35;
  else
   VAR_40->phy.sfp_type = VAR_36;
 } else if (VAR_47 & (VAR_4 |
         VAR_3)) {
  if (VAR_40->bus.lan_id == 0)
   VAR_40->phy.sfp_type = VAR_38;
  else
   VAR_40->phy.sfp_type = VAR_39;
 } else {
  if (VAR_47 & VAR_14)
   VAR_53 = 1;

  if (!VAR_53) {



   VAR_40->phy.ops.read_i2c_eeprom(VAR_40,
     VAR_12,
     &VAR_50);

   VAR_40->phy.ops.read_i2c_eeprom(VAR_40,
     VAR_11,
     &VAR_51);

   VAR_40->phy.ops.read_i2c_eeprom(VAR_40,
     VAR_16,
     &VAR_52);

   if ((VAR_50 ==
         VAR_13) &&
       (VAR_51 > 0) &&
       ((VAR_52 >> 4) ==
         VAR_17))
    VAR_53 = 1;
  }

  if (VAR_53) {
   VAR_40->phy.type = VAR_27;
   if (VAR_40->bus.lan_id == 0)
    VAR_40->phy.sfp_type =
      VAR_33;
   else
    VAR_40->phy.sfp_type =
      VAR_34;
  } else {

   VAR_40->phy.type = VAR_31;
   return VAR_2;
  }
 }

 if (VAR_40->phy.sfp_type != VAR_44)
  VAR_40->phy.sfp_setup_needed = 1;


 VAR_40->phy.multispeed_fiber = 0;
 if (((VAR_46 & VAR_6) &&
      (VAR_47 & VAR_4)) ||
     ((VAR_46 & VAR_5) &&
      (VAR_47 & VAR_3)))
  VAR_40->phy.multispeed_fiber = 1;


 if (VAR_47 & (VAR_4 |
         VAR_3)) {
  VAR_42 = VAR_40->phy.ops.read_i2c_eeprom(VAR_40,
     VAR_18,
     &VAR_48[0]);

  if (VAR_42 != 0)
   goto err_read_i2c_eeprom;

  VAR_42 = VAR_40->phy.ops.read_i2c_eeprom(VAR_40,
     VAR_19,
     &VAR_48[1]);

  if (VAR_42 != 0)
   goto err_read_i2c_eeprom;

  VAR_42 = VAR_40->phy.ops.read_i2c_eeprom(VAR_40,
     VAR_20,
     &VAR_48[2]);

  if (VAR_42 != 0)
   goto err_read_i2c_eeprom;

  VAR_43 =
   ((VAR_48[0] << VAR_21) |
    (VAR_48[1] << VAR_22) |
    (VAR_48[2] << VAR_23));

  if (VAR_43 == VAR_24)
   VAR_40->phy.type = VAR_28;
  else
   VAR_40->phy.type = VAR_30;

  VAR_40->mac.ops.get_device_caps(VAR_40, &VAR_49);
  if (!(VAR_49 & VAR_0)) {

   if (VAR_40->phy.type == VAR_28)
    return 0;
   if (VAR_40->allow_unsupported_sfp) {
    FUNC_0(VAR_25, "WARNING: Intel (R) Network Connections are quality tested using Intel (R) Ethernet Optics. Using untested modules is not supported and may cause unstable operation or damage to the module or the adapter. Intel Corporation is not responsible for any harm caused by using untested modules.\n");
    return 0;
   }
   FUNC_1(VAR_40, "QSFP module not supported\n");
   VAR_40->phy.type = VAR_31;
   return VAR_2;
  }
  return 0;
 }
 return 0;

err_read_i2c_eeprom:
 VAR_40->phy.sfp_type = VAR_37;
 VAR_40->phy.id = 0;
 VAR_40->phy.type = VAR_32;

 return VAR_1;
}
