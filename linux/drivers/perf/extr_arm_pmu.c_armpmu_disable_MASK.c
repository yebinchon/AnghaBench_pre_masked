
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu {int dummy; } ;
struct arm_pmu {int (* stop ) (struct arm_pmu*) ;int supported_cpus; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (struct arm_pmu*) ;
 struct arm_pmu* FUNC_3 (struct pmu*) ;

__attribute__((used)) static void FUNC_4(struct pmu *VAR_0)
{
 struct arm_pmu *VAR_1 = FUNC_3(VAR_0);


 if (!FUNC_0(FUNC_1(), &VAR_1->supported_cpus))
  return;

 VAR_1->stop(VAR_1);
}
