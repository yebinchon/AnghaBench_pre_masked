
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_rdma_queue {int queue_list; } ;


 int FUNC_0 (struct nvmet_rdma_queue*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(struct nvmet_rdma_queue *VAR_1)
{
 bool VAR_2 = 0;

 FUNC_3(&VAR_0);
 if (!FUNC_2(&VAR_1->queue_list)) {
  FUNC_1(&VAR_1->queue_list);
  VAR_2 = 1;
 }
 FUNC_4(&VAR_0);

 if (VAR_2)
  FUNC_0(VAR_1);
}
