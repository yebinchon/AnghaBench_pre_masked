
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct ice_sq_cd {int dummy; } ;
struct TYPE_6__ {int node_teid; } ;
struct ice_sched_node {TYPE_1__ info; } ;
struct ice_q_ctx {int q_handle; } ;
struct ice_port_info {scalar_t__ port_state; int sched_lock; struct ice_hw* hw; } ;
struct TYPE_8__ {int sq_last_status; } ;
struct ice_hw {scalar_t__ num_tx_sched_layers; TYPE_3__ adminq; } ;
struct TYPE_10__ {int elem_type; } ;
struct ice_aqc_txsched_elem_data {TYPE_5__ data; int node_teid; int parent_teid; int member_0; } ;
struct ice_aqc_add_tx_qgrp {int num_txqs; TYPE_4__* txqs; int parent_teid; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
struct TYPE_7__ {int valid_sections; } ;
struct TYPE_9__ {int q_teid; int txq_id; TYPE_2__ info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct ice_hw*,int,struct ice_aqc_add_tx_qgrp*,int ,struct ice_sq_cd*) ;
 int FUNC_1 (struct ice_hw*,int ,char*,int ,...) ;
 struct ice_q_ctx* FUNC_2 (struct ice_hw*,int ,int,int ) ;
 int FUNC_3 (struct ice_hw*,int ) ;
 int FUNC_4 (struct ice_port_info*,scalar_t__,struct ice_aqc_txsched_elem_data*) ;
 struct ice_sched_node* FUNC_5 (struct ice_port_info*,int ,int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

enum ice_status
FUNC_9(struct ice_port_info *VAR_8, u16 VAR_9, u8 VAR_10, u16 VAR_11,
  u8 VAR_12, struct ice_aqc_add_tx_qgrp *VAR_13, u16 VAR_14,
  struct ice_sq_cd *VAR_15)
{
 struct ice_aqc_txsched_elem_data VAR_16 = { 0 };
 struct ice_sched_node *VAR_17;
 struct ice_q_ctx *VAR_18;
 enum ice_status VAR_19;
 struct ice_hw *VAR_20;

 if (!VAR_8 || VAR_8->port_state != VAR_7)
  return VAR_3;

 if (VAR_12 > 1 || VAR_13->num_txqs > 1)
  return VAR_4;

 VAR_20 = VAR_8->hw;

 if (!FUNC_3(VAR_20, VAR_9))
  return VAR_5;

 FUNC_7(&VAR_8->sched_lock);

 VAR_18 = FUNC_2(VAR_20, VAR_9, VAR_10, VAR_11);
 if (!VAR_18) {
  FUNC_1(VAR_20, VAR_2, "Enaq: invalid queue handle %d\n",
     VAR_11);
  VAR_19 = VAR_5;
  goto ena_txq_exit;
 }


 VAR_17 = FUNC_5(VAR_8, VAR_9, VAR_10,
         VAR_6);
 if (!VAR_17) {
  VAR_19 = VAR_5;
  goto ena_txq_exit;
 }

 VAR_13->parent_teid = VAR_17->info.node_teid;
 VAR_16.parent_teid = VAR_17->info.node_teid;
 VAR_13->txqs[0].info.valid_sections = VAR_1;


 VAR_19 = FUNC_0(VAR_20, VAR_12, VAR_13, VAR_14, VAR_15);
 if (VAR_19) {
  FUNC_1(VAR_20, VAR_2, "enable queue %d failed %d\n",
     FUNC_6(VAR_13->txqs[0].txq_id),
     VAR_20->adminq.sq_last_status);
  goto ena_txq_exit;
 }

 VAR_16.node_teid = VAR_13->txqs[0].q_teid;
 VAR_16.data.elem_type = VAR_0;
 VAR_18->q_handle = VAR_11;


 VAR_19 = FUNC_4(VAR_8, VAR_20->num_tx_sched_layers - 1, &VAR_16);

ena_txq_exit:
 FUNC_8(&VAR_8->sched_lock);
 return VAR_19;
}
