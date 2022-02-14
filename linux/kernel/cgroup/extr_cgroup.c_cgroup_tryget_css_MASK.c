
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup_subsys_state {int dummy; } ;
struct cgroup_subsys {int dummy; } ;
struct cgroup {int dummy; } ;


 struct cgroup_subsys_state* FUNC_0 (struct cgroup*,struct cgroup_subsys*) ;
 int FUNC_1 (struct cgroup_subsys_state*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static struct cgroup_subsys_state *FUNC_4(struct cgroup *VAR_0,
           struct cgroup_subsys *VAR_1)
{
 struct cgroup_subsys_state *VAR_2;

 FUNC_2();
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 && !FUNC_1(VAR_2))
  VAR_2 = ((void*)0);
 FUNC_3();

 return VAR_2;
}
