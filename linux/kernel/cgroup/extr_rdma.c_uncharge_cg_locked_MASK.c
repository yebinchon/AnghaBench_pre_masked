
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rdmacg_resource_pool {scalar_t__ usage_sum; scalar_t__ num_max_cnt; TYPE_1__* resources; } ;
struct rdmacg_device {int dummy; } ;
struct rdma_cgroup {int dummy; } ;
typedef enum rdmacg_resource_type { ____Placeholder_rdmacg_resource_type } rdmacg_resource_type ;
struct TYPE_2__ {scalar_t__ usage; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 struct rdmacg_resource_pool* FUNC_1 (struct rdma_cgroup*,struct rdmacg_device*) ;
 int FUNC_2 (struct rdmacg_resource_pool*) ;
 int FUNC_3 (char*,struct rdma_cgroup*,struct rdmacg_device*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(struct rdma_cgroup *VAR_1,
     struct rdmacg_device *VAR_2,
     enum rdmacg_resource_type VAR_3)
{
 struct rdmacg_resource_pool *VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_2);






 if (FUNC_4(!VAR_4)) {
  FUNC_3("Invalid device %p or rdma cgroup %p\n", VAR_1, VAR_2);
  return;
 }

 VAR_4->resources[VAR_3].usage--;





 FUNC_0(VAR_4->resources[VAR_3].usage < 0);
 VAR_4->usage_sum--;
 if (VAR_4->usage_sum == 0 &&
     VAR_4->num_max_cnt == VAR_0) {




  FUNC_2(VAR_4);
 }
}
