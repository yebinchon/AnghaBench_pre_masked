
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_rdma_device {int srq; int srq_size; int srq_cmds; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct nvmet_rdma_device*,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct nvmet_rdma_device *VAR_0)
{
 if (!VAR_0->srq)
  return;

 FUNC_1(VAR_0, VAR_0->srq_cmds, VAR_0->srq_size, 0);
 FUNC_0(VAR_0->srq);
}
