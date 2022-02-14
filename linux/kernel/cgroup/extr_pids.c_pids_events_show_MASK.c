
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct pids_cgroup {int events_limit; } ;
typedef int s64 ;


 scalar_t__ FUNC_0 (int *) ;
 struct pids_cgroup* FUNC_1 (int ) ;
 int FUNC_2 (struct seq_file*) ;
 int FUNC_3 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_0, void *VAR_1)
{
 struct pids_cgroup *VAR_2 = FUNC_1(FUNC_2(VAR_0));

 FUNC_3(VAR_0, "max %lld\n", (s64)FUNC_0(&VAR_2->events_limit));
 return 0;
}
