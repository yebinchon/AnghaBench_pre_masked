
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct ice_vsi {scalar_t__ tx_mapping_mode; int* txq_map; int alloc_txq; scalar_t__ rx_mapping_mode; int* rxq_map; } ;
struct ice_vf {size_t lan_vsi_idx; int first_vector_idx; int vf_id; struct ice_pf* pf; } ;
struct TYPE_4__ {int msix_vector_first_id; } ;
struct TYPE_5__ {int vf_base_id; TYPE_1__ common_cap; } ;
struct ice_hw {int pf_id; TYPE_2__ func_caps; } ;
struct ice_pf {int num_vf_msix; TYPE_3__* pdev; struct ice_hw hw; struct ice_vsi** vsi; } ;
struct TYPE_6__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (int) ;
 int VAR_15 ;
 int FUNC_4 (int) ;
 int VAR_16 ;
 int FUNC_5 (int) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_6 (int) ;
 int VAR_21 ;
 int FUNC_7 (int) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (struct ice_hw*,int ,int) ;

__attribute__((used)) static void FUNC_10(struct ice_vf *VAR_26)
{
 int VAR_27, VAR_28, VAR_29;
 struct ice_pf *VAR_30 = VAR_26->pf;
 struct ice_vsi *VAR_31;
 int VAR_32, VAR_33, VAR_34;
 struct ice_hw *VAR_35;
 u32 VAR_36;

 VAR_35 = &VAR_30->hw;
 VAR_31 = VAR_30->vsi[VAR_26->lan_vsi_idx];
 VAR_32 = VAR_26->first_vector_idx;
 VAR_33 = (VAR_32 + VAR_30->num_vf_msix) - 1;
 VAR_28 = VAR_32 + VAR_30->hw.func_caps.common_cap.msix_vector_first_id;
 VAR_29 = (VAR_28 + VAR_30->num_vf_msix) - 1;
 VAR_27 = VAR_26->vf_id + VAR_35->func_caps.vf_base_id;


 VAR_36 = (((VAR_28 << VAR_6) & VAR_5) |
        ((VAR_29 << VAR_8) & VAR_7) |
        VAR_14);
 FUNC_9(VAR_35, FUNC_1(VAR_26->vf_id), VAR_36);

 VAR_36 = (((VAR_28 << VAR_10)
   & VAR_9) |
        ((VAR_29 << VAR_12) & VAR_11) |
        VAR_13);
 FUNC_9(VAR_35, FUNC_2(VAR_26->vf_id), VAR_36);

 for (VAR_34 = VAR_32; VAR_34 <= VAR_33; VAR_34++) {
  VAR_36 = (((VAR_27 << VAR_3) &
   VAR_2) |
         ((VAR_35->pf_id << VAR_1) &
   VAR_0));
  FUNC_9(VAR_35, FUNC_0(VAR_34), VAR_36);
 }




 FUNC_9(VAR_35, FUNC_3(VAR_27), VAR_15 | 0);

 FUNC_9(VAR_35, FUNC_6(VAR_26->vf_id), VAR_21);


 if (VAR_31->tx_mapping_mode == VAR_4) {




  VAR_36 = (((VAR_31->txq_map[0] << VAR_23) &
   VAR_22) |
         (((VAR_31->alloc_txq - 1) << VAR_25) &
   VAR_24));
  FUNC_9(VAR_35, FUNC_7(VAR_26->vf_id), VAR_36);
 } else {
  FUNC_8(&VAR_30->pdev->dev,
   "Scattered mode for VF Tx queues is not yet implemented\n");
 }


 FUNC_9(VAR_35, FUNC_4(VAR_26->vf_id), VAR_16);


 if (VAR_31->rx_mapping_mode == VAR_4) {




  VAR_36 = (((VAR_31->rxq_map[0] << VAR_18) &
   VAR_17) |
         (((VAR_31->alloc_txq - 1) << VAR_20) &
   VAR_19));
  FUNC_9(VAR_35, FUNC_5(VAR_26->vf_id), VAR_36);
 } else {
  FUNC_8(&VAR_30->pdev->dev,
   "Scattered mode for VF Rx queues is not yet implemented\n");
 }
}
