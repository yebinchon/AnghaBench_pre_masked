
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmpmasks {int delmask; int addmask; int new_cpus; } ;
struct cpuset {int subparts_cpus; int effective_cpus; int cpus_allowed; } ;
typedef int cpumask_var_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static inline int FUNC_2(struct cpuset *VAR_2, struct tmpmasks *VAR_3)
{
 cpumask_var_t *VAR_4, *VAR_5, *VAR_6;

 if (VAR_2) {
  VAR_4 = &VAR_2->cpus_allowed;
  VAR_5 = &VAR_2->effective_cpus;
  VAR_6 = &VAR_2->subparts_cpus;
 } else {
  VAR_4 = &VAR_3->new_cpus;
  VAR_5 = &VAR_3->addmask;
  VAR_6 = &VAR_3->delmask;
 }

 if (!FUNC_1(VAR_4, VAR_1))
  return -VAR_0;

 if (!FUNC_1(VAR_5, VAR_1))
  goto free_one;

 if (!FUNC_1(VAR_6, VAR_1))
  goto free_two;

 return 0;

free_two:
 FUNC_0(*VAR_5);
free_one:
 FUNC_0(*VAR_4);
 return -VAR_0;
}
