
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint16_t ;
typedef scalar_t__ u64 ;
typedef int u32 ;
struct qedf_rport {int sq_mem_size; int sid; scalar_t__ dev_type; int handle; int free_sqes; int rport_lock; TYPE_7__* rdata; scalar_t__ sq_pbl; int sq_pbl_dma; int fw_cid; int p_doorbell; } ;
struct TYPE_9__ {int dest_addr; } ;
struct qedf_ctx {int vlan_id; int prio; int cdev; int dbg_ctx; TYPE_2__* lport; TYPE_1__ ctlr; int data_src_addr; } ;
struct TYPE_13__ {int addr_hi; int addr_mid; int addr_lo; } ;
struct TYPE_11__ {int addr_hi; int addr_mid; int addr_lo; } ;
struct qed_fcoe_params_offload {int e_d_tov_timer_val; int rec_tov_timer_val; int vlan_tag; int flags; scalar_t__ def_q_idx; TYPE_5__ d_id; int max_conc_seqs_c3; TYPE_3__ s_id; int rx_max_fc_pay_len; int tx_max_fc_pay_len; int dst_mac; int src_mac; void* sq_next_page_addr; void* sq_curr_page_addr; int sq_pbl_addr; } ;
struct fcoe_wqe {int dummy; } ;
typedef void* dma_addr_t ;
struct TYPE_16__ {int (* acquire_conn ) (int ,int *,int *,int *) ;int (* offload_conn ) (int ,int ,struct qed_fcoe_params_offload*) ;int (* release_conn ) (int ,int ) ;} ;
struct TYPE_14__ {int port_id; } ;
struct TYPE_15__ {int sp_features; TYPE_6__ ids; TYPE_4__* rport; int max_seq; int maxframe_size; } ;
struct TYPE_12__ {int port_id; } ;
struct TYPE_10__ {int e_d_tov; int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ,char*,int ,...) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct qed_fcoe_params_offload*,int ,int) ;
 TYPE_8__* VAR_9 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *,int *,int *) ;
 int FUNC_8 (int ,int ,struct qed_fcoe_params_offload*) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static int FUNC_10(struct qedf_ctx *VAR_10,
 struct qedf_rport *VAR_11)
{
 struct qed_fcoe_params_offload VAR_12;
 u32 VAR_13;
 int VAR_14;
 uint16_t VAR_15 = (VAR_11->sq_mem_size / sizeof(struct fcoe_wqe));

 FUNC_0(&(VAR_10->dbg_ctx), VAR_7, "Offloading connection "
     "portid=%06x.\n", VAR_11->rdata->ids.port_id);
 VAR_14 = VAR_9->acquire_conn(VAR_10->cdev, &VAR_11->handle,
     &VAR_11->fw_cid, &VAR_11->p_doorbell);
 if (VAR_14) {
  FUNC_1(&(VAR_10->dbg_ctx), "Could not acquire connection "
      "for portid=%06x.\n", VAR_11->rdata->ids.port_id);
  VAR_14 = 1;
  goto out;
 }

 FUNC_0(&(VAR_10->dbg_ctx), VAR_7, "portid=%06x "
     "fw_cid=%08x handle=%d.\n", VAR_11->rdata->ids.port_id,
     VAR_11->fw_cid, VAR_11->handle);

 FUNC_5(&VAR_12, 0, sizeof(struct qed_fcoe_params_offload));


 VAR_12.sq_pbl_addr = VAR_11->sq_pbl_dma;

 VAR_12.sq_curr_page_addr = (dma_addr_t)(*(u64 *)VAR_11->sq_pbl);
 VAR_12.sq_next_page_addr =
     (dma_addr_t)(*(u64 *)(VAR_11->sq_pbl + 8));


 FUNC_3(VAR_12.src_mac, VAR_10->data_src_addr);

 FUNC_3(VAR_12.dst_mac, VAR_10->ctlr.dest_addr);

 VAR_12.tx_max_fc_pay_len = VAR_11->rdata->maxframe_size;
 VAR_12.e_d_tov_timer_val = VAR_10->lport->e_d_tov / 20;
 VAR_12.rec_tov_timer_val = 3;
 VAR_12.rx_max_fc_pay_len = VAR_11->rdata->maxframe_size;


 VAR_12.vlan_tag = VAR_10->vlan_id <<
     VAR_5;
 VAR_12.vlan_tag |=
     VAR_10->prio << VAR_4;
 VAR_12.flags |= (VAR_2 <<
     VAR_3);


 VAR_13 = FUNC_4(VAR_10->lport->host);
 VAR_11->sid = VAR_13;
 VAR_12.s_id.addr_hi = (VAR_13 & 0x000000FF);
 VAR_12.s_id.addr_mid = (VAR_13 & 0x0000FF00) >> 8;
 VAR_12.s_id.addr_lo = (VAR_13 & 0x00FF0000) >> 16;

 VAR_12.max_conc_seqs_c3 = VAR_11->rdata->max_seq;


 VAR_13 = VAR_11->rdata->rport->port_id;
 VAR_12.d_id.addr_hi = (VAR_13 & 0x000000FF);
 VAR_12.d_id.addr_mid = (VAR_13 & 0x0000FF00) >> 8;
 VAR_12.d_id.addr_lo = (VAR_13 & 0x00FF0000) >> 16;

 VAR_12.def_q_idx = 0;


 if (VAR_11->dev_type == VAR_8) {
  FUNC_0(&(VAR_10->dbg_ctx), VAR_7,
      "Enable CONF, REC for portid=%06x.\n",
      VAR_11->rdata->ids.port_id);
  VAR_12.flags |= 1 <<
      VAR_0;
  VAR_12.flags |=
      ((VAR_11->rdata->sp_features & VAR_6) ? 1 : 0) <<
      VAR_1;
 }

 VAR_14 = VAR_9->offload_conn(VAR_10->cdev, VAR_11->handle, &VAR_12);
 if (VAR_14) {
  FUNC_1(&(VAR_10->dbg_ctx), "Could not offload connection "
      "for portid=%06x.\n", VAR_11->rdata->ids.port_id);
  goto out_free_conn;
 } else
  FUNC_0(&(VAR_10->dbg_ctx), VAR_7, "Offload "
      "succeeded portid=%06x total_sqe=%d.\n",
      VAR_11->rdata->ids.port_id, VAR_15);

 FUNC_6(&VAR_11->rport_lock);
 FUNC_2(&VAR_11->free_sqes, VAR_15);
 return 0;
out_free_conn:
 VAR_9->release_conn(VAR_10->cdev, VAR_11->handle);
out:
 return VAR_14;
}
