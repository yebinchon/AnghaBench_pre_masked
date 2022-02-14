
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdmacg_device {int dummy; } ;
struct rdma_cgroup {int dummy; } ;
typedef enum rdmacg_resource_type { ____Placeholder_rdmacg_resource_type } rdmacg_resource_type ;


 int VAR_0 ;
 int FUNC_0 (struct rdma_cgroup*,struct rdmacg_device*,int *,int) ;

void FUNC_1(struct rdma_cgroup *VAR_1,
       struct rdmacg_device *VAR_2,
       enum rdmacg_resource_type VAR_3)
{
 if (VAR_3 >= VAR_0)
  return;

 FUNC_0(VAR_1, VAR_2, ((void*)0), VAR_3);
}
