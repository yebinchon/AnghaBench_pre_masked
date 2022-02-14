
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_5__ {scalar_t__ (* read ) (struct ixgbe_hw*,scalar_t__,scalar_t__*) ;} ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct TYPE_4__ {scalar_t__ sfp_type; } ;
struct ixgbe_hw {scalar_t__ device_id; TYPE_3__ eeprom; TYPE_1__ phy; } ;
typedef int s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct ixgbe_hw*,char*) ;
 int FUNC_1 (struct ixgbe_hw*,char*,scalar_t__) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*,scalar_t__,scalar_t__*) ;

s32 FUNC_6(struct ixgbe_hw *VAR_20,
     u16 *VAR_21,
     u16 *VAR_22)
{
 u16 VAR_23;
 u16 VAR_24 = VAR_20->phy.sfp_type;

 if (VAR_20->phy.sfp_type == VAR_19)
  return VAR_3;

 if (VAR_20->phy.sfp_type == VAR_16)
  return VAR_2;

 if ((VAR_20->device_id == VAR_0) &&
     (VAR_20->phy.sfp_type == VAR_15))
  return VAR_3;





 if (VAR_24 == VAR_13 ||
     VAR_24 == VAR_9 ||
     VAR_24 == VAR_7 ||
     VAR_24 == VAR_11)
  VAR_24 = VAR_17;
 else if (VAR_24 == VAR_14 ||
   VAR_24 == VAR_10 ||
   VAR_24 == VAR_8 ||
   VAR_24 == VAR_12)
  VAR_24 = VAR_18;


 if (VAR_20->eeprom.ops.read(VAR_20, VAR_6, VAR_21)) {
  FUNC_1(VAR_20, "eeprom read at %d failed\n",
         VAR_6);
  return VAR_4;
 }

 if ((!*VAR_21) || (*VAR_21 == 0xFFFF))
  return VAR_4;


 (*VAR_21)++;





 if (VAR_20->eeprom.ops.read(VAR_20, *VAR_21, &VAR_23))
  goto err_phy;

 while (VAR_23 != VAR_5) {
  if (VAR_23 == VAR_24) {
   (*VAR_21)++;
   if (VAR_20->eeprom.ops.read(VAR_20, *VAR_21, VAR_22))
    goto err_phy;
   if ((!*VAR_22) || (*VAR_22 == 0xFFFF)) {
    FUNC_0(VAR_20, "SFP+ module not supported\n");
    return VAR_3;
   } else {
    break;
   }
  } else {
   (*VAR_21) += 2;
   if (VAR_20->eeprom.ops.read(VAR_20, *VAR_21, &VAR_23))
    goto err_phy;
  }
 }

 if (VAR_23 == VAR_5) {
  FUNC_0(VAR_20, "No matching SFP+ module found\n");
  return VAR_3;
 }

 return 0;

err_phy:
 FUNC_1(VAR_20, "eeprom read at offset %d failed\n", *VAR_21);
 return VAR_1;
}
