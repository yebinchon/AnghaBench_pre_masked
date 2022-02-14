
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_cm_id {int dummy; } ;
struct nvmet_rdma_queue {scalar_t__ state; int release_work; int idx; int queue_list; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct rdma_cm_id *VAR_2,
  struct nvmet_rdma_queue *VAR_3)
{
 FUNC_0(VAR_3->state != VAR_0);

 FUNC_3(&VAR_1);
 if (!FUNC_2(&VAR_3->queue_list))
  FUNC_1(&VAR_3->queue_list);
 FUNC_4(&VAR_1);

 FUNC_5("failed to connect queue %d\n", VAR_3->idx);
 FUNC_6(&VAR_3->release_work);
}
