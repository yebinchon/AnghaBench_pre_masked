
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct pids_cgroup {int dummy; } ;
struct cgroup_subsys_state {int dummy; } ;


 struct pids_cgroup* FUNC_0 (struct cgroup_subsys_state*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct pids_cgroup*,int) ;
 struct cgroup_subsys_state* FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct task_struct *VAR_2)
{
 struct cgroup_subsys_state *VAR_3;
 struct pids_cgroup *VAR_4;

 VAR_3 = FUNC_2(VAR_0, VAR_1, 1);
 VAR_4 = FUNC_0(VAR_3);
 FUNC_1(VAR_4, 1);
}
