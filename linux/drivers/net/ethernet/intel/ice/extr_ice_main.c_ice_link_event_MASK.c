
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct ice_vsi {int vsi_num; int port_info; } ;
struct TYPE_3__ {int link_info; scalar_t__ link_speed; } ;
struct ice_phy_info {TYPE_1__ link_info; TYPE_1__ link_info_old; } ;
struct ice_port_info {struct ice_phy_info phy; int lport; } ;
struct ice_pf {scalar_t__ num_alloc_vfs; TYPE_2__* pdev; int flags; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int ,...) ;
 int FUNC_1 (struct ice_port_info*,int,int *) ;
 struct ice_vsi* FUNC_2 (struct ice_pf*) ;
 int FUNC_3 (struct ice_vsi*,int) ;
 int FUNC_4 (struct ice_port_info*) ;
 int FUNC_5 (struct ice_pf*) ;
 int FUNC_6 (struct ice_vsi*,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static int
FUNC_9(struct ice_pf *VAR_4, struct ice_port_info *VAR_5, bool VAR_6,
        u16 VAR_7)
{
 struct ice_phy_info *VAR_8;
 struct ice_vsi *VAR_9;
 u16 VAR_10;
 bool VAR_11;
 int VAR_12;

 VAR_8 = &VAR_5->phy;
 VAR_8->link_info_old = VAR_8->link_info;

 VAR_11 = !!(VAR_8->link_info_old.link_info & VAR_1);
 VAR_10 = VAR_8->link_info_old.link_speed;




 VAR_12 = FUNC_4(VAR_5);
 if (VAR_12)
  FUNC_0(&VAR_4->pdev->dev,
   "Failed to update link status and re-enable link events for port %d\n",
   VAR_5->lport);


 if (VAR_6 == VAR_11 && VAR_7 == VAR_10)
  return VAR_12;

 VAR_9 = FUNC_2(VAR_4);
 if (!VAR_9 || !VAR_9->port_info)
  return -VAR_0;


 if (!FUNC_8(VAR_3, VAR_4->flags) &&
     !(VAR_5->phy.link_info.link_info & VAR_2)) {
  FUNC_7(VAR_3, VAR_4->flags);

  VAR_12 = FUNC_1(VAR_5, 0, ((void*)0));
  if (VAR_12) {
   FUNC_0(&VAR_4->pdev->dev,
    "Failed to set link down, VSI %d error %d\n",
    VAR_9->vsi_num, VAR_12);
   return VAR_12;
  }
 }

 FUNC_6(VAR_9, VAR_6);
 FUNC_3(VAR_9, VAR_6);

 if (VAR_4->num_alloc_vfs)
  FUNC_5(VAR_4);

 return VAR_12;
}
