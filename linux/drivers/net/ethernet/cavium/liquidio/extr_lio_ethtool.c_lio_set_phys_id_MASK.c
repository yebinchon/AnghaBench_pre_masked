
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int maj; int min; int rev; } ;
struct TYPE_6__ {TYPE_1__ ver; } ;
struct octeon_device {int chip_id; TYPE_2__ fw_info; } ;
struct TYPE_7__ {int phy_type; } ;
struct TYPE_8__ {TYPE_3__ s; } ;
struct oct_link_info {TYPE_4__ link; } ;
struct net_device {int dummy; } ;
struct lio {int phy_beacon_val; int led_ctrl_val; struct oct_link_info linfo; struct octeon_device* oct_dev; } ;
typedef enum ethtool_phys_id_state { ____Placeholder_ethtool_phys_id_state } ethtool_phys_id_state ;


 int VAR_0 ;




 struct lio* FUNC_0 (struct net_device*) ;
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
 int FUNC_1 (int,int,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (struct net_device*,int ,int ) ;
 int FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (struct lio*,int,int ,int*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_16,
      enum ethtool_phys_id_state VAR_17)
{
 struct lio *VAR_18 = FUNC_0(VAR_16);
 struct octeon_device *VAR_19 = VAR_18->oct_dev;
 struct oct_link_info *VAR_20;
 int VAR_21, VAR_22;
 u32 VAR_23;

 VAR_20 = &VAR_18->linfo;
 VAR_23 = FUNC_1(VAR_19->fw_info.ver.maj,
        VAR_19->fw_info.ver.min,
        VAR_19->fw_info.ver.rev);

 switch (VAR_17) {
 case 131:
  if (VAR_19->chip_id == VAR_9) {
   FUNC_2(VAR_16, VAR_11,
        VAR_13);
   return 2;

  } else if (VAR_19->chip_id == VAR_10) {

   VAR_22 = FUNC_4(VAR_18, 0,
         VAR_3,
         &VAR_18->phy_beacon_val);
   if (VAR_22)
    return VAR_22;

   VAR_22 = FUNC_4(VAR_18, 0,
         VAR_5,
         &VAR_18->led_ctrl_val);
   if (VAR_22)
    return VAR_22;


   VAR_21 = VAR_4;
   VAR_22 = FUNC_4(VAR_18, 1,
         VAR_3,
         &VAR_21);
   if (VAR_22)
    return VAR_22;

   VAR_21 = VAR_6;
   VAR_22 = FUNC_4(VAR_18, 1,
         VAR_5,
         &VAR_21);
   if (VAR_22)
    return VAR_22;
  } else if (VAR_19->chip_id == VAR_8) {
   FUNC_3(VAR_16, VAR_2);
   if (VAR_20->link.s.phy_type == VAR_7 &&
       VAR_23 > FUNC_1(1, 7, 2))
    return 2;
   else
    return 0;
  } else {
   return -VAR_0;
  }
  break;

 case 128:
  if (VAR_19->chip_id == VAR_8 &&
      VAR_20->link.s.phy_type == VAR_7 &&
      VAR_23 > FUNC_1(1, 7, 2))
   FUNC_3(VAR_16, VAR_2);
  else if (VAR_19->chip_id == VAR_9)
   FUNC_2(VAR_16, VAR_11,
        VAR_14);
  else
   return -VAR_0;

  break;

 case 129:
  if (VAR_19->chip_id == VAR_8 &&
      VAR_20->link.s.phy_type == VAR_7 &&
      VAR_23 > FUNC_1(1, 7, 2))
   FUNC_3(VAR_16, VAR_1);
  else if (VAR_19->chip_id == VAR_9)
   FUNC_2(VAR_16, VAR_11,
        VAR_15);
  else
   return -VAR_0;

  break;

 case 130:
  if (VAR_19->chip_id == VAR_9) {
   FUNC_2(VAR_16, VAR_11,
        VAR_12);
  } else if (VAR_19->chip_id == VAR_10) {

   VAR_22 = FUNC_4(VAR_18, 1,
         VAR_5,
         &VAR_18->led_ctrl_val);
   if (VAR_22)
    return VAR_22;

   VAR_22 = FUNC_4(VAR_18, 1,
         VAR_3,
         &VAR_18->phy_beacon_val);
   if (VAR_22)
    return VAR_22;
  } else if (VAR_19->chip_id == VAR_8) {
   FUNC_3(VAR_16, VAR_1);

   return 0;
  } else {
   return -VAR_0;
  }
  break;

 default:
  return -VAR_0;
 }

 return 0;
}
