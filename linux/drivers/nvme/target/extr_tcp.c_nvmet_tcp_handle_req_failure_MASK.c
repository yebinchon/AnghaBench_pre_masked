
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


struct nvmet_tcp_queue {int rcv_state; int idx; } ;
struct TYPE_8__ {TYPE_1__* port; int cmd; } ;
struct nvmet_tcp_cmd {int flags; TYPE_2__ req; } ;
struct nvmet_req {scalar_t__ data_len; TYPE_6__* cmd; } ;
struct TYPE_9__ {int length; } ;
struct TYPE_11__ {TYPE_3__ sgl; } ;
struct TYPE_10__ {TYPE_5__ dptr; } ;
struct TYPE_12__ {TYPE_4__ common; } ;
struct TYPE_7__ {scalar_t__ inline_data_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nvmet_tcp_queue*) ;
 int FUNC_3 (struct nvmet_tcp_queue*) ;
 int FUNC_4 (struct nvmet_tcp_cmd*) ;
 int FUNC_5 (struct nvmet_tcp_cmd*) ;
 int FUNC_6 (char*,int ) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct nvmet_tcp_queue *VAR_2,
  struct nvmet_tcp_cmd *VAR_3, struct nvmet_req *VAR_4)
{
 int VAR_5;


 VAR_4->data_len = FUNC_0(VAR_4->cmd->common.dptr.sgl.length);

 if (!FUNC_1(VAR_3->req.cmd) ||
     VAR_4->data_len > VAR_3->req.port->inline_data_size) {
  FUNC_2(VAR_2);
  return;
 }

 VAR_5 = FUNC_4(VAR_3);
 if (FUNC_7(VAR_5)) {
  FUNC_6("queue %d: failed to map data\n", VAR_2->idx);
  FUNC_3(VAR_2);
  return;
 }

 VAR_2->rcv_state = VAR_1;
 FUNC_5(VAR_3);
 VAR_3->flags |= VAR_0;
}
