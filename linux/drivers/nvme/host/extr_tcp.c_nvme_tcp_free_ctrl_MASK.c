
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_tcp_ctrl {struct nvme_tcp_ctrl* queues; int list; } ;
struct nvme_ctrl {int opts; } ;


 int FUNC_0 (struct nvme_tcp_ctrl*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int FUNC_5 (int ) ;
 struct nvme_tcp_ctrl* FUNC_6 (struct nvme_ctrl*) ;

__attribute__((used)) static void FUNC_7(struct nvme_ctrl *VAR_1)
{
 struct nvme_tcp_ctrl *VAR_2 = FUNC_6(VAR_1);

 if (FUNC_2(&VAR_2->list))
  goto free_ctrl;

 FUNC_3(&VAR_0);
 FUNC_1(&VAR_2->list);
 FUNC_4(&VAR_0);

 FUNC_5(VAR_1->opts);
free_ctrl:
 FUNC_0(VAR_2->queues);
 FUNC_0(VAR_2);
}
