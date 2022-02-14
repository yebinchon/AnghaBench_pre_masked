
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_tcp_data_pdu {size_t ttag; int data_length; int data_offset; } ;
struct TYPE_2__ {struct nvme_tcp_data_pdu data; } ;
struct nvmet_tcp_queue {int rcv_state; struct nvmet_tcp_cmd* cmd; struct nvmet_tcp_cmd* cmds; TYPE_1__ pdu; } ;
struct nvmet_tcp_cmd {scalar_t__ rbytes_done; scalar_t__ pdu_recv; scalar_t__ pdu_len; int req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct nvmet_tcp_cmd*) ;
 int FUNC_3 (char*,size_t,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct nvmet_tcp_queue *VAR_4)
{
 struct nvme_tcp_data_pdu *VAR_5 = &VAR_4->pdu.data;
 struct nvmet_tcp_cmd *VAR_6;

 VAR_6 = &VAR_4->cmds[VAR_5->ttag];

 if (FUNC_0(VAR_5->data_offset) != VAR_6->rbytes_done) {
  FUNC_3("ttag %u unexpected data offset %u (expected %u)\n",
   VAR_5->ttag, FUNC_0(VAR_5->data_offset),
   VAR_6->rbytes_done);

  FUNC_1(&VAR_6->req,
   VAR_3 | VAR_2);
  return -VAR_0;
 }

 VAR_6->pdu_len = FUNC_0(VAR_5->data_length);
 VAR_6->pdu_recv = 0;
 FUNC_2(VAR_6);
 VAR_4->cmd = VAR_6;
 VAR_4->rcv_state = VAR_1;

 return 0;
}
