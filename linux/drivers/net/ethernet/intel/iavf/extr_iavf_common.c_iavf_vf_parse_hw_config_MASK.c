
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct virtchnl_vsi_resource {scalar_t__ vsi_type; int default_mac_addr; } ;
struct virtchnl_vf_resource {int num_vsis; int vf_cap_flags; int max_vectors; int num_queue_pairs; struct virtchnl_vsi_resource* vsi_res; } ;
struct TYPE_4__ {int addr; int perm_addr; } ;
struct TYPE_3__ {int num_vsis; int dcb; scalar_t__ fcoe; int num_msix_vectors_vf; int num_tx_qp; int num_rx_qp; } ;
struct iavf_hw {TYPE_2__ mac; TYPE_1__ dev_caps; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;

void FUNC_1(struct iavf_hw *VAR_2,
        struct virtchnl_vf_resource *VAR_3)
{
 struct virtchnl_vsi_resource *VAR_4;
 int VAR_5;

 VAR_4 = &VAR_3->vsi_res[0];

 VAR_2->dev_caps.num_vsis = VAR_3->num_vsis;
 VAR_2->dev_caps.num_rx_qp = VAR_3->num_queue_pairs;
 VAR_2->dev_caps.num_tx_qp = VAR_3->num_queue_pairs;
 VAR_2->dev_caps.num_msix_vectors_vf = VAR_3->max_vectors;
 VAR_2->dev_caps.dcb = VAR_3->vf_cap_flags &
      VAR_0;
 VAR_2->dev_caps.fcoe = 0;
 for (VAR_5 = 0; VAR_5 < VAR_3->num_vsis; VAR_5++) {
  if (VAR_4->vsi_type == VAR_1) {
   FUNC_0(VAR_2->mac.perm_addr,
     VAR_4->default_mac_addr);
   FUNC_0(VAR_2->mac.addr,
     VAR_4->default_mac_addr);
  }
  VAR_4++;
 }
}
