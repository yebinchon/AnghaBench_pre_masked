
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_cm_id {int dummy; } ;
struct nvmet_port {int priv; } ;


 int FUNC_0 (struct rdma_cm_id*) ;
 struct rdma_cm_id* FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct nvmet_port *VAR_0)
{
 struct rdma_cm_id *VAR_1 = FUNC_1(&VAR_0->priv, ((void*)0));

 if (VAR_1)
  FUNC_0(VAR_1);
}
