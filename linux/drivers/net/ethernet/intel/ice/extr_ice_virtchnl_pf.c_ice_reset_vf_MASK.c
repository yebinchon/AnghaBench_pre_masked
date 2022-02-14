
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ice_vsi {int idx; int port_info; } ;
struct ice_vf {size_t lan_vsi_idx; scalar_t__ num_vlan; scalar_t__ port_vlan_id; int vf_states; int vf_id; struct ice_pf* pf; } ;
struct ice_hw {int dummy; } ;
struct ice_pf {TYPE_1__* pdev; struct ice_vsi** vsi; struct ice_hw hw; int state; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (struct ice_vf*) ;
 int FUNC_4 (struct ice_vf*) ;
 int FUNC_5 (int ,int ,int ,int ,int *,int *,int *,int ,int ,int *) ;
 int FUNC_6 (struct ice_hw*) ;
 int FUNC_7 (struct ice_vf*) ;
 int FUNC_8 (struct ice_vf*,int,int) ;
 scalar_t__ FUNC_9 (struct ice_vf*,struct ice_vsi*,int ,int) ;
 int FUNC_10 (struct ice_hw*,int ) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 scalar_t__ FUNC_12 (int ,int ) ;
 int FUNC_13 (int,int) ;

__attribute__((used)) static bool FUNC_14(struct ice_vf *VAR_9, bool VAR_10)
{
 struct ice_pf *VAR_11 = VAR_9->pf;
 struct ice_vsi *VAR_12;
 struct ice_hw *VAR_13;
 bool VAR_14 = 0;
 u8 VAR_15;
 u32 VAR_16;
 int VAR_17;




 if (FUNC_12(VAR_8, VAR_11->state))
  return 0;





 if (FUNC_11(VAR_3, VAR_9->vf_states))
  return 0;

 FUNC_8(VAR_9, VAR_10, 0);

 VAR_12 = VAR_11->vsi[VAR_9->lan_vsi_idx];

 if (FUNC_12(VAR_5, VAR_9->vf_states))
  FUNC_4(VAR_9);




 FUNC_5(VAR_12->port_info, VAR_12->idx, 0, 0, ((void*)0), ((void*)0),
   ((void*)0), VAR_2, VAR_9->vf_id, ((void*)0));

 VAR_13 = &VAR_11->hw;



 for (VAR_17 = 0; VAR_17 < 10; VAR_17++) {




  VAR_16 = FUNC_10(VAR_13, FUNC_0(VAR_9->vf_id));
  if (VAR_16 & VAR_7) {
   VAR_14 = 1;
   break;
  }


  FUNC_13(10, 20);
 }




 if (!VAR_14)
  FUNC_2(&VAR_11->pdev->dev, "VF reset check timeout on VF %d\n",
    VAR_9->vf_id);




 if (FUNC_12(VAR_6, VAR_9->vf_states) ||
     FUNC_12(VAR_4, VAR_9->vf_states)) {
  if (VAR_9->port_vlan_id || VAR_9->num_vlan)
   VAR_15 = VAR_1;
  else
   VAR_15 = VAR_0;

  VAR_12 = VAR_11->vsi[VAR_9->lan_vsi_idx];
  if (FUNC_9(VAR_9, VAR_12, VAR_15, 1))
   FUNC_1(&VAR_11->pdev->dev, "disabling promiscuous mode failed\n");
 }


 FUNC_7(VAR_9);

 FUNC_3(VAR_9);

 FUNC_6(VAR_13);

 return 1;
}
