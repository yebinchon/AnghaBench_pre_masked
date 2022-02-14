
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rdmacg_resource_pool {int usage_sum; TYPE_1__* resources; } ;
struct rdmacg_device {int dummy; } ;
struct rdma_cgroup {int dummy; } ;
typedef scalar_t__ s64 ;
typedef enum rdmacg_resource_type { ____Placeholder_rdmacg_resource_type } rdmacg_resource_type ;
struct TYPE_2__ {scalar_t__ usage; scalar_t__ max; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct rdmacg_resource_pool*) ;
 int FUNC_1 (struct rdmacg_resource_pool*) ;
 int VAR_2 ;
 struct rdmacg_resource_pool* FUNC_2 (struct rdma_cgroup*,struct rdmacg_device*) ;
 struct rdma_cgroup* FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct rdma_cgroup* FUNC_6 (struct rdma_cgroup*) ;
 int VAR_3 ;
 int FUNC_7 (struct rdma_cgroup*,struct rdmacg_device*,struct rdma_cgroup*,int) ;

int FUNC_8(struct rdma_cgroup **VAR_4,
        struct rdmacg_device *VAR_5,
        enum rdmacg_resource_type VAR_6)
{
 struct rdma_cgroup *VAR_7, *VAR_8;
 struct rdmacg_resource_pool *VAR_9;
 s64 VAR_10;
 int VAR_11 = 0;

 if (VAR_6 >= VAR_2)
  return -VAR_1;





 VAR_7 = FUNC_3();

 FUNC_4(&VAR_3);
 for (VAR_8 = VAR_7; VAR_8; VAR_8 = FUNC_6(VAR_8)) {
  VAR_9 = FUNC_2(VAR_8, VAR_5);
  if (FUNC_0(VAR_9)) {
   VAR_11 = FUNC_1(VAR_9);
   goto err;
  } else {
   VAR_10 = VAR_9->resources[VAR_6].usage + 1;
   if (VAR_10 > VAR_9->resources[VAR_6].max) {
    VAR_11 = -VAR_0;
    goto err;
   } else {
    VAR_9->resources[VAR_6].usage = VAR_10;
    VAR_9->usage_sum++;
   }
  }
 }
 FUNC_5(&VAR_3);

 *VAR_4 = VAR_7;
 return 0;

err:
 FUNC_5(&VAR_3);
 FUNC_7(VAR_7, VAR_5, VAR_8, VAR_6);
 return VAR_11;
}
