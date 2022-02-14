
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup_subsys_state {int dummy; } ;
struct pids_cgroup {struct cgroup_subsys_state css; int events_limit; int counter; int limit; } ;


 int VAR_0 ;
 struct cgroup_subsys_state* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 struct pids_cgroup* FUNC_2 (int,int ) ;

__attribute__((used)) static struct cgroup_subsys_state *
FUNC_3(struct cgroup_subsys_state *VAR_3)
{
 struct pids_cgroup *VAR_4;

 VAR_4 = FUNC_2(sizeof(struct pids_cgroup), VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 VAR_4->limit = VAR_2;
 FUNC_1(&VAR_4->counter, 0);
 FUNC_1(&VAR_4->events_limit, 0);
 return &VAR_4->css;
}
