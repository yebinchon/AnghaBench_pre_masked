
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_tcp_queue {int flags; } ;
struct nvme_tcp_ctrl {struct nvme_tcp_queue* queues; } ;
struct nvme_ctrl {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvme_tcp_queue*) ;
 int FUNC_1 (int ,int *) ;
 struct nvme_tcp_ctrl* FUNC_2 (struct nvme_ctrl*) ;

__attribute__((used)) static void FUNC_3(struct nvme_ctrl *VAR_1, int VAR_2)
{
 struct nvme_tcp_ctrl *VAR_3 = FUNC_2(VAR_1);
 struct nvme_tcp_queue *VAR_4 = &VAR_3->queues[VAR_2];

 if (!FUNC_1(VAR_0, &VAR_4->flags))
  return;

 FUNC_0(VAR_4);
}
