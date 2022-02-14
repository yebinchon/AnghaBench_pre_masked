
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


struct TYPE_9__ {int type; } ;
struct TYPE_10__ {TYPE_3__ hdr; } ;
struct TYPE_11__ {TYPE_4__ cmd; } ;
struct nvmet_tcp_queue {int offset; TYPE_5__ pdu; int idx; scalar_t__ data_digest; scalar_t__ left; int sock; struct nvmet_tcp_cmd* cmd; } ;
struct TYPE_12__ {scalar_t__ transfer_len; TYPE_2__* cmd; } ;
struct nvmet_tcp_cmd {scalar_t__ recv_ddgst; scalar_t__ exp_ddgst; int flags; scalar_t__ rbytes_done; TYPE_6__ req; } ;
struct msghdr {int msg_flags; } ;
struct kvec {void* iov_base; scalar_t__ iov_len; } ;
struct TYPE_7__ {int command_id; } ;
struct TYPE_8__ {TYPE_1__ common; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct msghdr*,struct kvec*,int,scalar_t__,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct nvmet_tcp_queue*) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (struct nvmet_tcp_queue*) ;
 int FUNC_5 (struct nvmet_tcp_cmd*) ;
 int FUNC_6 (char*,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct nvmet_tcp_queue *VAR_4)
{
 struct nvmet_tcp_cmd *VAR_5 = VAR_4->cmd;
 int VAR_6;
 struct msghdr VAR_7 = { .msg_flags = VAR_2 };
 struct kvec VAR_8 = {
  .iov_base = (void *)&VAR_5->recv_ddgst + VAR_4->offset,
  .iov_len = VAR_4->left
 };

 VAR_6 = FUNC_0(VAR_4->sock, &VAR_7, &VAR_8, 1,
   VAR_8.iov_len, VAR_7.msg_flags);
 if (FUNC_7(VAR_6 < 0))
  return VAR_6;

 VAR_4->offset += VAR_6;
 VAR_4->left -= VAR_6;
 if (VAR_4->left)
  return -VAR_0;

 if (VAR_4->data_digest && VAR_5->exp_ddgst != VAR_5->recv_ddgst) {
  FUNC_6("queue %d: cmd %d pdu (%d) data digest error: recv %#x expected %#x\n",
   VAR_4->idx, VAR_5->req.cmd->common.command_id,
   VAR_4->pdu.cmd.hdr.type, FUNC_1(VAR_5->recv_ddgst),
   FUNC_1(VAR_5->exp_ddgst));
  FUNC_5(VAR_5);
  FUNC_4(VAR_4);
  VAR_6 = -VAR_1;
  goto out;
 }

 if (!(VAR_5->flags & VAR_3) &&
     VAR_5->rbytes_done == VAR_5->req.transfer_len)
  FUNC_3(&VAR_5->req);
 VAR_6 = 0;
out:
 FUNC_2(VAR_4);
 return VAR_6;
}
