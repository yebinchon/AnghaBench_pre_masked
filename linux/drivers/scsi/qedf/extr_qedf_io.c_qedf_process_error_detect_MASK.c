
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct qedf_ioreq {int abts_done; TYPE_2__* fcport; int xid; } ;
struct qedf_ctx {int dbg_ctx; scalar_t__ stop_io_on_error; } ;
struct TYPE_7__ {int rx_id; int rx_buf_off; int tx_buf_off; int err_warn_bitmap_lo; int err_warn_bitmap_hi; } ;
struct TYPE_8__ {TYPE_3__ err_info; } ;
struct fcoe_cqe {TYPE_4__ cqe_info; } ;
struct TYPE_6__ {TYPE_1__* qedf; } ;
struct TYPE_5__ {int dbg_ctx; } ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,int ,char*,struct qedf_ioreq*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct qedf_ioreq*,int) ;
 int FUNC_5 (struct qedf_ctx*) ;

void FUNC_6(struct qedf_ctx *VAR_1, struct fcoe_cqe *VAR_2,
 struct qedf_ioreq *VAR_3)
{
 int VAR_4;

 if (!VAR_2) {
  FUNC_1(&VAR_1->dbg_ctx, VAR_0,
     "cqe is NULL for io_req %p\n", VAR_3);
  return;
 }

 FUNC_0(&(VAR_3->fcport->qedf->dbg_ctx), "Error detection CQE, "
    "xid=0x%x\n", VAR_3->xid);
 FUNC_0(&(VAR_3->fcport->qedf->dbg_ctx),
    "err_warn_bitmap=%08x:%08x\n",
    FUNC_3(VAR_2->cqe_info.err_info.err_warn_bitmap_hi),
    FUNC_3(VAR_2->cqe_info.err_info.err_warn_bitmap_lo));
 FUNC_0(&(VAR_3->fcport->qedf->dbg_ctx), "tx_buff_off=%08x, "
    "rx_buff_off=%08x, rx_id=%04x\n",
    FUNC_3(VAR_2->cqe_info.err_info.tx_buf_off),
    FUNC_3(VAR_2->cqe_info.err_info.rx_buf_off),
    FUNC_3(VAR_2->cqe_info.err_info.rx_id));

 if (VAR_1->stop_io_on_error) {
  FUNC_5(VAR_1);
  return;
 }

 FUNC_2(&VAR_3->abts_done);
 VAR_4 = FUNC_4(VAR_3, 1);
 if (VAR_4)
  FUNC_0(&(VAR_1->dbg_ctx), "Failed to queue ABTS.\n");
}
