
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmpmasks {int delmask; int addmask; int new_cpus; } ;
struct cpuset {int subparts_cpus; int effective_cpus; int cpus_allowed; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct cpuset *VAR_0, struct tmpmasks *VAR_1)
{
 if (VAR_0) {
  FUNC_0(VAR_0->cpus_allowed);
  FUNC_0(VAR_0->effective_cpus);
  FUNC_0(VAR_0->subparts_cpus);
 }
 if (VAR_1) {
  FUNC_0(VAR_1->new_cpus);
  FUNC_0(VAR_1->addmask);
  FUNC_0(VAR_1->delmask);
 }
}
