
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_rdma_device {int dummy; } ;
struct nvmet_rdma_cmd {int dummy; } ;


 int VAR_0 ;
 struct nvmet_rdma_cmd* FUNC_0 (int) ;
 int VAR_1 ;
 struct nvmet_rdma_cmd* FUNC_1 (int,int,int ) ;
 int FUNC_2 (struct nvmet_rdma_cmd*) ;
 int FUNC_3 (struct nvmet_rdma_device*,struct nvmet_rdma_cmd*,int) ;
 int FUNC_4 (struct nvmet_rdma_device*,struct nvmet_rdma_cmd*,int) ;

__attribute__((used)) static struct nvmet_rdma_cmd *
FUNC_5(struct nvmet_rdma_device *VAR_2,
  int VAR_3, bool VAR_4)
{
 struct nvmet_rdma_cmd *VAR_5;
 int VAR_6 = -VAR_0, VAR_7;

 VAR_5 = FUNC_1(VAR_3, sizeof(struct nvmet_rdma_cmd), VAR_1);
 if (!VAR_5)
  goto out;

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  VAR_6 = FUNC_3(VAR_2, VAR_5 + VAR_7, VAR_4);
  if (VAR_6)
   goto out_free;
 }

 return VAR_5;

out_free:
 while (--VAR_7 >= 0)
  FUNC_4(VAR_2, VAR_5 + VAR_7, VAR_4);
 FUNC_2(VAR_5);
out:
 return FUNC_0(VAR_6);
}
