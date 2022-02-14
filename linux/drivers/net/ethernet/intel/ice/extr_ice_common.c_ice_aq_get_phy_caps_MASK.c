
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct ice_sq_cd {int dummy; } ;
struct TYPE_4__ {void* phy_type_high; void* phy_type_low; } ;
struct ice_port_info {TYPE_2__ phy; int hw; } ;
struct ice_aqc_get_phy_caps_data {int phy_type_high; int phy_type_low; } ;
struct ice_aqc_get_phy_caps {int param0; } ;
struct TYPE_3__ {struct ice_aqc_get_phy_caps get_phy; } ;
struct ice_aq_desc {TYPE_1__ params; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct ice_aq_desc*,struct ice_aqc_get_phy_caps_data*,int,struct ice_sq_cd*) ;
 int VAR_4 ;
 int FUNC_2 (struct ice_aq_desc*,int ) ;
 void* FUNC_3 (int ) ;

enum ice_status
FUNC_4(struct ice_port_info *VAR_5, bool VAR_6, u8 VAR_7,
      struct ice_aqc_get_phy_caps_data *VAR_8,
      struct ice_sq_cd *VAR_9)
{
 struct ice_aqc_get_phy_caps *VAR_10;
 u16 VAR_11 = sizeof(*VAR_8);
 struct ice_aq_desc VAR_12;
 enum ice_status VAR_13;

 VAR_10 = &VAR_12.params.get_phy;

 if (!VAR_8 || (VAR_7 & ~VAR_1) || !VAR_5)
  return VAR_3;

 FUNC_2(&VAR_12, VAR_4);

 if (VAR_6)
  VAR_10->param0 |= FUNC_0(VAR_0);

 VAR_10->param0 |= FUNC_0(VAR_7);
 VAR_13 = FUNC_1(VAR_5->hw, &VAR_12, VAR_8, VAR_11, VAR_9);

 if (!VAR_13 && VAR_7 == VAR_2) {
  VAR_5->phy.phy_type_low = FUNC_3(VAR_8->phy_type_low);
  VAR_5->phy.phy_type_high = FUNC_3(VAR_8->phy_type_high);
 }

 return VAR_13;
}
