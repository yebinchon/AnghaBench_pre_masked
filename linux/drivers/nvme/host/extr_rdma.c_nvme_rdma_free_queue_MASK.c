
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_rdma_queue {int cm_id; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvme_rdma_queue*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct nvme_rdma_queue *VAR_1)
{
 if (!FUNC_2(VAR_0, &VAR_1->flags))
  return;

 FUNC_0(VAR_1);
 FUNC_1(VAR_1->cm_id);
}
