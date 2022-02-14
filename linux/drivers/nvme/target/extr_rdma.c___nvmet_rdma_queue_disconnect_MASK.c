
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_rdma_queue {int state; int release_work; int cm_id; int state_lock; } ;





 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct nvmet_rdma_queue *VAR_0)
{
 bool VAR_1 = 0;
 unsigned long VAR_2;

 FUNC_0("cm_id= %p queue->state= %d\n", VAR_0->cm_id, VAR_0->state);

 FUNC_3(&VAR_0->state_lock, VAR_2);
 switch (VAR_0->state) {
 case 130:
 case 128:
  VAR_0->state = 129;
  VAR_1 = 1;
  break;
 case 129:
  break;
 }
 FUNC_4(&VAR_0->state_lock, VAR_2);

 if (VAR_1) {
  FUNC_1(VAR_0->cm_id);
  FUNC_2(&VAR_0->release_work);
 }
}
