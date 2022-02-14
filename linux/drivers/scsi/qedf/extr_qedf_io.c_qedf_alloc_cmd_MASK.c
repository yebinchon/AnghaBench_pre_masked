
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int u8 ;
typedef size_t u16 ;
struct qedf_rport {int free_sqes; int num_active_ios; struct qedf_ctx* qedf; } ;
struct qedf_ioreq {int alloc; size_t xid; int lun; int rx_id; scalar_t__ tx_buf_off; scalar_t__ rx_buf_off; scalar_t__ tm_flags; int cmd_type; int refcount; struct io_bdt* bd_tbl; int state; int * sc_cmd; struct qedf_rport* fcport; struct qedf_cmd_mgr* cmd_mgr; int flags; } ;
struct qedf_ctx {int alloc_failures; int dbg_ctx; struct qedf_cmd_mgr* cmd_mgr; } ;
struct qedf_cmd_mgr {size_t idx; struct io_bdt** io_bdt_pool; int free_list_cnt; int lock; struct qedf_ioreq* cmds; } ;
struct io_bdt {struct qedf_ioreq* io_req; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,size_t) ;
 int FUNC_1 (int *,int ,char*,scalar_t__) ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int VAR_6 ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 scalar_t__ FUNC_10 (int ,int *) ;

struct qedf_ioreq *FUNC_11(struct qedf_rport *VAR_7, u8 VAR_8)
{
 struct qedf_ctx *VAR_9 = VAR_7->qedf;
 struct qedf_cmd_mgr *VAR_10 = VAR_9->cmd_mgr;
 struct qedf_ioreq *VAR_11 = ((void*)0);
 struct io_bdt *VAR_12;
 u16 VAR_13;
 uint32_t VAR_14;
 int VAR_15;
 unsigned long VAR_16;

 VAR_14 = FUNC_4(&VAR_7->free_sqes);

 if (!VAR_14) {
  FUNC_1(&(VAR_9->dbg_ctx), VAR_5,
      "Returning NULL, free_sqes=%d.\n ",
      VAR_14);
  goto out_failed;
 }


 if ((FUNC_4(&VAR_7->num_active_ios) >=
     VAR_2)) {
  FUNC_1(&(VAR_9->dbg_ctx), VAR_5,
      "Returning NULL, num_active_ios=%d.\n",
      FUNC_4(&VAR_7->num_active_ios));
  goto out_failed;
 }


 if (FUNC_4(&VAR_10->free_list_cnt) <= VAR_1) {
  FUNC_1(&(VAR_9->dbg_ctx), VAR_5,
      "Returning NULL, free_list_cnt=%d.\n",
      FUNC_4(&VAR_10->free_list_cnt));
  goto out_failed;
 }

 FUNC_8(&VAR_10->lock, VAR_16);
 for (VAR_15 = 0; VAR_15 < VAR_0; VAR_15++) {
  VAR_11 = &VAR_10->cmds[VAR_10->idx];
  VAR_10->idx++;
  if (VAR_10->idx == VAR_0)
   VAR_10->idx = 0;


  if (!VAR_11->alloc)
   break;
 }

 if (VAR_15 == VAR_0) {
  FUNC_9(&VAR_10->lock, VAR_16);
  goto out_failed;
 }

 if (FUNC_10(VAR_4, &VAR_11->flags))
  FUNC_0(&VAR_9->dbg_ctx,
    "io_req found to be dirty ox_id = 0x%x.\n",
    VAR_11->xid);


 VAR_11->flags = 0;
 VAR_11->alloc = 1;
 FUNC_9(&VAR_10->lock, VAR_16);

 FUNC_3(&VAR_7->num_active_ios);
 FUNC_2(&VAR_7->free_sqes);
 VAR_13 = VAR_11->xid;
 FUNC_2(&VAR_10->free_list_cnt);

 VAR_11->cmd_mgr = VAR_10;
 VAR_11->fcport = VAR_7;


 VAR_11->sc_cmd = ((void*)0);
 VAR_11->lun = -1;


 FUNC_6(&VAR_11->refcount);
 FUNC_5(&VAR_11->state, VAR_3);



 VAR_12 = VAR_11->bd_tbl = VAR_10->io_bdt_pool[VAR_13];
 if (VAR_12 == ((void*)0)) {
  FUNC_0(&(VAR_9->dbg_ctx), "bd_tbl is NULL, xid=%x.\n", VAR_13);
  FUNC_7(&VAR_11->refcount, VAR_6);
  goto out_failed;
 }
 VAR_12->io_req = VAR_11;
 VAR_11->cmd_type = VAR_8;
 VAR_11->tm_flags = 0;


 VAR_11->rx_buf_off = 0;
 VAR_11->tx_buf_off = 0;
 VAR_11->rx_id = 0xffff;

 return VAR_11;

out_failed:

 VAR_9->alloc_failures++;
 return ((void*)0);
}
