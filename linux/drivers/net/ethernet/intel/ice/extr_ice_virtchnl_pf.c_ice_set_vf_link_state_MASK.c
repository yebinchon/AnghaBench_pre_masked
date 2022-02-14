
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct virtchnl_pf_event {int severity; int event; int member_0; } ;
struct net_device {int dummy; } ;
struct ice_vf {int link_forced; int link_up; int vf_id; int vf_states; } ;
struct ice_hw {TYPE_3__* port_info; } ;
struct ice_pf {int num_alloc_vfs; TYPE_4__* pdev; struct ice_hw hw; struct ice_vf* vf; } ;
struct ice_netdev_priv {TYPE_1__* vsi; } ;
struct ice_link_status {int link_info; int link_speed; } ;
typedef int pfe ;
struct TYPE_8__ {int dev; } ;
struct TYPE_6__ {struct ice_link_status link_info; } ;
struct TYPE_7__ {TYPE_2__ phy; } ;
struct TYPE_5__ {struct ice_pf* back; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct ice_hw*,int ,int ,int ,int *,int,int *) ;
 int FUNC_2 (struct ice_vf*,struct virtchnl_pf_event*,int ,int) ;
 int FUNC_3 (struct ice_vf*,struct virtchnl_pf_event*,int) ;
 struct ice_netdev_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,int ) ;

int FUNC_6(struct net_device *VAR_8, int VAR_9, int VAR_10)
{
 struct ice_netdev_priv *VAR_11 = FUNC_4(VAR_8);
 struct ice_pf *VAR_12 = VAR_11->vsi->back;
 struct virtchnl_pf_event VAR_13 = { 0 };
 struct ice_link_status *VAR_14;
 struct ice_vf *VAR_15;
 struct ice_hw *VAR_16;

 if (VAR_9 >= VAR_12->num_alloc_vfs) {
  FUNC_0(&VAR_12->pdev->dev, "Invalid VF Identifier %d\n", VAR_9);
  return -VAR_1;
 }

 VAR_15 = &VAR_12->vf[VAR_9];
 VAR_16 = &VAR_12->hw;
 VAR_14 = &VAR_12->hw.port_info->phy.link_info;

 if (!FUNC_5(VAR_3, VAR_15->vf_states)) {
  FUNC_0(&VAR_12->pdev->dev, "vf %d in reset. Try again.\n", VAR_9);
  return -VAR_0;
 }

 VAR_13.event = VAR_5;
 VAR_13.severity = VAR_4;

 switch (VAR_10) {
 case 130:
  VAR_15->link_forced = 0;
  VAR_15->link_up = VAR_14->link_info & VAR_2;
  break;
 case 128:
  VAR_15->link_forced = 1;
  VAR_15->link_up = 1;
  break;
 case 129:
  VAR_15->link_forced = 1;
  VAR_15->link_up = 0;
  break;
 default:
  return -VAR_1;
 }

 if (VAR_15->link_forced)
  FUNC_3(VAR_15, &VAR_13, VAR_15->link_up);
 else
  FUNC_2(VAR_15, &VAR_13, VAR_14->link_speed, VAR_15->link_up);


 FUNC_1(VAR_16, VAR_15->vf_id, VAR_6,
         VAR_7, (u8 *)&VAR_13,
         sizeof(VAR_13), ((void*)0));

 return 0;
}
