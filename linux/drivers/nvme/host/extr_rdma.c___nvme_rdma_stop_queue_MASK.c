
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_rdma_queue {int qp; int cm_id; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct nvme_rdma_queue *VAR_0)
{
 FUNC_1(VAR_0->cm_id);
 FUNC_0(VAR_0->qp);
}
