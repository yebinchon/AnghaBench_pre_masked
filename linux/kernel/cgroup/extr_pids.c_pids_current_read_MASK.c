
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pids_cgroup {int counter; } ;
struct cgroup_subsys_state {int dummy; } ;
struct cftype {int dummy; } ;
typedef int s64 ;


 int FUNC_0 (int *) ;
 struct pids_cgroup* FUNC_1 (struct cgroup_subsys_state*) ;

__attribute__((used)) static s64 FUNC_2(struct cgroup_subsys_state *VAR_0,
        struct cftype *VAR_1)
{
 struct pids_cgroup *VAR_2 = FUNC_1(VAR_0);

 return FUNC_0(&VAR_2->counter);
}
