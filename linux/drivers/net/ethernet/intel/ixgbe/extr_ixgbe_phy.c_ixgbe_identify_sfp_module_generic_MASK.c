
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
typedef int u32 ;
typedef int u16 ;
struct TYPE_8__ {scalar_t__ (* read_i2c_eeprom ) (struct ixgbe_hw*,int ,scalar_t__*) ;} ;
struct TYPE_10__ {int sfp_type; scalar_t__ type; int sfp_setup_needed; int multispeed_fiber; scalar_t__ id; TYPE_3__ ops; } ;
struct TYPE_7__ {scalar_t__ (* get_media_type ) (struct ixgbe_hw*) ;int (* get_device_caps ) (struct ixgbe_hw*,int*) ;int (* set_lan_id ) (struct ixgbe_hw*) ;} ;
struct TYPE_9__ {scalar_t__ type; TYPE_2__ ops; } ;
struct TYPE_6__ {scalar_t__ lan_id; } ;
struct ixgbe_hw {TYPE_5__ phy; scalar_t__ allow_unsupported_sfp; TYPE_4__ mac; TYPE_1__ bus; struct ixgbe_adapter* back; } ;
struct ixgbe_adapter {int dummy; } ;
typedef scalar_t__ s32 ;
typedef enum ixgbe_sfp_type { ____Placeholder_ixgbe_sfp_type } ixgbe_sfp_type ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;

 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;



 int VAR_23 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ixgbe_hw*,char*) ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 void* VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 scalar_t__ VAR_39 ;
 scalar_t__ VAR_40 ;
 scalar_t__ VAR_41 ;
 scalar_t__ VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 void* VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 void* VAR_53 ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int ,scalar_t__*) ;
 int FUNC_4 (struct ixgbe_hw*,int*) ;
 int FUNC_5 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_6 (struct ixgbe_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_7 (struct ixgbe_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_8 (struct ixgbe_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_9 (struct ixgbe_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_10 (struct ixgbe_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_11 (struct ixgbe_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_12 (struct ixgbe_hw*,int ,scalar_t__*) ;

s32 FUNC_13(struct ixgbe_hw *VAR_54)
{
 struct ixgbe_adapter *VAR_55 = VAR_54->back;
 s32 VAR_56;
 u32 VAR_57 = 0;
 enum ixgbe_sfp_type VAR_58 = VAR_54->phy.sfp_type;
 u8 VAR_59 = 0;
 u8 VAR_60 = 0;
 u8 VAR_61 = 0;
 u8 VAR_62[3] = {0, 0, 0};
 u8 VAR_63 = 0;
 u8 VAR_64 = 0;
 u16 VAR_65 = 0;

 if (VAR_54->mac.ops.get_media_type(VAR_54) != VAR_25) {
  VAR_54->phy.sfp_type = VAR_49;
  return VAR_1;
 }


 VAR_54->mac.ops.set_lan_id(VAR_54);

 VAR_56 = VAR_54->phy.ops.read_i2c_eeprom(VAR_54,
          VAR_15,
          &VAR_59);

 if (VAR_56)
  goto err_read_i2c_eeprom;

 if (VAR_59 != VAR_16) {
  VAR_54->phy.type = VAR_35;
  return VAR_2;
 }
 VAR_56 = VAR_54->phy.ops.read_i2c_eeprom(VAR_54,
          VAR_9,
          &VAR_60);

 if (VAR_56)
  goto err_read_i2c_eeprom;

 VAR_56 = VAR_54->phy.ops.read_i2c_eeprom(VAR_54,
          VAR_5,
          &VAR_61);

 if (VAR_56)
  goto err_read_i2c_eeprom;
 VAR_56 = VAR_54->phy.ops.read_i2c_eeprom(VAR_54,
          VAR_11,
          &VAR_63);

 if (VAR_56)
  goto err_read_i2c_eeprom;
 if (VAR_54->mac.type == VAR_24) {
  if (VAR_63 & VAR_13)
   VAR_54->phy.sfp_type = VAR_45;
  else if (VAR_61 & VAR_4)
   VAR_54->phy.sfp_type = VAR_50;
  else if (VAR_61 & VAR_3)
   VAR_54->phy.sfp_type = VAR_48;
  else
   VAR_54->phy.sfp_type = VAR_53;
 } else {
  if (VAR_63 & VAR_13) {
   if (VAR_54->bus.lan_id == 0)
    VAR_54->phy.sfp_type =
          VAR_46;
   else
    VAR_54->phy.sfp_type =
          VAR_47;
  } else if (VAR_63 & VAR_12) {
   VAR_54->phy.ops.read_i2c_eeprom(
     VAR_54, VAR_10,
     &VAR_64);
   if (VAR_64 &
       VAR_14) {
    if (VAR_54->bus.lan_id == 0)
     VAR_54->phy.sfp_type =
     VAR_43;
    else
     VAR_54->phy.sfp_type =
     VAR_44;
   } else {
    VAR_54->phy.sfp_type =
      VAR_53;
   }
  } else if (VAR_61 &
      (VAR_4 |
       VAR_3)) {
   if (VAR_54->bus.lan_id == 0)
    VAR_54->phy.sfp_type =
           VAR_51;
   else
    VAR_54->phy.sfp_type =
           VAR_52;
  } else if (VAR_60 & VAR_8) {
   if (VAR_54->bus.lan_id == 0)
    VAR_54->phy.sfp_type =
     VAR_37;
   else
    VAR_54->phy.sfp_type =
     VAR_38;
  } else if (VAR_60 & VAR_7) {
   if (VAR_54->bus.lan_id == 0)
    VAR_54->phy.sfp_type =
     VAR_41;
   else
    VAR_54->phy.sfp_type =
     VAR_42;
  } else if (VAR_60 & VAR_6) {
   if (VAR_54->bus.lan_id == 0)
    VAR_54->phy.sfp_type =
     VAR_39;
   else
    VAR_54->phy.sfp_type =
     VAR_40;
  } else {
   VAR_54->phy.sfp_type = VAR_53;
  }
 }

 if (VAR_54->phy.sfp_type != VAR_58)
  VAR_54->phy.sfp_setup_needed = 1;


 VAR_54->phy.multispeed_fiber = 0;
 if (((VAR_60 & VAR_7) &&
      (VAR_61 & VAR_4)) ||
     ((VAR_60 & VAR_6) &&
      (VAR_61 & VAR_3)))
  VAR_54->phy.multispeed_fiber = 1;


 if (VAR_54->phy.type != VAR_26) {
  VAR_54->phy.id = VAR_59;
  VAR_56 = VAR_54->phy.ops.read_i2c_eeprom(VAR_54,
         VAR_17,
         &VAR_62[0]);

  if (VAR_56 != 0)
   goto err_read_i2c_eeprom;

  VAR_56 = VAR_54->phy.ops.read_i2c_eeprom(VAR_54,
         VAR_19,
         &VAR_62[1]);

  if (VAR_56 != 0)
   goto err_read_i2c_eeprom;

  VAR_56 = VAR_54->phy.ops.read_i2c_eeprom(VAR_54,
         VAR_21,
         &VAR_62[2]);

  if (VAR_56 != 0)
   goto err_read_i2c_eeprom;

  VAR_57 =
    ((VAR_62[0] << VAR_18) |
     (VAR_62[1] << VAR_20) |
     (VAR_62[2] << VAR_22));

  switch (VAR_57) {
  case 128:
   if (VAR_63 & VAR_13)
    VAR_54->phy.type =
         VAR_32;
   break;
  case 130:
   if (VAR_63 & VAR_12)
    VAR_54->phy.type = VAR_30;
   else
    VAR_54->phy.type = VAR_29;
   break;
  case 131:
   VAR_54->phy.type = VAR_28;
   break;
  case 129:
   VAR_54->phy.type = VAR_31;
   break;
  default:
   if (VAR_63 & VAR_13)
    VAR_54->phy.type =
      VAR_33;
   else if (VAR_63 & VAR_12)
    VAR_54->phy.type =
     VAR_27;
   else
    VAR_54->phy.type = VAR_34;
   break;
  }
 }


 if (VAR_63 & (VAR_13 |
     VAR_12))
  return 0;


 if (VAR_61 == 0 &&
     !(VAR_54->phy.sfp_type == VAR_38 ||
       VAR_54->phy.sfp_type == VAR_37 ||
       VAR_54->phy.sfp_type == VAR_39 ||
       VAR_54->phy.sfp_type == VAR_40 ||
       VAR_54->phy.sfp_type == VAR_41 ||
       VAR_54->phy.sfp_type == VAR_42)) {
  VAR_54->phy.type = VAR_35;
  return VAR_2;
 }


 if (VAR_54->mac.type == VAR_24)
  return 0;

 VAR_54->mac.ops.get_device_caps(VAR_54, &VAR_65);
 if (!(VAR_65 & VAR_0) &&
     !(VAR_54->phy.sfp_type == VAR_37 ||
       VAR_54->phy.sfp_type == VAR_38 ||
       VAR_54->phy.sfp_type == VAR_39 ||
       VAR_54->phy.sfp_type == VAR_40 ||
       VAR_54->phy.sfp_type == VAR_41 ||
       VAR_54->phy.sfp_type == VAR_42)) {

  if (VAR_54->phy.type == VAR_31)
   return 0;
  if (VAR_54->allow_unsupported_sfp) {
   FUNC_0(VAR_23, "WARNING: Intel (R) Network Connections are quality tested using Intel (R) Ethernet Optics.  Using untested modules is not supported and may cause unstable operation or damage to the module or the adapter.  Intel Corporation is not responsible for any harm caused by using untested modules.\n");
   return 0;
  }
  FUNC_1(VAR_54, "SFP+ module not supported\n");
  VAR_54->phy.type = VAR_35;
  return VAR_2;
 }
 return 0;

err_read_i2c_eeprom:
 VAR_54->phy.sfp_type = VAR_49;
 if (VAR_54->phy.type != VAR_26) {
  VAR_54->phy.id = 0;
  VAR_54->phy.type = VAR_36;
 }
 return VAR_1;
}
