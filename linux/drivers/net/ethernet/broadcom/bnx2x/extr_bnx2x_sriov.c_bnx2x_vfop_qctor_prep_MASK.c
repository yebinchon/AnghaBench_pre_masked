
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct bnx2x_virtf {int leading_rss; int abs_vfid; scalar_t__ spoofchk; int fp_hsi; int sp_cl_id; } ;
struct TYPE_12__ {void* fw_sb_id; int tss_leading_cl_id; } ;
struct bnx2x_rxq_setup_params {int max_tpa_queues; int rss_engine_id; void* fw_sb_id; int cl_qzone_id; } ;
struct TYPE_11__ {int fp_hsi; int stat_id; int spcl_id; } ;
struct bnx2x_queue_setup_params {unsigned long flags; TYPE_6__ txq_params; struct bnx2x_rxq_setup_params rxq_params; TYPE_5__ gen_params; } ;
struct TYPE_10__ {unsigned long flags; void* fw_sb_id; } ;
struct TYPE_9__ {unsigned long flags; void* fw_sb_id; } ;
struct bnx2x_queue_init_params {int * cxts; TYPE_4__ tx; TYPE_3__ rx; } ;
struct TYPE_7__ {struct bnx2x_queue_init_params init; } ;
struct TYPE_8__ {TYPE_1__ params; } ;
struct bnx2x_vf_queue_construct_params {struct bnx2x_queue_setup_params prep_qsetup; TYPE_2__ qstate; } ;
struct bnx2x_vf_queue {int sb_idx; int cxt; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long*) ;
 int FUNC_2 (int ,unsigned long*) ;
 scalar_t__ FUNC_3 (int ,unsigned long*) ;
 void* FUNC_4 (struct bnx2x_virtf*,int ) ;
 int FUNC_5 (struct bnx2x_virtf*,struct bnx2x_vf_queue*) ;
 int FUNC_6 (struct bnx2x_virtf*,struct bnx2x_vf_queue*) ;

void FUNC_7(struct bnx2x *VAR_11,
      struct bnx2x_virtf *VAR_12,
      struct bnx2x_vf_queue *VAR_13,
      struct bnx2x_vf_queue_construct_params *VAR_14,
      unsigned long VAR_15)
{
 struct bnx2x_queue_init_params *VAR_16 = &VAR_14->qstate.params.init;
 struct bnx2x_queue_setup_params *VAR_17 = &VAR_14->prep_qsetup;




 if (FUNC_3(VAR_1, &VAR_16->rx.flags))
  FUNC_2(VAR_2, &VAR_16->rx.flags);

 if (FUNC_3(VAR_1, &VAR_16->tx.flags))
  FUNC_2(VAR_2, &VAR_16->tx.flags);


 VAR_16->rx.fw_sb_id = FUNC_4(VAR_12, VAR_13->sb_idx);
 VAR_16->tx.fw_sb_id = FUNC_4(VAR_12, VAR_13->sb_idx);


 VAR_16->cxts[0] = VAR_13->cxt;




 VAR_17->gen_params.spcl_id = VAR_12->sp_cl_id;
 VAR_17->gen_params.stat_id = FUNC_6(VAR_12, VAR_13);
 VAR_17->gen_params.fp_hsi = VAR_12->fp_hsi;





 if (FUNC_3(VAR_3, &VAR_17->flags))
  FUNC_2(VAR_7, &VAR_17->flags);




 FUNC_2(VAR_6, &VAR_17->flags);
 FUNC_2(VAR_5, &VAR_17->flags);
 if (VAR_12->spoofchk)
  FUNC_2(VAR_0, &VAR_17->flags);
 else
  FUNC_1(VAR_0, &VAR_17->flags);


 if (FUNC_3(VAR_8, &VAR_15)) {
  struct bnx2x_rxq_setup_params *VAR_18 = &VAR_17->rxq_params;

  VAR_18->cl_qzone_id = FUNC_5(VAR_12, VAR_13);
  VAR_18->fw_sb_id = FUNC_4(VAR_12, VAR_13->sb_idx);
  VAR_18->rss_engine_id = FUNC_0(VAR_12->abs_vfid);

  if (FUNC_3(VAR_4, &VAR_17->flags))
   VAR_18->max_tpa_queues = VAR_10;
 }


 if (FUNC_3(VAR_9, &VAR_15)) {
  VAR_17->txq_params.tss_leading_cl_id = VAR_12->leading_rss;
  VAR_17->txq_params.fw_sb_id = FUNC_4(VAR_12, VAR_13->sb_idx);
 }
}
