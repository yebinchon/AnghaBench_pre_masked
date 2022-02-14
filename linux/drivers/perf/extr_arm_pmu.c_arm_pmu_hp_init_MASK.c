
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int FUNC_2(void)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0,
          "perf/arm/pmu:starting",
          VAR_1,
          VAR_2);
 if (VAR_3)
  FUNC_1("CPU hotplug notifier for ARM PMU could not be registered: %d\n",
         VAR_3);
 return VAR_3;
}
