
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ice_vsi {scalar_t__ tx_mapping_mode; scalar_t__ rx_mapping_mode; } ;
struct ice_vf {size_t lan_vsi_idx; int first_vector_idx; int vf_id; struct ice_pf* pf; } ;
struct ice_hw {int pf_id; } ;
struct ice_pf {int num_vf_msix; TYPE_1__* pdev; struct ice_vsi** vsi; struct ice_hw hw; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (struct ice_hw*,int ,int) ;

__attribute__((used)) static void FUNC_7(struct ice_vf *VAR_5)
{
 struct ice_pf *VAR_6 = VAR_5->pf;
 struct ice_vsi *VAR_7;
 int VAR_8, VAR_9, VAR_10;
 struct ice_hw *VAR_11;

 VAR_11 = &VAR_6->hw;
 VAR_7 = VAR_6->vsi[VAR_5->lan_vsi_idx];

 FUNC_6(VAR_11, FUNC_1(VAR_5->vf_id), 0);
 FUNC_6(VAR_11, FUNC_2(VAR_5->vf_id), 0);

 VAR_8 = VAR_5->first_vector_idx;
 VAR_9 = VAR_8 + VAR_6->num_vf_msix - 1;
 for (VAR_10 = VAR_8; VAR_10 <= VAR_9; VAR_10++) {
  u32 VAR_12;

  VAR_12 = (((1 << VAR_1) &
   VAR_0) |
         ((VAR_11->pf_id << VAR_3) &
   VAR_2));
  FUNC_6(VAR_11, FUNC_0(VAR_10), VAR_12);
 }

 if (VAR_7->tx_mapping_mode == VAR_4)
  FUNC_6(VAR_11, FUNC_4(VAR_5->vf_id), 0);
 else
  FUNC_5(&VAR_6->pdev->dev,
   "Scattered mode for VF Tx queues is not yet implemented\n");

 if (VAR_7->rx_mapping_mode == VAR_4)
  FUNC_6(VAR_11, FUNC_3(VAR_5->vf_id), 0);
 else
  FUNC_5(&VAR_6->pdev->dev,
   "Scattered mode for VF Rx queues is not yet implemented\n");
}
