
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int done; } ;
struct TYPE_6__ {int invalidate_rkey; } ;
struct ib_send_wr {int send_flags; TYPE_2__ ex; scalar_t__ num_sge; TYPE_1__* wr_cqe; int opcode; } ;
struct smbd_mr {int need_invalidate; int state; int invalidate_done; TYPE_3__* mr; TYPE_1__ cqe; struct ib_send_wr inv_wr; struct smbd_connection* conn; } ;
struct smbd_connection {int wait_for_mr_cleanup; int mr_used_count; int mr_recovery_work; int workqueue; TYPE_4__* id; } ;
struct TYPE_8__ {int qp; } ;
struct TYPE_7__ {int rkey; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,struct ib_send_wr*,int *) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct smbd_connection*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct smbd_mr *VAR_5)
{
 struct ib_send_wr *VAR_6;
 struct smbd_connection *VAR_7 = VAR_5->conn;
 int VAR_8 = 0;

 if (VAR_5->need_invalidate) {

  VAR_6 = &VAR_5->inv_wr;
  VAR_6->opcode = VAR_2;
  VAR_5->cqe.done = VAR_4;
  VAR_6->wr_cqe = &VAR_5->cqe;
  VAR_6->num_sge = 0;
  VAR_6->ex.invalidate_rkey = VAR_5->mr->rkey;
  VAR_6->send_flags = VAR_1;

  FUNC_2(&VAR_5->invalidate_done);
  VAR_8 = FUNC_1(VAR_7->id->qp, VAR_6, ((void*)0));
  if (VAR_8) {
   FUNC_3(VAR_0, "ib_post_send failed rc=%x\n", VAR_8);
   FUNC_5(VAR_7);
   goto done;
  }
  FUNC_6(&VAR_5->invalidate_done);
  VAR_5->need_invalidate = 0;
 } else




  VAR_5->state = VAR_3;





 FUNC_4(VAR_7->workqueue, &VAR_7->mr_recovery_work);

done:
 if (FUNC_0(&VAR_7->mr_used_count))
  FUNC_7(&VAR_7->wait_for_mr_cleanup);

 return VAR_8;
}
