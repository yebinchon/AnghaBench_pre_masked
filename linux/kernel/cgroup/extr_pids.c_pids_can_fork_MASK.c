
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct pids_cgroup {int events_file; int events_limit; } ;
struct cgroup_subsys_state {int cgroup; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct pids_cgroup* FUNC_2 (struct cgroup_subsys_state*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct pids_cgroup*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 struct cgroup_subsys_state* FUNC_7 (int ,int ,int) ;

__attribute__((used)) static int FUNC_8(struct task_struct *VAR_2)
{
 struct cgroup_subsys_state *VAR_3;
 struct pids_cgroup *VAR_4;
 int VAR_5;

 VAR_3 = FUNC_7(VAR_0, VAR_1, 1);
 VAR_4 = FUNC_2(VAR_3);
 VAR_5 = FUNC_3(VAR_4, 1);
 if (VAR_5) {

  if (FUNC_0(&VAR_4->events_limit) == 1) {
   FUNC_6("cgroup: fork rejected by pids controller in ");
   FUNC_5(VAR_3->cgroup);
   FUNC_4("\n");
  }
  FUNC_1(&VAR_4->events_file);
 }
 return VAR_5;
}
