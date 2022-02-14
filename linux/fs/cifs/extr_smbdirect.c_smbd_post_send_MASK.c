
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int done; } ;
struct smbd_request {int num_sge; int has_payload; TYPE_2__* sge; TYPE_1__ cqe; } ;
struct smbd_connection {int keep_alive_interval; int idle_timer_work; int workqueue; int wait_send_pending; int send_pending; int wait_send_payload_pending; int send_payload_pending; TYPE_3__* id; } ;
struct ib_send_wr {int num_sge; int send_flags; int opcode; TYPE_2__* sg_list; TYPE_1__* wr_cqe; int * next; } ;
struct TYPE_6__ {int qp; int device; } ;
struct TYPE_5__ {int length; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,struct ib_send_wr*,int *) ;
 int FUNC_4 (int ,char*,int,...) ;
 int FUNC_5 (int ,int *,int) ;
 int VAR_7 ;
 int FUNC_6 (struct smbd_connection*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct smbd_connection *VAR_8,
  struct smbd_request *VAR_9, bool VAR_10)
{
 struct ib_send_wr VAR_11;
 int VAR_12, VAR_13;

 for (VAR_13 = 0; VAR_13 < VAR_9->num_sge; VAR_13++) {
  FUNC_4(VAR_6,
   "rdma_request sge[%d] addr=%llu length=%u\n",
   VAR_13, VAR_9->sge[VAR_13].addr, VAR_9->sge[VAR_13].length);
  FUNC_2(
   VAR_8->id->device,
   VAR_9->sge[VAR_13].addr,
   VAR_9->sge[VAR_13].length,
   VAR_0);
 }

 VAR_9->cqe.done = VAR_7;

 VAR_11.next = ((void*)0);
 VAR_11.wr_cqe = &VAR_9->cqe;
 VAR_11.sg_list = VAR_9->sge;
 VAR_11.num_sge = VAR_9->num_sge;
 VAR_11.opcode = VAR_5;
 VAR_11.send_flags = VAR_4;

 if (VAR_10) {
  VAR_9->has_payload = 1;
  FUNC_1(&VAR_8->send_payload_pending);
 } else {
  VAR_9->has_payload = 0;
  FUNC_1(&VAR_8->send_pending);
 }

 VAR_12 = FUNC_3(VAR_8->id->qp, &VAR_11, ((void*)0));
 if (VAR_12) {
  FUNC_4(VAR_2, "ib_post_send failed rc=%d\n", VAR_12);
  if (VAR_10) {
   if (FUNC_0(&VAR_8->send_payload_pending))
    FUNC_7(&VAR_8->wait_send_payload_pending);
  } else {
   if (FUNC_0(&VAR_8->send_pending))
    FUNC_7(&VAR_8->wait_send_pending);
  }
  FUNC_6(VAR_8);
  VAR_12 = -VAR_1;
 } else

  FUNC_5(VAR_8->workqueue, &VAR_8->idle_timer_work,
   VAR_8->keep_alive_interval*VAR_3);

 return VAR_12;
}
