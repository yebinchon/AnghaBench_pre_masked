
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct nvmet_tcp_queue {int free_list; int pf_cache; TYPE_1__* port; } ;
struct TYPE_7__ {int msg_flags; } ;
struct TYPE_6__ {int * cqe; int * cmd; int port; } ;
struct nvmet_tcp_cmd {TYPE_4__* cmd_pdu; TYPE_4__* rsp_pdu; TYPE_4__* data_pdu; int entry; TYPE_3__ recv_msg; void* r2t_pdu; TYPE_2__ req; struct nvmet_tcp_queue* queue; } ;
struct TYPE_8__ {int cqe; int cmd; } ;
struct TYPE_5__ {int nport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (struct nvmet_tcp_queue*) ;
 void* FUNC_2 (int *,scalar_t__,int) ;
 int FUNC_3 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_4(struct nvmet_tcp_queue *VAR_5,
  struct nvmet_tcp_cmd *VAR_6)
{
 u8 VAR_7 = FUNC_1(VAR_5);

 VAR_6->queue = VAR_5;
 VAR_6->req.port = VAR_5->port->nport;

 VAR_6->cmd_pdu = FUNC_2(&VAR_5->pf_cache,
   sizeof(*VAR_6->cmd_pdu) + VAR_7, VAR_1 | VAR_4);
 if (!VAR_6->cmd_pdu)
  return -VAR_0;
 VAR_6->req.cmd = &VAR_6->cmd_pdu->cmd;

 VAR_6->rsp_pdu = FUNC_2(&VAR_5->pf_cache,
   sizeof(*VAR_6->rsp_pdu) + VAR_7, VAR_1 | VAR_4);
 if (!VAR_6->rsp_pdu)
  goto out_free_cmd;
 VAR_6->req.cqe = &VAR_6->rsp_pdu->cqe;

 VAR_6->data_pdu = FUNC_2(&VAR_5->pf_cache,
   sizeof(*VAR_6->data_pdu) + VAR_7, VAR_1 | VAR_4);
 if (!VAR_6->data_pdu)
  goto out_free_rsp;

 VAR_6->r2t_pdu = FUNC_2(&VAR_5->pf_cache,
   sizeof(*VAR_6->r2t_pdu) + VAR_7, VAR_1 | VAR_4);
 if (!VAR_6->r2t_pdu)
  goto out_free_data;

 VAR_6->recv_msg.msg_flags = VAR_2 | VAR_3;

 FUNC_0(&VAR_6->entry, &VAR_5->free_list);

 return 0;
out_free_data:
 FUNC_3(VAR_6->data_pdu);
out_free_rsp:
 FUNC_3(VAR_6->rsp_pdu);
out_free_cmd:
 FUNC_3(VAR_6->cmd_pdu);
 return -VAR_0;
}
