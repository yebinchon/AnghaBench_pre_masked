
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cgroup_subsys_state {int dummy; } ;
struct cgroup_subsys {size_t id; } ;
struct cgroup {int dummy; } ;
struct TYPE_2__ {struct cgroup_subsys_state** subsys; } ;


 struct cgroup_subsys_state* FUNC_0 (struct cgroup*,struct cgroup_subsys*) ;
 struct cgroup* FUNC_1 (struct cgroup*) ;
 TYPE_1__ VAR_0 ;

struct cgroup_subsys_state *FUNC_2(struct cgroup *VAR_1,
      struct cgroup_subsys *VAR_2)
{
 struct cgroup_subsys_state *VAR_3;

 do {
  VAR_3 = FUNC_0(VAR_1, VAR_2);

  if (VAR_3)
   return VAR_3;
  VAR_1 = FUNC_1(VAR_1);
 } while (VAR_1);

 return VAR_0.subsys[VAR_2->id];
}
