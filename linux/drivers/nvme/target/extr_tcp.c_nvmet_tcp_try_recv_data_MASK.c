
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nvmet_tcp_queue {scalar_t__ data_digest; struct nvmet_tcp_cmd* cmd; } ;
struct TYPE_7__ {scalar_t__ transfer_len; } ;
struct TYPE_6__ {int msg_flags; } ;
struct nvmet_tcp_cmd {int pdu_recv; scalar_t__ rbytes_done; int flags; TYPE_3__ req; TYPE_2__ recv_msg; TYPE_1__* queue; } ;
struct TYPE_5__ {int sock; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct nvmet_tcp_queue*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (struct nvmet_tcp_cmd*) ;
 int FUNC_4 (struct nvmet_tcp_cmd*) ;
 int FUNC_5 (int ,TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_6(struct nvmet_tcp_queue *VAR_1)
{
 struct nvmet_tcp_cmd *VAR_2 = VAR_1->cmd;
 int VAR_3;

 while (FUNC_0(&VAR_2->recv_msg)) {
  VAR_3 = FUNC_5(VAR_2->queue->sock, &VAR_2->recv_msg,
   VAR_2->recv_msg.msg_flags);
  if (VAR_3 <= 0)
   return VAR_3;

  VAR_2->pdu_recv += VAR_3;
  VAR_2->rbytes_done += VAR_3;
 }

 FUNC_4(VAR_2);

 if (!(VAR_2->flags & VAR_0) &&
     VAR_2->rbytes_done == VAR_2->req.transfer_len) {
  if (VAR_1->data_digest) {
   FUNC_3(VAR_2);
   return 0;
  }
  FUNC_2(&VAR_2->req);
 }

 FUNC_1(VAR_1);
 return 0;
}
