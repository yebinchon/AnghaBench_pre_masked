
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup_subsys_state {int dummy; } ;
struct cgroup_subsys {size_t id; } ;
struct cgroup {struct cgroup_subsys_state self; int * subsys; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct cgroup_subsys_state* FUNC_1 (int ,int ) ;

__attribute__((used)) static struct cgroup_subsys_state *FUNC_2(struct cgroup *VAR_1,
           struct cgroup_subsys *VAR_2)
{
 if (VAR_2)
  return FUNC_1(VAR_1->subsys[VAR_2->id],
     FUNC_0(&VAR_0));
 else
  return &VAR_1->self;
}
