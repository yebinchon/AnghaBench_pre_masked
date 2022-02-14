
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,int ,int *) ;

__attribute__((used)) static int FUNC_3(void)
{
 int VAR_3;

 if (VAR_1)
  return 0;

 FUNC_1();

 VAR_3 = FUNC_0();
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_2(VAR_0,
    "perf/arm/pmu_acpi:starting",
    VAR_2, ((void*)0));

 return VAR_3;
}
