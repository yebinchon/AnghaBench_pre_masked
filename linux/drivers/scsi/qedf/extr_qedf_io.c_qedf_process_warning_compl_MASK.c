
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct qedf_rport {scalar_t__ dev_type; TYPE_1__* qedf; } ;
struct qedf_ioreq {int abts_done; scalar_t__ rx_id; scalar_t__ tx_buf_off; scalar_t__ rx_buf_off; int flags; struct qedf_rport* fcport; int xid; } ;
struct qedf_ctx {int dbg_ctx; } ;
struct TYPE_5__ {scalar_t__ rx_id; scalar_t__ tx_buf_off; scalar_t__ rx_buf_off; scalar_t__ err_warn_bitmap_lo; scalar_t__ err_warn_bitmap_hi; } ;
struct TYPE_6__ {TYPE_2__ err_info; } ;
struct fcoe_cqe {TYPE_3__ cqe_info; } ;
struct TYPE_4__ {int dbg_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,int ,char*,struct qedf_ioreq*,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct qedf_ioreq*,int) ;
 int FUNC_5 (struct qedf_ioreq*) ;
 int FUNC_6 (int ,int *) ;

void FUNC_7(struct qedf_ctx *VAR_4, struct fcoe_cqe *VAR_5,
 struct qedf_ioreq *VAR_6)
{
 int VAR_7, VAR_8;
 struct qedf_rport *VAR_9 = VAR_6->fcport;
 u64 VAR_10;
 u8 VAR_11 = 0xff;

 if (!VAR_5) {
  FUNC_1(&VAR_4->dbg_ctx, VAR_2,
     "cqe is NULL for io_req %p xid=0x%x\n",
     VAR_6, VAR_6->xid);
  return;
 }

 FUNC_0(&(VAR_6->fcport->qedf->dbg_ctx), "Warning CQE, "
    "xid=0x%x\n", VAR_6->xid);
 FUNC_0(&(VAR_6->fcport->qedf->dbg_ctx),
    "err_warn_bitmap=%08x:%08x\n",
    FUNC_3(VAR_5->cqe_info.err_info.err_warn_bitmap_hi),
    FUNC_3(VAR_5->cqe_info.err_info.err_warn_bitmap_lo));
 FUNC_0(&(VAR_6->fcport->qedf->dbg_ctx), "tx_buff_off=%08x, "
    "rx_buff_off=%08x, rx_id=%04x\n",
    FUNC_3(VAR_5->cqe_info.err_info.tx_buf_off),
    FUNC_3(VAR_5->cqe_info.err_info.rx_buf_off),
    FUNC_3(VAR_5->cqe_info.err_info.rx_id));


 VAR_10 = (u64)
     ((u64)VAR_5->cqe_info.err_info.err_warn_bitmap_hi << 32) |
     (u64)VAR_5->cqe_info.err_info.err_warn_bitmap_lo;
 for (VAR_8 = 0; VAR_8 < 64; VAR_8++) {
  if (VAR_10 & (u64)((u64)1 << VAR_8)) {
   VAR_11 = VAR_8;
   break;
  }
 }


 if (VAR_9->dev_type == VAR_3) {
  if (VAR_11 ==
      VAR_0) {
   FUNC_0(&(VAR_4->dbg_ctx), "REC timer expired.\n");
   if (!FUNC_6(VAR_1, &VAR_6->flags)) {
    VAR_6->rx_buf_off =
        VAR_5->cqe_info.err_info.rx_buf_off;
    VAR_6->tx_buf_off =
        VAR_5->cqe_info.err_info.tx_buf_off;
    VAR_6->rx_id = VAR_5->cqe_info.err_info.rx_id;
    VAR_7 = FUNC_5(VAR_6);





    if (VAR_7)
     goto send_abort;
   }
   return;
  }
 }

send_abort:
 FUNC_2(&VAR_6->abts_done);
 VAR_7 = FUNC_4(VAR_6, 1);
 if (VAR_7)
  FUNC_0(&(VAR_4->dbg_ctx), "Failed to queue ABTS.\n");
}
