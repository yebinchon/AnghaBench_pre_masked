
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct e1000_phy_info {void* remote_rx; void* local_rx; int mdix_mode; int polarity_correction; int downshift; int cable_polarity; int extended_10bt_distance; int cable_length; } ;
struct e1000_hw {scalar_t__ media_type; scalar_t__ phy_type; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,struct e1000_phy_info*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,struct e1000_phy_info*) ;
 int VAR_13 ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,int*) ;
 int VAR_14 ;
 int FUNC_3 (char*) ;

s32 FUNC_4(struct e1000_hw *VAR_15, struct e1000_phy_info *VAR_16)
{
 s32 VAR_17;
 u16 VAR_18;

 VAR_16->cable_length = VAR_7;
 VAR_16->extended_10bt_distance = VAR_5;
 VAR_16->cable_polarity = VAR_14;
 VAR_16->downshift = VAR_8;
 VAR_16->polarity_correction = VAR_13;
 VAR_16->mdix_mode = VAR_6;
 VAR_16->local_rx = VAR_4;
 VAR_16->remote_rx = VAR_4;

 if (VAR_15->media_type != VAR_9) {
  FUNC_3("PHY info is only valid for copper media\n");
  return -VAR_0;
 }

 VAR_17 = FUNC_2(VAR_15, VAR_3, &VAR_18);
 if (VAR_17)
  return VAR_17;

 VAR_17 = FUNC_2(VAR_15, VAR_3, &VAR_18);
 if (VAR_17)
  return VAR_17;

 if ((VAR_18 & VAR_2) != VAR_2) {
  FUNC_3("PHY info is only valid if link is up\n");
  return -VAR_0;
 }

 if (VAR_15->phy_type == VAR_12)
  return FUNC_0(VAR_15, VAR_16);
 else if ((VAR_15->phy_type == VAR_11) ||
   (VAR_15->phy_type == VAR_10))
  return VAR_1;
 else
  return FUNC_1(VAR_15, VAR_16);
}
