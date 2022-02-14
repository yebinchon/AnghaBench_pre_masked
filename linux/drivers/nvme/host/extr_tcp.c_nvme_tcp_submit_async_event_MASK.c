
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct nvme_tcp_queue {scalar_t__ hdr_digest; } ;
struct TYPE_6__ {scalar_t__ data_len; int * curr_bio; scalar_t__ offset; int state; struct nvme_tcp_cmd_pdu* pdu; } ;
struct nvme_tcp_ctrl {TYPE_3__ async_req; struct nvme_tcp_queue* queues; } ;
struct TYPE_4__ {int hlen; int plen; int flags; int type; } ;
struct TYPE_5__ {int flags; int command_id; int opcode; } ;
struct nvme_command {TYPE_2__ common; } ;
struct nvme_tcp_cmd_pdu {TYPE_1__ hdr; struct nvme_command cmd; } ;
struct nvme_ctrl {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct nvme_tcp_cmd_pdu*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct nvme_tcp_queue*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (struct nvme_command*) ;
 struct nvme_tcp_ctrl* FUNC_5 (struct nvme_ctrl*) ;

__attribute__((used)) static void FUNC_6(struct nvme_ctrl *VAR_6)
{
 struct nvme_tcp_ctrl *VAR_7 = FUNC_5(VAR_6);
 struct nvme_tcp_queue *VAR_8 = &VAR_7->queues[0];
 struct nvme_tcp_cmd_pdu *VAR_9 = VAR_7->async_req.pdu;
 struct nvme_command *VAR_10 = &VAR_9->cmd;
 u8 VAR_11 = FUNC_2(VAR_8);

 FUNC_1(VAR_9, 0, sizeof(*VAR_9));
 VAR_9->hdr.type = VAR_5;
 if (VAR_8->hdr_digest)
  VAR_9->hdr.flags |= VAR_2;
 VAR_9->hdr.hlen = sizeof(*VAR_9);
 VAR_9->hdr.plen = FUNC_0(VAR_9->hdr.hlen + VAR_11);

 VAR_10->common.opcode = VAR_4;
 VAR_10->common.command_id = VAR_0;
 VAR_10->common.flags |= VAR_1;
 FUNC_4(VAR_10);

 VAR_7->async_req.state = VAR_3;
 VAR_7->async_req.offset = 0;
 VAR_7->async_req.curr_bio = ((void*)0);
 VAR_7->async_req.data_len = 0;

 FUNC_3(&VAR_7->async_req);
}
