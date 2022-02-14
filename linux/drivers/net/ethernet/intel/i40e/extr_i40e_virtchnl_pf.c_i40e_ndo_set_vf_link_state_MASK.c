
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_13__ {int link_status; int link_speed; } ;
struct TYPE_14__ {TYPE_6__ link_event; } ;
struct virtchnl_pf_event {TYPE_7__ event_data; int severity; int event; } ;
struct net_device {int dummy; } ;
struct i40e_vf {int vf_id; int link_forced; int link_up; } ;
struct TYPE_11__ {int link_info; int link_speed; } ;
struct TYPE_12__ {TYPE_4__ link_info; } ;
struct TYPE_10__ {int vf_base_id; } ;
struct i40e_hw {TYPE_5__ phy; TYPE_3__ func_caps; } ;
struct i40e_pf {int num_alloc_vfs; int state; struct i40e_hw hw; struct i40e_vf* vf; TYPE_2__* pdev; } ;
struct i40e_netdev_priv {TYPE_1__* vsi; } ;
typedef int pfe ;
typedef enum virtchnl_link_speed { ____Placeholder_virtchnl_link_speed } virtchnl_link_speed ;
struct TYPE_9__ {int dev; } ;
struct TYPE_8__ {struct i40e_pf* back; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct i40e_hw*,int,int ,int ,int *,int,int *) ;
 struct i40e_netdev_priv* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (int ,int ) ;

int FUNC_6(struct net_device *VAR_8, int VAR_9, int VAR_10)
{
 struct i40e_netdev_priv *VAR_11 = FUNC_4(VAR_8);
 struct i40e_pf *VAR_12 = VAR_11->vsi->back;
 struct virtchnl_pf_event VAR_13;
 struct i40e_hw *VAR_14 = &VAR_12->hw;
 struct i40e_vf *VAR_15;
 int VAR_16;
 int VAR_17 = 0;

 if (FUNC_5(VAR_7, VAR_12->state)) {
  FUNC_2(&VAR_12->pdev->dev, "Unable to configure VFs, other operation is pending.\n");
  return -VAR_0;
 }


 if (VAR_9 >= VAR_12->num_alloc_vfs) {
  FUNC_1(&VAR_12->pdev->dev, "Invalid VF Identifier %d\n", VAR_9);
  VAR_17 = -VAR_1;
  goto error_out;
 }

 VAR_15 = &VAR_12->vf[VAR_9];
 VAR_16 = VAR_15->vf_id + VAR_14->func_caps.vf_base_id;

 VAR_13.event = VAR_4;
 VAR_13.severity = VAR_3;

 switch (VAR_10) {
 case 130:
  VAR_15->link_forced = 0;
  VAR_13.event_data.link_event.link_status =
   VAR_12->hw.phy.link_info.link_info & VAR_2;
  VAR_13.event_data.link_event.link_speed =
   (enum virtchnl_link_speed)
   VAR_12->hw.phy.link_info.link_speed;
  break;
 case 128:
  VAR_15->link_forced = 1;
  VAR_15->link_up = 1;
  VAR_13.event_data.link_event.link_status = 1;
  VAR_13.event_data.link_event.link_speed = VAR_5;
  break;
 case 129:
  VAR_15->link_forced = 1;
  VAR_15->link_up = 0;
  VAR_13.event_data.link_event.link_status = 0;
  VAR_13.event_data.link_event.link_speed = 0;
  break;
 default:
  VAR_17 = -VAR_1;
  goto error_out;
 }

 FUNC_3(VAR_14, VAR_16, VAR_6,
          0, (u8 *)&VAR_13, sizeof(VAR_13), ((void*)0));

error_out:
 FUNC_0(VAR_7, VAR_12->state);
 return VAR_17;
}
