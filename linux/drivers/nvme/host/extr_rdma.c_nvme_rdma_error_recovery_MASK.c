
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_rdma_ctrl {int err_work; int ctrl; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct nvme_rdma_ctrl *VAR_2)
{
 if (!FUNC_0(&VAR_2->ctrl, VAR_0))
  return;

 FUNC_1(VAR_1, &VAR_2->err_work);
}
