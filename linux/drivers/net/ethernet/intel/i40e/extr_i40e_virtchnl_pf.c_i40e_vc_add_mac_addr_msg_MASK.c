
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct virtchnl_ether_addr_list {int num_elements; TYPE_1__* list; int vsi_id; } ;
struct i40e_vsi {int mac_filter_hash_lock; } ;
struct i40e_vf {size_t lan_vsi_idx; scalar_t__ vf_id; int num_mac; int vf_states; struct i40e_pf* pf; } ;
struct i40e_pf {TYPE_2__* pdev; struct i40e_vsi** vsi; } ;
struct i40e_mac_filter {int dummy; } ;
typedef scalar_t__ i40e_status ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {scalar_t__ addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,scalar_t__,scalar_t__) ;
 struct i40e_mac_filter* FUNC_1 (struct i40e_vsi*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct i40e_vf*,struct virtchnl_ether_addr_list*) ;
 struct i40e_mac_filter* FUNC_3 (struct i40e_vsi*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct i40e_vsi*) ;
 int FUNC_5 (struct i40e_vf*,int ) ;
 int FUNC_6 (struct i40e_vf*,int ,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static int FUNC_10(struct i40e_vf *VAR_3, u8 *VAR_4)
{
 struct virtchnl_ether_addr_list *VAR_5 =
     (struct virtchnl_ether_addr_list *)VAR_4;
 struct i40e_pf *VAR_6 = VAR_3->pf;
 struct i40e_vsi *VAR_7 = ((void*)0);
 i40e_status VAR_8 = 0;
 int VAR_9;

 if (!FUNC_9(VAR_1, &VAR_3->vf_states) ||
     !FUNC_5(VAR_3, VAR_5->vsi_id)) {
  VAR_8 = VAR_0;
  goto error_param;
 }

 VAR_7 = VAR_6->vsi[VAR_3->lan_vsi_idx];




 FUNC_7(&VAR_7->mac_filter_hash_lock);

 VAR_8 = FUNC_2(VAR_3, VAR_5);
 if (VAR_8) {
  FUNC_8(&VAR_7->mac_filter_hash_lock);
  goto error_param;
 }


 for (VAR_9 = 0; VAR_9 < VAR_5->num_elements; VAR_9++) {
  struct i40e_mac_filter *VAR_10;

  VAR_10 = FUNC_3(VAR_7, VAR_5->list[VAR_9].addr);
  if (!VAR_10) {
   VAR_10 = FUNC_1(VAR_7, VAR_5->list[VAR_9].addr);

   if (!VAR_10) {
    FUNC_0(&VAR_6->pdev->dev,
     "Unable to add MAC filter %pM for VF %d\n",
     VAR_5->list[VAR_9].addr, VAR_3->vf_id);
    VAR_8 = VAR_0;
    FUNC_8(&VAR_7->mac_filter_hash_lock);
    goto error_param;
   } else {
    VAR_3->num_mac++;
   }
  }
 }
 FUNC_8(&VAR_7->mac_filter_hash_lock);


 VAR_8 = FUNC_4(VAR_7);
 if (VAR_8)
  FUNC_0(&VAR_6->pdev->dev, "Unable to program VF %d MAC filters, error %d\n",
   VAR_3->vf_id, VAR_8);

error_param:

 return FUNC_6(VAR_3, VAR_2,
           VAR_8);
}
