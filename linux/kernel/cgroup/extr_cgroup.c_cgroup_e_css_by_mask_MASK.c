
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup_subsys_state {int dummy; } ;
struct cgroup_subsys {int id; } ;
struct cgroup {struct cgroup_subsys_state self; } ;


 struct cgroup_subsys_state* FUNC_0 (struct cgroup*,struct cgroup_subsys*) ;
 int VAR_0 ;
 struct cgroup* FUNC_1 (struct cgroup*) ;
 int FUNC_2 (struct cgroup*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct cgroup_subsys_state *FUNC_4(struct cgroup *VAR_1,
       struct cgroup_subsys *VAR_2)
{
 FUNC_3(&VAR_0);

 if (!VAR_2)
  return &VAR_1->self;





 while (!(FUNC_2(VAR_1) & (1 << VAR_2->id))) {
  VAR_1 = FUNC_1(VAR_1);
  if (!VAR_1)
   return ((void*)0);
 }

 return FUNC_0(VAR_1, VAR_2);
}
