
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cgroup_taskset {int dummy; } ;
struct cgroup_subsys_state {int dummy; } ;
struct TYPE_2__ {int attach_in_progress; } ;


 int FUNC_0 (struct cgroup_taskset*,struct cgroup_subsys_state**) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (struct cgroup_subsys_state*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct cgroup_taskset *VAR_1)
{
 struct cgroup_subsys_state *VAR_2;

 FUNC_0(VAR_1, &VAR_2);

 FUNC_2(&VAR_0);
 FUNC_1(VAR_2)->attach_in_progress--;
 FUNC_3(&VAR_0);
}
