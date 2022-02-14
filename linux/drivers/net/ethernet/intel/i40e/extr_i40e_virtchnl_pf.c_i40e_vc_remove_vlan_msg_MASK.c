
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct virtchnl_vlan_filter_list {int num_elements; scalar_t__* vlan_id; int vsi_id; } ;
struct TYPE_2__ {scalar_t__ pvid; } ;
struct i40e_vsi {int seid; TYPE_1__ info; } ;
struct i40e_vf {size_t lan_vsi_idx; int vf_states; int num_vlan; struct i40e_pf* pf; } ;
struct i40e_pf {int hw; struct i40e_vsi** vsi; } ;
typedef int i40e_status ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,int,scalar_t__,int *) ;
 int FUNC_1 (int *,int ,int,scalar_t__,int *) ;
 int FUNC_2 (struct i40e_vf*,int ) ;
 int FUNC_3 (struct i40e_vf*,int ,int ) ;
 int FUNC_4 (struct i40e_vsi*,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct i40e_vf *VAR_6, u8 *VAR_7)
{
 struct virtchnl_vlan_filter_list *VAR_8 =
     (struct virtchnl_vlan_filter_list *)VAR_7;
 struct i40e_pf *VAR_9 = VAR_6->pf;
 struct i40e_vsi *VAR_10 = ((void*)0);
 i40e_status VAR_11 = 0;
 int VAR_12;

 if (!FUNC_5(VAR_2, &VAR_6->vf_states) ||
     !FUNC_2(VAR_6, VAR_8->vsi_id)) {
  VAR_11 = VAR_0;
  goto error_param;
 }

 for (VAR_12 = 0; VAR_12 < VAR_8->num_elements; VAR_12++) {
  if (VAR_8->vlan_id[VAR_12] > VAR_1) {
   VAR_11 = VAR_0;
   goto error_param;
  }
 }

 VAR_10 = VAR_9->vsi[VAR_6->lan_vsi_idx];
 if (VAR_10->info.pvid) {
  if (VAR_8->num_elements > 1 || VAR_8->vlan_id[0])
   VAR_11 = VAR_0;
  goto error_param;
 }

 for (VAR_12 = 0; VAR_12 < VAR_8->num_elements; VAR_12++) {
  FUNC_4(VAR_10, VAR_8->vlan_id[VAR_12]);
  VAR_6->num_vlan--;

  if (FUNC_5(VAR_4, &VAR_6->vf_states))
   FUNC_1(&VAR_9->hw, VAR_10->seid,
          0,
          VAR_8->vlan_id[VAR_12],
          ((void*)0));
  if (FUNC_5(VAR_3, &VAR_6->vf_states))
   FUNC_0(&VAR_9->hw, VAR_10->seid,
          0,
          VAR_8->vlan_id[VAR_12],
          ((void*)0));
 }

error_param:

 return FUNC_3(VAR_6, VAR_5, VAR_11);
}
