
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct i40e_vsi {struct i40e_pf* back; } ;
struct i40e_profile_segment {int name; int version; } ;
struct i40e_profile_section_header {int dummy; } ;
struct i40e_profile_info {int name; int op; int version; int track_id; } ;
struct i40e_pf {int hw; } ;
struct i40e_package_header {int dummy; } ;
struct i40e_netdev_priv {struct i40e_vsi* vsi; } ;
struct i40e_metadata_segment {int track_id; } ;
typedef scalar_t__ i40e_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int *,struct i40e_profile_segment*,int *,int ) ;
 int FUNC_1 (int *,struct i40e_profile_info*) ;
 int FUNC_2 (int *,struct i40e_profile_info*) ;
 int FUNC_3 (struct net_device*,struct i40e_package_header*,size_t) ;
 scalar_t__ FUNC_4 (int *,struct i40e_profile_segment*,int *,int ) ;
 scalar_t__ FUNC_5 (int ,struct i40e_package_header*) ;
 scalar_t__ FUNC_6 (int *,struct i40e_profile_segment*,int ) ;
 scalar_t__ FUNC_7 (int *,struct i40e_profile_segment*,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (struct net_device*,char*) ;
 struct i40e_netdev_priv* FUNC_10 (struct net_device*) ;

int FUNC_11(struct net_device *VAR_9, const u8 *VAR_10, size_t VAR_11,
    bool VAR_12)
{
 u8 VAR_13[sizeof(struct i40e_profile_section_header) +
       sizeof(struct i40e_profile_info)];
 struct i40e_metadata_segment *VAR_14;
 struct i40e_profile_segment *VAR_15;
 struct i40e_profile_info VAR_16;
 struct i40e_package_header *VAR_17;
 i40e_status VAR_18;
 struct i40e_netdev_priv *VAR_19 = FUNC_10(VAR_9);
 struct i40e_vsi *VAR_20 = VAR_19->vsi;
 struct i40e_pf *VAR_21 = VAR_20->back;
 u32 VAR_22;
 int VAR_23;

 VAR_17 = (struct i40e_package_header *)VAR_10;
 if (!FUNC_3(VAR_9, VAR_17, VAR_11))
  return -VAR_0;

 if (VAR_11 < (sizeof(struct i40e_package_header) +
      sizeof(struct i40e_metadata_segment) + sizeof(u32) * 2)) {
  FUNC_9(VAR_9, "Invalid DDP recipe size.");
  return -VAR_0;
 }


 VAR_14 = (struct i40e_metadata_segment *)
  FUNC_5(VAR_8, VAR_17);
 if (!VAR_14) {
  FUNC_9(VAR_9, "Failed to find metadata segment in DDP recipe.");
  return -VAR_0;
 }

 VAR_22 = VAR_14->track_id;
 VAR_15 = (struct i40e_profile_segment *)
  FUNC_5(VAR_7, VAR_17);
 if (!VAR_15) {
  FUNC_9(VAR_9, "Failed to find profile segment in DDP recipe.");
  return -VAR_0;
 }

 VAR_16.track_id = VAR_22;
 VAR_16.version = VAR_15->version;
 if (VAR_12)
  VAR_16.op = VAR_3;
 else
  VAR_16.op = VAR_5;

 FUNC_8(VAR_16.name, VAR_15->name, VAR_4);


 VAR_23 = FUNC_1(&VAR_21->hw, &VAR_16);
 if (VAR_23 < 0) {
  FUNC_9(VAR_9, "Failed to fetch loaded profiles.");
  return VAR_23;
 }
 if (VAR_12) {
  if (VAR_23 > 0) {
   FUNC_9(VAR_9, "DDP profile already loaded.");
   return -VAR_0;
  }
  VAR_23 = FUNC_2(&VAR_21->hw, &VAR_16);
  if (VAR_23 < 0) {
   FUNC_9(VAR_9, "Failed to fetch loaded profiles.");
   return VAR_23;
  }
  if (VAR_23 > 0) {
   FUNC_9(VAR_9, "DDP profile overlaps with existing one.");
   return -VAR_0;
  }
 } else {
  if (VAR_23 == 0) {
   FUNC_9(VAR_9,
       "DDP profile for deletion does not exist.");
   return -VAR_0;
  }
 }


 if (VAR_12) {
  VAR_18 = FUNC_7(&VAR_21->hw, VAR_15, VAR_22);
  if (VAR_18) {
   if (VAR_18 == VAR_6) {
    FUNC_9(VAR_9,
        "Profile is not supported by the device.");
    return -VAR_2;
   }
   FUNC_9(VAR_9, "Failed to write DDP profile.");
   return -VAR_1;
  }
 } else {
  VAR_18 = FUNC_6(&VAR_21->hw, VAR_15, VAR_22);
  if (VAR_18) {
   FUNC_9(VAR_9, "Failed to remove DDP profile.");
   return -VAR_1;
  }
 }


 if (VAR_12) {
  VAR_18 = FUNC_0(&VAR_21->hw, VAR_15, VAR_13,
     VAR_22);
  if (VAR_18) {
   FUNC_9(VAR_9, "Failed to add DDP profile info.");
   return -VAR_1;
  }
 } else {
  VAR_18 = FUNC_4(&VAR_21->hw, VAR_15, VAR_13,
     VAR_22);
  if (VAR_18) {
   FUNC_9(VAR_9, "Failed to restore DDP profile info.");
   return -VAR_1;
  }
 }

 return 0;
}
