
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pids_cgroup {scalar_t__ limit; int counter; } ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int *) ;
 struct pids_cgroup* FUNC_1 (struct pids_cgroup*) ;
 int FUNC_2 (struct pids_cgroup*,int) ;

__attribute__((used)) static int FUNC_3(struct pids_cgroup *VAR_1, int VAR_2)
{
 struct pids_cgroup *VAR_3, *VAR_4;

 for (VAR_3 = VAR_1; FUNC_1(VAR_3); VAR_3 = FUNC_1(VAR_3)) {
  int64_t VAR_5 = FUNC_0(VAR_2, &VAR_3->counter);






  if (VAR_5 > VAR_3->limit)
   goto revert;
 }

 return 0;

revert:
 for (VAR_4 = VAR_1; VAR_4 != VAR_3; VAR_4 = FUNC_1(VAR_4))
  FUNC_2(VAR_4, VAR_2);
 FUNC_2(VAR_3, VAR_2);

 return -VAR_0;
}
