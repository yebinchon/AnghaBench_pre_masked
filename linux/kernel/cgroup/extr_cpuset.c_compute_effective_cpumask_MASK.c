
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuset {struct cpumask* effective_cpus; struct cpumask* cpus_allowed; int subparts_cpus; scalar_t__ nr_subparts_cpus; } ;
struct cpumask {int dummy; } ;


 struct cpumask* VAR_0 ;
 int FUNC_0 (struct cpumask*,struct cpumask*,struct cpumask*) ;
 int FUNC_1 (struct cpumask*,struct cpumask*,int ) ;

__attribute__((used)) static void FUNC_2(struct cpumask *VAR_1,
          struct cpuset *VAR_2, struct cpuset *VAR_3)
{
 if (VAR_3->nr_subparts_cpus) {
  FUNC_1(VAR_1, VAR_3->effective_cpus,
      VAR_3->subparts_cpus);
  FUNC_0(VAR_1, VAR_1, VAR_2->cpus_allowed);
  FUNC_0(VAR_1, VAR_1, VAR_0);
 } else {
  FUNC_0(VAR_1, VAR_2->cpus_allowed, VAR_3->effective_cpus);
 }
}
