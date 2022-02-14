
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ice_link_status {int link_info; int module_type; } ;
struct TYPE_2__ {struct ice_link_status link_info; } ;
struct ice_port_info {struct ice_hw* hw; TYPE_1__ phy; } ;
struct ice_hw {int dummy; } ;
struct ice_aqc_get_phy_caps_data {int module_type; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct ice_aqc_get_phy_caps_data*) ;
 struct ice_aqc_get_phy_caps_data* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct ice_port_info*,int,int *,int *) ;
 int FUNC_3 (struct ice_port_info*,int,int ,struct ice_aqc_get_phy_caps_data*,int *) ;
 int FUNC_4 (struct ice_hw*) ;
 int FUNC_5 (int ,int *,int) ;

enum ice_status FUNC_6(struct ice_port_info *VAR_5)
{
 struct ice_link_status *VAR_6;
 enum ice_status VAR_7;

 if (!VAR_5)
  return VAR_4;

 VAR_6 = &VAR_5->phy.link_info;

 VAR_7 = FUNC_2(VAR_5, 1, ((void*)0), ((void*)0));
 if (VAR_7)
  return VAR_7;

 if (VAR_6->link_info & VAR_2) {
  struct ice_aqc_get_phy_caps_data *VAR_8;
  struct ice_hw *VAR_9;

  VAR_9 = VAR_5->hw;
  VAR_8 = FUNC_1(FUNC_4(VAR_9), sizeof(*VAR_8),
         VAR_0);
  if (!VAR_8)
   return VAR_3;

  VAR_7 = FUNC_3(VAR_5, 0, VAR_1,
          VAR_8, ((void*)0));
  if (!VAR_7)
   FUNC_5(VAR_6->module_type, &VAR_8->module_type,
          sizeof(VAR_6->module_type));

  FUNC_0(FUNC_4(VAR_9), VAR_8);
 }

 return VAR_7;
}
