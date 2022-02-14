
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct i40e_vsi {int netdev; struct i40e_pf* back; } ;
struct TYPE_3__ {scalar_t__ phy_type; int* module_type; } ;
struct TYPE_4__ {TYPE_1__ link_info; } ;
struct i40e_hw {int flags; TYPE_2__ phy; } ;
struct i40e_pf {struct i40e_hw hw; } ;
struct i40e_netdev_priv {struct i40e_vsi* vsi; } ;
struct ethtool_modinfo {void* eeprom_len; void* type; } ;
typedef scalar_t__ i40e_status ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;



 scalar_t__ VAR_17 ;
 scalar_t__ FUNC_0 (struct i40e_hw*,int ,int ,int ,int*,int *) ;
 scalar_t__ FUNC_1 (struct i40e_hw*) ;
 int FUNC_2 (int ,char*) ;
 struct i40e_netdev_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_18,
    struct ethtool_modinfo *VAR_19)
{
 struct i40e_netdev_priv *VAR_20 = FUNC_3(VAR_18);
 struct i40e_vsi *VAR_21 = VAR_20->vsi;
 struct i40e_pf *VAR_22 = VAR_21->back;
 struct i40e_hw *VAR_23 = &VAR_22->hw;
 u32 VAR_24 = 0;
 u32 VAR_25 = 0;
 u32 VAR_26 = 0;
 i40e_status VAR_27;
 u32 VAR_28 = 0;


 if (!(VAR_23->flags & VAR_9)) {
  FUNC_2(VAR_21->netdev, "Module EEPROM memory read not supported. Please update the NVM image.\n");
  return -VAR_0;
 }

 VAR_27 = FUNC_1(VAR_23);
 if (VAR_27)
  return -VAR_1;

 if (VAR_23->phy.link_info.phy_type == VAR_17) {
  FUNC_2(VAR_21->netdev, "Cannot read module EEPROM memory. No module connected.\n");
  return -VAR_0;
 }

 VAR_28 = VAR_23->phy.link_info.module_type[0];

 switch (VAR_28) {
 case 128:
  VAR_27 = FUNC_0(VAR_23,
    VAR_8,
    VAR_10,
    VAR_13,
    &VAR_24, ((void*)0));
  if (VAR_27)
   return -VAR_1;

  VAR_27 = FUNC_0(VAR_23,
    VAR_8,
    VAR_10,
    VAR_14,
    &VAR_25, ((void*)0));
  if (VAR_27)
   return -VAR_1;




  if (VAR_25 & VAR_15) {
   FUNC_4(VAR_21->netdev, "Module address swap to access page 0xA2 is not supported.\n");
   VAR_19->type = VAR_2;
   VAR_19->eeprom_len = VAR_3;
  } else if (VAR_24 == 0x00) {

   VAR_19->type = VAR_2;
   VAR_19->eeprom_len = VAR_3;
  } else if (!(VAR_25 & VAR_16)) {



   VAR_19->type = VAR_2;
   VAR_19->eeprom_len = VAR_3;
  } else {
   VAR_19->type = VAR_5;
   VAR_19->eeprom_len = VAR_6;
  }
  break;
 case 129:

  VAR_27 = FUNC_0(VAR_23,
    VAR_8,
    0,
    VAR_12,
    &VAR_26, ((void*)0));
  if (VAR_27)
   return -VAR_1;

  if (VAR_26 > 0x02) {

   VAR_19->type = VAR_7;
   VAR_19->eeprom_len = VAR_11;
  } else {
   VAR_19->type = VAR_4;
   VAR_19->eeprom_len = VAR_11;
  }
  break;
 case 130:
  VAR_19->type = VAR_7;
  VAR_19->eeprom_len = VAR_11;
  break;
 default:
  FUNC_2(VAR_21->netdev, "Module type unrecognized\n");
  return -VAR_0;
 }
 return 0;
}
