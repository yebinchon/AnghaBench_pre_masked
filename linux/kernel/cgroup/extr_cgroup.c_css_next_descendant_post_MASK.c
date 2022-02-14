
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup_subsys_state {struct cgroup_subsys_state* parent; } ;


 int FUNC_0 () ;
 struct cgroup_subsys_state* FUNC_1 (struct cgroup_subsys_state*) ;
 struct cgroup_subsys_state* FUNC_2 (struct cgroup_subsys_state*,struct cgroup_subsys_state*) ;

struct cgroup_subsys_state *
FUNC_3(struct cgroup_subsys_state *VAR_0,
    struct cgroup_subsys_state *VAR_1)
{
 struct cgroup_subsys_state *VAR_2;

 FUNC_0();


 if (!VAR_0)
  return FUNC_1(VAR_1);


 if (VAR_0 == VAR_1)
  return ((void*)0);


 VAR_2 = FUNC_2(VAR_0, VAR_0->parent);
 if (VAR_2)
  return FUNC_1(VAR_2);


 return VAR_0->parent;
}
