
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup_subsys_state {int dummy; } ;
struct rdma_cgroup {struct cgroup_subsys_state css; int rpools; } ;


 int VAR_0 ;
 struct cgroup_subsys_state* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 struct rdma_cgroup* FUNC_2 (int,int ) ;

__attribute__((used)) static struct cgroup_subsys_state *
FUNC_3(struct cgroup_subsys_state *VAR_2)
{
 struct rdma_cgroup *VAR_3;

 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return FUNC_0(-VAR_0);

 FUNC_1(&VAR_3->rpools);
 return &VAR_3->css;
}
