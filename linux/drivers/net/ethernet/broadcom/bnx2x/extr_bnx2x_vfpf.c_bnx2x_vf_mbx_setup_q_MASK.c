
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_18__ {int sb_index; int cache_line_log; int sge_buf_sz; int max_sge_pkt; int tpa_agg_sz; int buf_sz; int rcq_np_addr; int rcq_addr; int sge_addr; int rxq_addr; int drop_flags; int mtu; int flags; int hc_rate; int vf_sb; } ;
struct TYPE_15__ {int traffic_type; int sb_index; int txq_addr; int flags; int hc_rate; int vf_sb; } ;
struct vfpf_setup_q_tlv {scalar_t__ vf_qid; int param_valid; TYPE_9__ rxq; TYPE_6__ txq; } ;
struct bnx2x_virtf {int abs_vfid; } ;
struct TYPE_16__ {unsigned long flags; int sb_cq_index; int hc_rate; } ;
struct TYPE_14__ {unsigned long flags; int sb_cq_index; int hc_rate; } ;
struct bnx2x_queue_init_params {TYPE_7__ rx; TYPE_5__ tx; } ;
struct TYPE_12__ {struct bnx2x_queue_init_params init; } ;
struct TYPE_13__ {TYPE_3__ params; } ;
struct TYPE_17__ {int mtu; } ;
struct bnx2x_rxq_setup_params {int mcast_engine_id; int sb_cq_index; int cache_line_log; int sge_buf_sz; int max_sges_pkt; int tpa_agg_sz; int buf_sz; int rcq_np_map; int rcq_map; int sge_map; int dscr_map; int drop_flags; } ;
struct bnx2x_txq_setup_params {int traffic_type; int sb_cq_index; int dscr_map; } ;
struct bnx2x_queue_setup_params {unsigned long flags; TYPE_8__ gen_params; struct bnx2x_rxq_setup_params rxq_params; struct bnx2x_txq_setup_params txq_params; } ;
struct bnx2x_vf_queue_construct_params {TYPE_4__ qstate; struct bnx2x_queue_setup_params prep_qsetup; } ;
struct bnx2x_vf_queue {int index; int sb_idx; } ;
struct bnx2x_vf_mbx {TYPE_2__* msg; } ;
struct bnx2x {int dummy; } ;
struct TYPE_10__ {struct vfpf_setup_q_tlv setup_q; } ;
struct TYPE_11__ {TYPE_1__ req; } ;


 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,unsigned long*) ;
 int FUNC_3 (struct bnx2x*,struct bnx2x_virtf*,struct bnx2x_vf_queue*) ;
 int FUNC_4 (struct bnx2x*,struct bnx2x_virtf*,int) ;
 int FUNC_5 (struct bnx2x*,int ,unsigned long*) ;
 int FUNC_6 (struct bnx2x*,struct bnx2x_virtf*,int ,struct bnx2x_vf_queue_construct_params*) ;
 int FUNC_7 (struct bnx2x*,struct bnx2x_virtf*,struct bnx2x_queue_init_params*,struct bnx2x_queue_setup_params*,int ,int ) ;
 int FUNC_8 (struct bnx2x*,struct bnx2x_virtf*,struct bnx2x_queue_init_params*,struct bnx2x_queue_setup_params*,int ,int ) ;
 int FUNC_9 (struct bnx2x*,struct bnx2x_virtf*,struct bnx2x_vf_queue*,struct bnx2x_vf_queue_construct_params*,unsigned long) ;
 scalar_t__ FUNC_10 (struct bnx2x_vf_queue*) ;
 int FUNC_11 (struct bnx2x_vf_queue_construct_params*,int ,int) ;
 scalar_t__ FUNC_12 (struct bnx2x_virtf*) ;
 struct bnx2x_vf_queue* FUNC_13 (struct bnx2x_virtf*,scalar_t__) ;

__attribute__((used)) static void FUNC_14(struct bnx2x *VAR_7, struct bnx2x_virtf *VAR_8,
     struct bnx2x_vf_mbx *VAR_9)
{
 struct vfpf_setup_q_tlv *VAR_10 = &VAR_9->msg->req.setup_q;
 struct bnx2x_vf_queue_construct_params VAR_11;
 int VAR_12 = 0;


