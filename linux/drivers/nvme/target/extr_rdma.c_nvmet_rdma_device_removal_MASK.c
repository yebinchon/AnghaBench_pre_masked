
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_cm_id {struct nvmet_port* context; } ;
struct nvmet_rdma_queue {int dummy; } ;
struct nvmet_port {int priv; } ;


 struct rdma_cm_id* FUNC_0 (int *,int *) ;

__attribute__((used)) static int FUNC_1(struct rdma_cm_id *VAR_0,
  struct nvmet_rdma_queue *VAR_1)
{
 struct nvmet_port *VAR_2;

 if (VAR_1) {





  return 0;
 }

 VAR_2 = VAR_0->context;







 if (FUNC_0(&VAR_2->priv, ((void*)0)) != VAR_0)
  return 0;





 return 1;
}
