
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct virtchnl_vector_map {scalar_t__ rxq_map; scalar_t__ txq_map; void* vector_id; int vsi_id; int txitr_idx; int rxitr_idx; } ;
struct virtchnl_irq_map_info {void* num_vectors; struct virtchnl_vector_map* vecmap; } ;
struct iavf_q_vector {scalar_t__ ring_mask; } ;
struct iavf_adapter {scalar_t__ current_op; void* num_msix_vectors; int aq_required; TYPE_2__* vsi_res; struct iavf_q_vector* q_vectors; TYPE_1__* pdev; } ;
struct TYPE_4__ {int vsi_id; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 int FUNC_1 (struct iavf_adapter*,scalar_t__,int *,size_t) ;
 int FUNC_2 (struct virtchnl_irq_map_info*) ;
 struct virtchnl_irq_map_info* FUNC_3 (size_t,int ) ;
 size_t FUNC_4 (struct virtchnl_irq_map_info*,struct virtchnl_vector_map*,void*) ;

void FUNC_5(struct iavf_adapter *VAR_7)
{
 struct virtchnl_irq_map_info *VAR_8;
 struct virtchnl_vector_map *VAR_9;
 struct iavf_q_vector *VAR_10;
 int VAR_11, VAR_12;
 size_t VAR_13;

 if (VAR_7->current_op != VAR_6) {

  FUNC_0(&VAR_7->pdev->dev, "Cannot map queues to vectors, command %d pending\n",
   VAR_7->current_op);
  return;
 }
 VAR_7->current_op = VAR_5;

 VAR_12 = VAR_7->num_msix_vectors - VAR_4;

 VAR_13 = FUNC_4(VAR_8, VAR_9, VAR_7->num_msix_vectors);
 VAR_8 = FUNC_3(VAR_13, VAR_0);
 if (!VAR_8)
  return;

 VAR_8->num_vectors = VAR_7->num_msix_vectors;

 for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
  VAR_10 = &VAR_7->q_vectors[VAR_11];
  VAR_9 = &VAR_8->vecmap[VAR_11];

  VAR_9->vsi_id = VAR_7->vsi_res->vsi_id;
  VAR_9->vector_id = VAR_11 + VAR_4;
  VAR_9->txq_map = VAR_10->ring_mask;
  VAR_9->rxq_map = VAR_10->ring_mask;
  VAR_9->rxitr_idx = VAR_2;
  VAR_9->txitr_idx = VAR_3;
 }

 VAR_9 = &VAR_8->vecmap[VAR_11];
 VAR_9->vsi_id = VAR_7->vsi_res->vsi_id;
 VAR_9->vector_id = 0;
 VAR_9->txq_map = 0;
 VAR_9->rxq_map = 0;

 VAR_7->aq_required &= ~VAR_1;
 FUNC_1(VAR_7, VAR_5,
    (u8 *)VAR_8, VAR_13);
 FUNC_2(VAR_8);
}