 if (VAR_10->vf_qid >= FUNC_12(VAR_8)) {
  FUNC_0("vf_qid %d invalid, max queue count is %d\n",
     VAR_10->vf_qid, FUNC_12(VAR_8));
  VAR_12 = -VAR_4;
  goto response;
 }




 if (VAR_10->param_valid & (VAR_5|VAR_6)) {
  struct bnx2x_vf_queue *VAR_13 = FUNC_13(VAR_8, VAR_10->vf_qid);
  unsigned long VAR_14 = 0;

  struct bnx2x_queue_init_params *VAR_15;
  struct bnx2x_queue_setup_params *VAR_16;

  if (FUNC_10(VAR_13))
   FUNC_3(VAR_7, VAR_8, VAR_13);


  FUNC_11(&VAR_11, 0 ,
         sizeof(struct bnx2x_vf_queue_construct_params));
  VAR_16 = &VAR_11.prep_qsetup;
  VAR_15 = &VAR_11.qstate.params.init;


  FUNC_2(VAR_0, &VAR_16->flags);

  if (VAR_10->param_valid & VAR_6) {
   struct bnx2x_txq_setup_params *VAR_17 =
    &VAR_16->txq_params;

   FUNC_2(VAR_3, &VAR_14);


   VAR_13->sb_idx = VAR_10->txq.vf_sb;


   VAR_15->tx.hc_rate = VAR_10->txq.hc_rate;
   VAR_15->tx.sb_cq_index = VAR_10->txq.sb_index;

   FUNC_5(VAR_7, VAR_10->txq.flags,
       &VAR_15->tx.flags);


   FUNC_5(VAR_7, VAR_10->txq.flags,
       &VAR_16->flags);




   VAR_17->dscr_map = VAR_10->txq.txq_addr;
   VAR_17->sb_cq_index = VAR_10->txq.sb_index;
   VAR_17->traffic_type = VAR_10->txq.traffic_type;

   FUNC_8(VAR_7, VAR_8, VAR_15, VAR_16,
       VAR_13->index, VAR_13->sb_idx);
  }

  if (VAR_10->param_valid & VAR_5) {
   struct bnx2x_rxq_setup_params *VAR_18 =
       &VAR_16->rxq_params;

   FUNC_2(VAR_2, &VAR_14);




   VAR_13->sb_idx = VAR_10->rxq.vf_sb;


   VAR_15->rx.hc_rate = VAR_10->rxq.hc_rate;
   VAR_15->rx.sb_cq_index = VAR_10->rxq.sb_index;
   FUNC_5(VAR_7, VAR_10->rxq.flags,
       &VAR_15->rx.flags);


   FUNC_5(VAR_7, VAR_10->rxq.flags,
       &VAR_16->flags);


   VAR_16->gen_params.mtu = VAR_10->rxq.mtu;


   VAR_18->drop_flags = VAR_10->rxq.drop_flags;
   VAR_18->dscr_map = VAR_10->rxq.rxq_addr;
   VAR_18->sge_map = VAR_10->rxq.sge_addr;
   VAR_18->rcq_map = VAR_10->rxq.rcq_addr;
   VAR_18->rcq_np_map = VAR_10->rxq.rcq_np_addr;
   VAR_18->buf_sz = VAR_10->rxq.buf_sz;
   VAR_18->tpa_agg_sz = VAR_10->rxq.tpa_agg_sz;
   VAR_18->max_sges_pkt = VAR_10->rxq.max_sge_pkt;
   VAR_18->sge_buf_sz = VAR_10->rxq.sge_buf_sz;
   VAR_18->cache_line_log =
    VAR_10->rxq.cache_line_log;
   VAR_18->sb_cq_index = VAR_10->rxq.sb_index;


   if (FUNC_10(VAR_13)) {
    u8 VAR_19 = FUNC_1(VAR_8->abs_vfid);

    VAR_18->mcast_engine_id = VAR_19;
    FUNC_2(VAR_1, &VAR_16->flags);
   }

   FUNC_7(VAR_7, VAR_8, VAR_15, VAR_16,
       VAR_13->index, VAR_13->sb_idx);
  }

  FUNC_9(VAR_7, VAR_8, VAR_13, &VAR_11, VAR_14);

  VAR_12 = FUNC_6(VAR_7, VAR_8, VAR_13->index, &VAR_11);
  if (VAR_12)
   goto response;
 }
response:
 FUNC_4(VAR_7, VAR_8, VAR_12);
}
