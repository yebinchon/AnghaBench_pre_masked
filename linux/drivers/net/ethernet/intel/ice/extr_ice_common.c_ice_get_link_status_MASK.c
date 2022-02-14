
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int link_info; } ;
struct ice_phy_info {TYPE_1__ link_info; scalar_t__ get_link_info; } ;
struct ice_port_info {int hw; struct ice_phy_info phy; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*,int) ;
 int FUNC_1 (struct ice_port_info*) ;

enum ice_status FUNC_2(struct ice_port_info *VAR_3, bool *VAR_4)
{
 struct ice_phy_info *VAR_5;
 enum ice_status VAR_6 = 0;

 if (!VAR_3 || !VAR_4)
  return VAR_2;

 VAR_5 = &VAR_3->phy;

 if (VAR_5->get_link_info) {
  VAR_6 = FUNC_1(VAR_3);

  if (VAR_6)
   FUNC_0(VAR_3->hw, VAR_1,
      "get link status error, status = %d\n",
      VAR_6);
 }

 *VAR_4 = VAR_5->link_info.link_info & VAR_0;

 return VAR_6;
}
