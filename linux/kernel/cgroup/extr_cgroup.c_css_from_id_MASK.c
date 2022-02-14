
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup_subsys_state {int dummy; } ;
struct cgroup_subsys {int css_idr; } ;


 int FUNC_0 (int) ;
 struct cgroup_subsys_state* FUNC_1 (int *,int) ;
 int FUNC_2 () ;

struct cgroup_subsys_state *FUNC_3(int VAR_0, struct cgroup_subsys *VAR_1)
{
 FUNC_0(!FUNC_2());
 return FUNC_1(&VAR_1->css_idr, VAR_0);
}
