
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu_probe_info {int (* init ) (struct arm_pmu*) ;unsigned int mask; unsigned int cpuid; } ;
struct arm_pmu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 () ;
 unsigned int FUNC_3 () ;
 int FUNC_4 (struct arm_pmu*) ;

__attribute__((used)) static int FUNC_5(struct arm_pmu *VAR_1,
        const struct pmu_probe_info *VAR_2)
{
 int VAR_3 = FUNC_0();
 unsigned int VAR_4 = FUNC_3();
 int VAR_5 = -VAR_0;

 FUNC_1("probing PMU on CPU %d\n", VAR_3);

 for (; VAR_2->init != ((void*)0); VAR_2++) {
  if ((VAR_4 & VAR_2->mask) != VAR_2->cpuid)
   continue;
  VAR_5 = VAR_2->init(VAR_1);
  break;
 }

 FUNC_2();
 return VAR_5;
}
