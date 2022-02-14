
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct virtchnl_ether_addr_list {int num_elements; TYPE_2__* list; int vsi_id; } ;
struct i40e_vsi {int mac_filter_hash_lock; } ;
struct TYPE_4__ {scalar_t__ addr; } ;
struct i40e_vf {size_t lan_vsi_idx; scalar_t__ vf_id; int num_mac; TYPE_1__ default_lan_addr; scalar_t__ pf_set_mac; int vf_states; struct i40e_pf* pf; } ;
struct i40e_pf {TYPE_3__* pdev; struct i40e_vsi** vsi; } ;
typedef scalar_t__ i40e_status ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {scalar_t__ addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (struct i40e_vsi*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct i40e_vsi*) ;
 int FUNC_4 (struct i40e_vf*,int ) ;
 int FUNC_5 (struct i40e_vf*,int ,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int *) ;

__attribute__((used)) static int FUNC_11(struct i40e_vf *VAR_4, u8 *VAR_5)
{
 struct virtchnl_ether_addr_list *VAR_6 =
     (struct virtchnl_ether_addr_list *)VAR_5;
 struct i40e_pf *VAR_7 = VAR_4->pf;
 struct i40e_vsi *VAR_8 = ((void*)0);
 i40e_status VAR_9 = 0;
 int VAR_10;

 if (!FUNC_10(VAR_2, &VAR_4->vf_states) ||
     !FUNC_4(VAR_4, VAR_6->vsi_id)) {
  VAR_9 = VAR_1;
  goto error_param;
 }

 for (VAR_10 = 0; VAR_10 < VAR_6->num_elements; VAR_10++) {
  if (FUNC_6(VAR_6->list[VAR_10].addr) ||
      FUNC_7(VAR_6->list[VAR_10].addr)) {
   FUNC_0(&VAR_7->pdev->dev, "Invalid MAC addr %pM for VF %d\n",
    VAR_6->list[VAR_10].addr, VAR_4->vf_id);
   VAR_9 = VAR_0;
   goto error_param;
  }

  if (VAR_4->pf_set_mac &&
      FUNC_1(VAR_6->list[VAR_10].addr,
         VAR_4->default_lan_addr.addr)) {
   FUNC_0(&VAR_7->pdev->dev,
    "MAC addr %pM has been set by PF, cannot delete it for VF %d, reset VF to change MAC addr\n",
    VAR_4->default_lan_addr.addr, VAR_4->vf_id);
   VAR_9 = VAR_1;
   goto error_param;
  }
 }
 VAR_8 = VAR_7->vsi[VAR_4->lan_vsi_idx];

 FUNC_8(&VAR_8->mac_filter_hash_lock);

 for (VAR_10 = 0; VAR_10 < VAR_6->num_elements; VAR_10++)
  if (FUNC_2(VAR_8, VAR_6->list[VAR_10].addr)) {
   VAR_9 = VAR_0;
   FUNC_9(&VAR_8->mac_filter_hash_lock);
   goto error_param;
  } else {
   VAR_4->num_mac--;
  }

 FUNC_9(&VAR_8->mac_filter_hash_lock);


 VAR_9 = FUNC_3(VAR_8);
 if (VAR_9)
  FUNC_0(&VAR_7->pdev->dev, "Unable to program VF %d MAC filters, error %d\n",
   VAR_4->vf_id, VAR_9);

error_param:

 return FUNC_5(VAR_4, VAR_3,
           VAR_9);
}
