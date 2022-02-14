
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cgroup_subsys_state {int dummy; } ;
struct cpuset {int relax_domain_level; struct cgroup_subsys_state css; int fmeter; int effective_mems; int mems_allowed; int flags; } ;
struct TYPE_2__ {struct cgroup_subsys_state css; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cgroup_subsys_state* FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct cpuset*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct cpuset*) ;
 struct cpuset* FUNC_4 (int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static struct cgroup_subsys_state *
FUNC_7(struct cgroup_subsys_state *VAR_4)
{
 struct cpuset *VAR_5;

 if (!VAR_4)
  return &VAR_3.css;

 VAR_5 = FUNC_4(sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return FUNC_0(-VAR_1);

 if (FUNC_1(VAR_5, ((void*)0))) {
  FUNC_3(VAR_5);
  return FUNC_0(-VAR_1);
 }

 FUNC_6(VAR_0, &VAR_5->flags);
 FUNC_5(VAR_5->mems_allowed);
 FUNC_5(VAR_5->effective_mems);
 FUNC_2(&VAR_5->fmeter);
 VAR_5->relax_domain_level = -1;

 return &VAR_5->css;
}
