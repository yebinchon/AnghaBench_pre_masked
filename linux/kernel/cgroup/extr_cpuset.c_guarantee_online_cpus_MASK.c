
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuset {int effective_cpus; } ;
struct cpumask {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cpumask*,int ,int ) ;
 int FUNC_1 (struct cpumask*,int ) ;
 int FUNC_2 (int ,int ) ;
 struct cpuset* FUNC_3 (struct cpuset*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct cpuset *VAR_1, struct cpumask *VAR_2)
{
 while (!FUNC_2(VAR_1->effective_cpus, VAR_0)) {
  VAR_1 = FUNC_3(VAR_1);
  if (FUNC_4(!VAR_1)) {







   FUNC_1(VAR_2, VAR_0);
   return;
  }
 }
 FUNC_0(VAR_2, VAR_1->effective_cpus, VAR_0);
}
