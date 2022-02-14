
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct request {int dummy; } ;
struct nvme_tcp_request {struct nvme_tcp_queue* queue; int pdu; } ;
struct nvme_tcp_queue {int pf_cache; } ;
struct blk_mq_tag_set {struct nvme_tcp_ctrl* driver_data; } ;
struct nvme_tcp_ctrl {int ctrl; struct nvme_tcp_queue* queues; struct blk_mq_tag_set tag_set; } ;
struct nvme_tcp_cmd_pdu {int dummy; } ;
struct TYPE_2__ {int * ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nvme_tcp_request* FUNC_0 (struct request*) ;
 TYPE_1__* FUNC_1 (struct request*) ;
 scalar_t__ FUNC_2 (struct nvme_tcp_queue*) ;
 int FUNC_3 (int *,scalar_t__,int) ;

__attribute__((used)) static int FUNC_4(struct blk_mq_tag_set *VAR_3,
  struct request *VAR_4, unsigned int VAR_5,
  unsigned int VAR_6)
{
 struct nvme_tcp_ctrl *VAR_7 = VAR_3->driver_data;
 struct nvme_tcp_request *VAR_8 = FUNC_0(VAR_4);
 int VAR_9 = (VAR_3 == &VAR_7->tag_set) ? VAR_5 + 1 : 0;
 struct nvme_tcp_queue *VAR_10 = &VAR_7->queues[VAR_9];
 u8 VAR_11 = FUNC_2(VAR_10);

 VAR_8->pdu = FUNC_3(&VAR_10->pf_cache,
  sizeof(struct nvme_tcp_cmd_pdu) + VAR_11,
  VAR_1 | VAR_2);
 if (!VAR_8->pdu)
  return -VAR_0;

 VAR_8->queue = VAR_10;
 FUNC_1(VAR_4)->ctrl = &VAR_7->ctrl;

 return 0;
}
