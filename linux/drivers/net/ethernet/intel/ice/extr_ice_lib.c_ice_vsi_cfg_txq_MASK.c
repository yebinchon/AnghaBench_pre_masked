
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct ice_vsi {int idx; int port_info; struct ice_pf* back; } ;
struct ice_tlan_ctx {int member_0; } ;
struct ice_ring {scalar_t__ reg_idx; int txq_teid; scalar_t__ q_handle; scalar_t__ tail; } ;
struct TYPE_3__ {scalar_t__ hw_addr; } ;
struct ice_pf {TYPE_2__* pdev; TYPE_1__ hw; } ;
struct ice_aqc_add_txqs_perq {int q_teid; int txq_id; int txq_ctx; } ;
struct ice_aqc_add_tx_qgrp {struct ice_aqc_add_txqs_perq* txqs; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int ,int ,int,scalar_t__,int,struct ice_aqc_add_tx_qgrp*,int,int *) ;
 int FUNC_4 (int*,int ,int ) ;
 int FUNC_5 (struct ice_ring*,struct ice_tlan_ctx*,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(struct ice_vsi *VAR_2, struct ice_ring *VAR_3, u16 VAR_4,
  struct ice_aqc_add_tx_qgrp *VAR_5, u8 VAR_6)
{
 struct ice_tlan_ctx VAR_7 = { 0 };
 struct ice_aqc_add_txqs_perq *VAR_8;
 struct ice_pf *VAR_9 = VAR_2->back;
 u8 VAR_10 = sizeof(*VAR_5);
 enum ice_status VAR_11;
 u16 VAR_12;

 VAR_12 = VAR_3->reg_idx;
 FUNC_5(VAR_3, &VAR_7, VAR_12);

 VAR_5->txqs[0].txq_id = FUNC_1(VAR_12);
 FUNC_4((u8 *)&VAR_7, VAR_5->txqs[0].txq_ctx,
      VAR_1);




 VAR_3->tail = VAR_9->hw.hw_addr + FUNC_0(VAR_12);




 VAR_3->q_handle = VAR_4;

 VAR_11 = FUNC_3(VAR_2->port_info, VAR_2->idx, VAR_6, VAR_3->q_handle,
     1, VAR_5, VAR_10, ((void*)0));
 if (VAR_11) {
  FUNC_2(&VAR_9->pdev->dev,
   "Failed to set LAN Tx queue context, error: %d\n",
   VAR_11);
  return -VAR_0;
 }





 VAR_8 = &VAR_5->txqs[0];
 if (VAR_12 == FUNC_6(VAR_8->txq_id))
  VAR_3->txq_teid = FUNC_7(VAR_8->q_teid);

 return 0;
}
