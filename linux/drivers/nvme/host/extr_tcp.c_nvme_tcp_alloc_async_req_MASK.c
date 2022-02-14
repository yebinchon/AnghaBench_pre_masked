
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct nvme_tcp_request {struct nvme_tcp_queue* queue; int pdu; } ;
struct nvme_tcp_queue {int pf_cache; } ;
struct nvme_tcp_ctrl {struct nvme_tcp_queue* queues; struct nvme_tcp_request async_req; } ;
struct nvme_tcp_cmd_pdu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct nvme_tcp_queue*) ;
 int FUNC_1 (int *,scalar_t__,int) ;

__attribute__((used)) static int FUNC_2(struct nvme_tcp_ctrl *VAR_3)
{
 struct nvme_tcp_queue *VAR_4 = &VAR_3->queues[0];
 struct nvme_tcp_request *VAR_5 = &VAR_3->async_req;
 u8 VAR_6 = FUNC_0(VAR_4);

 VAR_5->pdu = FUNC_1(&VAR_4->pf_cache,
  sizeof(struct nvme_tcp_cmd_pdu) + VAR_6,
  VAR_1 | VAR_2);
 if (!VAR_5->pdu)
  return -VAR_0;

 VAR_5->queue = &VAR_3->queues[0];
 return 0;
}
