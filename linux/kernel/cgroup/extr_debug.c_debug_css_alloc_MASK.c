
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup_subsys_state {int dummy; } ;


 int VAR_0 ;
 struct cgroup_subsys_state* FUNC_0 (int ) ;
 int VAR_1 ;
 struct cgroup_subsys_state* FUNC_1 (int,int ) ;

__attribute__((used)) static struct cgroup_subsys_state *
FUNC_2(struct cgroup_subsys_state *VAR_2)
{
 struct cgroup_subsys_state *VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_1);

 if (!VAR_3)
  return FUNC_0(-VAR_0);

 return VAR_3;
}
