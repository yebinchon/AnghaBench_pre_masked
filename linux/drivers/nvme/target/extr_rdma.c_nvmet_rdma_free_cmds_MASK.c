
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_rdma_device {int dummy; } ;
struct nvmet_rdma_cmd {int dummy; } ;


 int FUNC_0 (struct nvmet_rdma_cmd*) ;
 int FUNC_1 (struct nvmet_rdma_device*,struct nvmet_rdma_cmd*,int) ;

__attribute__((used)) static void FUNC_2(struct nvmet_rdma_device *VAR_0,
  struct nvmet_rdma_cmd *VAR_1, int VAR_2, bool VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  FUNC_1(VAR_0, VAR_1 + VAR_4, VAR_3);
 FUNC_0(VAR_1);
}
