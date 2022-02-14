
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdmacg_device {int dummy; } ;
struct rdma_cgroup {int css; } ;
typedef enum rdmacg_resource_type { ____Placeholder_rdmacg_resource_type } rdmacg_resource_type ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct rdma_cgroup* FUNC_3 (struct rdma_cgroup*) ;
 int VAR_0 ;
 int FUNC_4 (struct rdma_cgroup*,struct rdmacg_device*,int) ;

__attribute__((used)) static void FUNC_5(struct rdma_cgroup *VAR_1,
         struct rdmacg_device *VAR_2,
         struct rdma_cgroup *VAR_3,
         enum rdmacg_resource_type VAR_4)
{
 struct rdma_cgroup *VAR_5;

 FUNC_1(&VAR_0);

 for (VAR_5 = VAR_1; VAR_5 != VAR_3; VAR_5 = FUNC_3(VAR_5))
  FUNC_4(VAR_5, VAR_2, VAR_4);

 FUNC_2(&VAR_0);

 FUNC_0(&VAR_1->css);
}
