
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qedi_endpoint {int state; size_t iscsi_cid; struct qedi_ctx* qedi; struct qedi_conn* conn; int src_port; int handle; int tcp_ofld_wait; int offload_work; } ;
struct TYPE_5__ {int ** conn_cid_tbl; } ;
struct qedi_ctx {int num_offloads; int lcl_port_tbl; TYPE_2__ cid_que; int ** ep_tbl; int dbg_ctx; int cdev; int flags; } ;
struct qedi_conn {int abrt_conn; int * ep; int active_cmd_count; int flags; TYPE_1__* cls_conn; } ;
struct iscsi_endpoint {struct qedi_endpoint* dd_data; } ;
struct iscsi_conn {int dummy; } ;
struct TYPE_6__ {int (* destroy_conn ) (int ,int ,int) ;int (* release_conn ) (int ,int ) ;} ;
struct TYPE_4__ {struct iscsi_conn* dd_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,char*,size_t,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,char*,int,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct iscsi_endpoint*) ;
 int FUNC_5 (struct iscsi_conn*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct qedi_conn*) ;
 int FUNC_8 (struct qedi_ctx*,struct qedi_conn*,int *) ;
 scalar_t__ VAR_7 ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (struct qedi_ctx*,struct qedi_endpoint*) ;
 TYPE_3__* VAR_8 ;
 int FUNC_11 (int ,int ,int) ;
 int FUNC_12 (int ,int ) ;
 scalar_t__ FUNC_13 (int ,int *) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int ,int,int) ;

__attribute__((used)) static void FUNC_16(struct iscsi_endpoint *VAR_9)
{
 struct qedi_endpoint *VAR_10;
 struct qedi_conn *VAR_11 = ((void*)0);
 struct iscsi_conn *VAR_12 = ((void*)0);
 struct qedi_ctx *VAR_13;
 int VAR_14 = 0;
 int VAR_15;
 int VAR_16 = 0;
 int VAR_17 = 10;

 VAR_15 = 60 * VAR_3 + VAR_0;
 VAR_10 = VAR_9->dd_data;
 VAR_13 = VAR_10->qedi;

 if (VAR_10->state == 128)
  goto ep_exit_recover;

 FUNC_3(&VAR_10->offload_work);

 if (VAR_10->conn) {
  VAR_11 = VAR_10->conn;
  VAR_12 = VAR_11->cls_conn->dd_data;
  FUNC_5(VAR_12);
  VAR_16 = VAR_11->abrt_conn;

  while (VAR_17--) {
   if (!FUNC_13(VAR_4,
          &VAR_11->flags)) {
    break;
   }
   FUNC_6(1000);
  }

  if (FUNC_13(VAR_5, &VAR_13->flags)) {
   if (VAR_7) {
    FUNC_0(&VAR_13->dbg_ctx, VAR_6,
       "Do not recover cid=0x%x\n",
       VAR_10->iscsi_cid);
    goto ep_exit_recover;
   }
   FUNC_0(&VAR_13->dbg_ctx, VAR_6,
      "Reset recovery cid=0x%x, qedi_ep=%p, state=0x%x\n",
      VAR_10->iscsi_cid, VAR_10, VAR_10->state);
   FUNC_7(VAR_11);
   goto ep_release_conn;
  }
 }

 if (VAR_7)
  goto ep_exit_recover;

 switch (VAR_10->state) {
 case 128:
 case 129:
  goto ep_release_conn;
 case 130:
   break;
 case 131:
  if (FUNC_14(!VAR_11))
   break;

  FUNC_0(&VAR_13->dbg_ctx, VAR_6,
     "Active cmd count=%d, abrt_conn=%d, ep state=0x%x, cid=0x%x, qedi_conn=%p\n",
     VAR_11->active_cmd_count, VAR_16,
     VAR_10->state,
     VAR_10->iscsi_cid,
     VAR_10->conn
     );

  if (!VAR_11->active_cmd_count)
   VAR_16 = 0;
  else
   VAR_16 = 1;

  if (VAR_16)
   FUNC_8(VAR_13, VAR_11, ((void*)0));
  break;
 default:
  break;
 }

 VAR_10->state = VAR_1;
 VAR_14 = VAR_8->destroy_conn(VAR_13->cdev, VAR_10->handle, VAR_16);
 if (VAR_14) {
  FUNC_1(&VAR_13->dbg_ctx,
     "destroy_conn failed returned %d\n", VAR_14);
 } else {
  VAR_14 = FUNC_15(
     VAR_10->tcp_ofld_wait,
     (VAR_10->state !=
      VAR_1),
     VAR_15);
  if ((VAR_14 <= 0) || (VAR_10->state == VAR_1)) {
   FUNC_1(&VAR_13->dbg_ctx,
      "Destroy conn timedout or interrupted, ret=%d, delay=%d, cid=0x%x\n",
      VAR_14, VAR_15, VAR_10->iscsi_cid);
  }
 }

ep_release_conn:
 VAR_14 = VAR_8->release_conn(VAR_13->cdev, VAR_10->handle);
 if (VAR_14)
  FUNC_1(&VAR_13->dbg_ctx,
     "release_conn returned %d, cid=0x%x\n",
     VAR_14, VAR_10->iscsi_cid);
ep_exit_recover:
 VAR_10->state = VAR_2;
 VAR_13->ep_tbl[VAR_10->iscsi_cid] = ((void*)0);
 VAR_13->cid_que.conn_cid_tbl[VAR_10->iscsi_cid] = ((void*)0);
 FUNC_9(&VAR_13->lcl_port_tbl, VAR_10->src_port);
 FUNC_10(VAR_13, VAR_10);

 if (VAR_11)
  VAR_11->ep = ((void*)0);

 VAR_10->conn = ((void*)0);
 VAR_10->qedi = ((void*)0);
 FUNC_2(&VAR_13->num_offloads);

 FUNC_4(VAR_9);
}
