
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_2__ {int valid_functions; int txq_first_id; int rxq_first_id; int msix_vector_first_id; int max_mtu; int num_rxq; int num_txq; int num_msix_vectors; } ;
struct ice_hw_func_caps {int guar_num_vsi; TYPE_1__ common_cap; } ;
struct ice_hw_dev_caps {int guar_num_vsi; TYPE_1__ common_cap; } ;
struct ice_hw {struct ice_hw_func_caps dev_caps; struct ice_hw_func_caps func_caps; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct ice_hw_func_caps*,int ,int) ;

void FUNC_2(struct ice_hw *VAR_1)
{
 struct ice_hw_func_caps *VAR_2 = &VAR_1->func_caps;
 struct ice_hw_dev_caps *VAR_3 = &VAR_1->dev_caps;
 u32 VAR_4, VAR_5, VAR_6;
 u32 VAR_7, VAR_8;
 u32 VAR_9 = 0;
 u8 VAR_10;


 VAR_4 = VAR_2->common_cap.valid_functions;
 VAR_6 = VAR_2->common_cap.txq_first_id;
 VAR_5 = VAR_2->common_cap.rxq_first_id;
 VAR_7 = VAR_2->common_cap.msix_vector_first_id;
 VAR_8 = VAR_2->common_cap.max_mtu;


 FUNC_1(VAR_2, 0, sizeof(*VAR_2));


 VAR_2->common_cap.valid_functions = VAR_4;
 VAR_2->common_cap.txq_first_id = VAR_6;
 VAR_2->common_cap.rxq_first_id = VAR_5;
 VAR_2->common_cap.msix_vector_first_id = VAR_7;
 VAR_2->common_cap.max_mtu = VAR_8;


 VAR_2->common_cap.num_rxq = 1;
 VAR_2->common_cap.num_txq = 1;


 VAR_2->common_cap.num_msix_vectors = 2;
 VAR_2->guar_num_vsi = 1;


 VAR_4 = VAR_3->common_cap.valid_functions;
 VAR_6 = VAR_3->common_cap.txq_first_id;
 VAR_5 = VAR_3->common_cap.rxq_first_id;
 VAR_7 = VAR_3->common_cap.msix_vector_first_id;
 VAR_8 = VAR_3->common_cap.max_mtu;


 FUNC_1(VAR_3, 0, sizeof(*VAR_3));


 VAR_3->common_cap.valid_functions = VAR_4;
 VAR_3->common_cap.txq_first_id = VAR_6;
 VAR_3->common_cap.rxq_first_id = VAR_5;
 VAR_3->common_cap.msix_vector_first_id = VAR_7;
 VAR_3->common_cap.max_mtu = VAR_8;



 for (VAR_10 = 0; VAR_10 < 8; VAR_10++)
  if (VAR_4 & FUNC_0(VAR_10))
   VAR_9++;


 VAR_3->common_cap.num_rxq = VAR_9;
 VAR_3->common_cap.num_txq = VAR_9;


 VAR_3->common_cap.num_msix_vectors = 2 * VAR_9;
}
