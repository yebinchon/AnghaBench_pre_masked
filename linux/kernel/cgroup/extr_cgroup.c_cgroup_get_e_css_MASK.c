
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
 int FUNC_2 (struct cgroup_subsys_state*) ;
 scalar_t__ FUNC_3 (struct cgroup_subsys_state*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_4 () ;
 int FUNC_5 () ;

struct cgroup_subsys_state *FUNC_6(struct cgroup *VAR_1,
          struct cgroup_subsys *VAR_2)
{
 struct cgroup_subsys_state *VAR_3;

 FUNC_4();

 do {
  VAR_3 = FUNC_0(VAR_1, VAR_2);

  if (VAR_3 && FUNC_3(VAR_3))
   goto out_unlock;
  VAR_1 = FUNC_1(VAR_1);
 } while (VAR_1);

 VAR_3 = VAR_0.subsys[VAR_2->id];
 FUNC_2(VAR_3);
out_unlock:
 FUNC_5();
 return VAR_3;
}
