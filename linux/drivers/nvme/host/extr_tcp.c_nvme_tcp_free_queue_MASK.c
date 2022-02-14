
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_tcp_queue {int pdu; int sock; scalar_t__ data_digest; scalar_t__ hdr_digest; int flags; } ;
struct nvme_tcp_ctrl {struct nvme_tcp_queue* queues; } ;
struct nvme_ctrl {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct nvme_tcp_queue*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 struct nvme_tcp_ctrl* FUNC_4 (struct nvme_ctrl*) ;

__attribute__((used)) static void FUNC_5(struct nvme_ctrl *VAR_1, int VAR_2)
{
 struct nvme_tcp_ctrl *VAR_3 = FUNC_4(VAR_1);
 struct nvme_tcp_queue *VAR_4 = &VAR_3->queues[VAR_2];

 if (!FUNC_3(VAR_0, &VAR_4->flags))
  return;

 if (VAR_4->hdr_digest || VAR_4->data_digest)
  FUNC_1(VAR_4);

 FUNC_2(VAR_4->sock);
 FUNC_0(VAR_4->pdu);
}
