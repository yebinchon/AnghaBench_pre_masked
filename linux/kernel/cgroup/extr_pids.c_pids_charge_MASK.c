
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pids_cgroup {int counter; } ;


 int FUNC_0 (int,int *) ;
 struct pids_cgroup* FUNC_1 (struct pids_cgroup*) ;

__attribute__((used)) static void FUNC_2(struct pids_cgroup *VAR_0, int VAR_1)
{
 struct pids_cgroup *VAR_2;

 for (VAR_2 = VAR_0; FUNC_1(VAR_2); VAR_2 = FUNC_1(VAR_2))
  FUNC_0(VAR_1, &VAR_2->counter);
}
