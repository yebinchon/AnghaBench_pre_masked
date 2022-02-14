
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup_subsys_state {int dummy; } ;
struct freezer {struct cgroup_subsys_state css; } ;


 int VAR_0 ;
 struct cgroup_subsys_state* FUNC_0 (int ) ;
 int VAR_1 ;
 struct freezer* FUNC_1 (int,int ) ;

__attribute__((used)) static struct cgroup_subsys_state *
FUNC_2(struct cgroup_subsys_state *VAR_2)
{
 struct freezer *VAR_3;

 VAR_3 = FUNC_1(sizeof(struct freezer), VAR_1);
 if (!VAR_3)
  return FUNC_0(-VAR_0);

 return &VAR_3->css;
}
