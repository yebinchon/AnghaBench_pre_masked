
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdmacg_resource_pool {int dev_node; int cg_node; struct rdmacg_device* device; } ;
struct rdmacg_device {int rpools; } ;
struct rdma_cgroup {int rpools; } ;


 int VAR_0 ;
 struct rdmacg_resource_pool* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 struct rdmacg_resource_pool* FUNC_2 (struct rdma_cgroup*,struct rdmacg_device*) ;
 struct rdmacg_resource_pool* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct rdmacg_resource_pool*) ;

__attribute__((used)) static struct rdmacg_resource_pool *
FUNC_6(struct rdma_cgroup *VAR_2, struct rdmacg_device *VAR_3)
{
 struct rdmacg_resource_pool *VAR_4;

 VAR_4 = FUNC_2(VAR_2, VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 VAR_4->device = VAR_3;
 FUNC_5(VAR_4);

 FUNC_1(&VAR_4->cg_node);
 FUNC_1(&VAR_4->dev_node);
 FUNC_4(&VAR_4->cg_node, &VAR_2->rpools);
 FUNC_4(&VAR_4->dev_node, &VAR_3->rpools);
 return VAR_4;
}
