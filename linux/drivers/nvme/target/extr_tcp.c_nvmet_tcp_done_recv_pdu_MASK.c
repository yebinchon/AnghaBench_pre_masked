
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


struct TYPE_17__ {int opcode; } ;
struct nvme_command {TYPE_3__ common; } ;
struct nvme_tcp_hdr {scalar_t__ type; } ;
struct TYPE_15__ {struct nvme_command cmd; struct nvme_tcp_hdr hdr; } ;
struct TYPE_16__ {TYPE_1__ cmd; } ;
struct nvmet_tcp_queue {scalar_t__ state; scalar_t__ idx; TYPE_7__* cmd; int rcv_state; int nvme_sq; int nvme_cq; int send_list_len; int nr_cmds; TYPE_2__ pdu; } ;
struct nvmet_req {TYPE_13__* cmd; } ;
struct TYPE_21__ {struct nvmet_req req; } ;
struct TYPE_18__ {int length; } ;
struct TYPE_19__ {TYPE_4__ sgl; } ;
struct TYPE_20__ {TYPE_5__ dptr; int opcode; int command_id; } ;
struct TYPE_14__ {TYPE_6__ common; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_13__*,struct nvme_command*,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (struct nvmet_tcp_queue*) ;
 int FUNC_3 (struct nvmet_req*,int) ;
 int FUNC_4 (struct nvmet_req*) ;
 int FUNC_5 (struct nvmet_req*,int *,int *,int *) ;
 int FUNC_6 (struct nvmet_tcp_queue*) ;
 TYPE_7__* FUNC_7 (struct nvmet_tcp_queue*) ;
 int FUNC_8 (struct nvmet_tcp_queue*) ;
 int FUNC_9 (struct nvmet_tcp_queue*) ;
 int FUNC_10 (struct nvmet_tcp_queue*,TYPE_7__*,struct nvmet_req*) ;
 scalar_t__ FUNC_11 (TYPE_7__*) ;
 int FUNC_12 (TYPE_7__*) ;
 int FUNC_13 (TYPE_7__*) ;
 scalar_t__ FUNC_14 (TYPE_7__*) ;
 int VAR_7 ;
 int FUNC_15 (struct nvmet_req*) ;
 int FUNC_16 (char*,scalar_t__,...) ;
 scalar_t__ FUNC_17 (int) ;

__attribute__((used)) static int FUNC_18(struct nvmet_tcp_queue *VAR_8)
{
 struct nvme_tcp_hdr *VAR_9 = &VAR_8->pdu.cmd.hdr;
 struct nvme_command *VAR_10 = &VAR_8->pdu.cmd.cmd;
 struct nvmet_req *VAR_11;
 int VAR_12;

 if (FUNC_17(VAR_8->state == VAR_3)) {
  if (VAR_9->type != VAR_6) {
   FUNC_16("unexpected pdu type (%d) before icreq\n",
    VAR_9->type);
   FUNC_6(VAR_8);
   return -VAR_2;
  }
  return FUNC_9(VAR_8);
 }

 if (VAR_9->type == VAR_5) {
  VAR_12 = FUNC_8(VAR_8);
  if (FUNC_17(VAR_12))
   return VAR_12;
  return 0;
 }

 VAR_8->cmd = FUNC_7(VAR_8);
 if (FUNC_17(!VAR_8->cmd)) {

  FUNC_16("queue %d: out of commands (%d) send_list_len: %d, opcode: %d",
   VAR_8->idx, VAR_8->nr_cmds, VAR_8->send_list_len,
   VAR_10->common.opcode);
  FUNC_6(VAR_8);
  return -VAR_1;
 }

 VAR_11 = &VAR_8->cmd->req;
 FUNC_1(VAR_11->cmd, VAR_10, sizeof(*VAR_10));

 if (FUNC_17(!FUNC_5(VAR_11, &VAR_8->nvme_cq,
   &VAR_8->nvme_sq, &VAR_7))) {
  FUNC_16("failed cmd %p id %d opcode %d, data_len: %d\n",
   VAR_11->cmd, VAR_11->cmd->common.command_id,
   VAR_11->cmd->common.opcode,
   FUNC_0(VAR_11->cmd->common.dptr.sgl.length));

  FUNC_10(VAR_8, VAR_8->cmd, VAR_11);
  return -VAR_0;
 }

 VAR_12 = FUNC_12(VAR_8->cmd);
 if (FUNC_17(VAR_12)) {
  FUNC_16("queue %d: failed to map data\n", VAR_8->idx);
  if (FUNC_11(VAR_8->cmd))
   FUNC_6(VAR_8);
  else
   FUNC_3(VAR_11, VAR_12);
  VAR_12 = -VAR_0;
  goto out;
 }

 if (FUNC_14(VAR_8->cmd)) {
  if (FUNC_11(VAR_8->cmd)) {
   VAR_8->rcv_state = VAR_4;
   FUNC_13(VAR_8->cmd);
   return 0;
  }

  FUNC_15(&VAR_8->cmd->req);
  goto out;
 }

 FUNC_4(&VAR_8->cmd->req);
out:
 FUNC_2(VAR_8);
 return VAR_12;
}
