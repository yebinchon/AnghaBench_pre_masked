
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct pids_cgroup {scalar_t__ limit; } ;
struct cgroup_subsys_state {int dummy; } ;
typedef scalar_t__ int64_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct pids_cgroup* FUNC_0 (struct cgroup_subsys_state*) ;
 struct cgroup_subsys_state* FUNC_1 (struct seq_file*) ;
 int FUNC_2 (struct seq_file*,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_2, void *VAR_3)
{
 struct cgroup_subsys_state *VAR_4 = FUNC_1(VAR_2);
 struct pids_cgroup *VAR_5 = FUNC_0(VAR_4);
 int64_t VAR_6 = VAR_5->limit;

 if (VAR_6 >= VAR_0)
  FUNC_2(VAR_2, "%s\n", VAR_1);
 else
  FUNC_2(VAR_2, "%lld\n", VAR_6);

 return 0;
}
