
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct ice_vsi {int vsi_num; int idx; } ;
struct TYPE_4__ {int * addr; } ;
struct ice_vf {int port_vlan_id; int num_mac; TYPE_1__ dflt_lan_addr; int lan_vsi_num; int lan_vsi_idx; int vf_id; int first_vector_idx; struct ice_pf* pf; } ;
struct TYPE_6__ {int port_info; } ;
struct ice_pf {TYPE_2__* pdev; TYPE_3__ hw; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*,int *) ;
 int FUNC_4 (struct ice_vsi*,int *,int *) ;
 int FUNC_5 (struct ice_pf*,struct ice_vf*) ;
 int FUNC_6 (int *,int *) ;
 struct ice_vsi* FUNC_7 (struct ice_pf*,int ,int ) ;
 int FUNC_8 (struct ice_vsi*,int) ;
 int FUNC_9 (struct ice_vsi*,int,int) ;
 scalar_t__ FUNC_10 (int *) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_11(struct ice_vf *VAR_4)
{
 struct ice_pf *VAR_5 = VAR_4->pf;
 FUNC_0(VAR_3);
 u8 VAR_6[VAR_1];
 struct ice_vsi *VAR_7;
 int VAR_8 = 0;


 VAR_4->first_vector_idx = FUNC_5(VAR_5, VAR_4);

 VAR_7 = FUNC_7(VAR_5, VAR_5->hw.port_info, VAR_4->vf_id);
 if (!VAR_7) {
  FUNC_1(&VAR_5->pdev->dev, "Failed to create VF VSI\n");
  return -VAR_0;
 }

 VAR_4->lan_vsi_idx = VAR_7->idx;
 VAR_4->lan_vsi_num = VAR_7->vsi_num;


 if (VAR_4->port_vlan_id) {
  FUNC_9(VAR_7, VAR_4->port_vlan_id, 1);
  FUNC_8(VAR_7, VAR_4->port_vlan_id & VAR_2);
 }

 FUNC_2(VAR_6);

 VAR_8 = FUNC_4(VAR_7, &VAR_3, VAR_6);
 if (VAR_8)
  goto ice_alloc_vsi_res_exit;

 if (FUNC_10(VAR_4->dflt_lan_addr.addr)) {
  VAR_8 = FUNC_4(VAR_7, &VAR_3,
          VAR_4->dflt_lan_addr.addr);
  if (VAR_8)
   goto ice_alloc_vsi_res_exit;
 }

 VAR_8 = FUNC_3(&VAR_5->hw, &VAR_3);
 if (VAR_8)
  FUNC_1(&VAR_5->pdev->dev,
   "could not add mac filters error %d\n", VAR_8);
 else
  VAR_4->num_mac = 1;







ice_alloc_vsi_res_exit:
 FUNC_6(&VAR_5->pdev->dev, &VAR_3);
 return VAR_8;
}
