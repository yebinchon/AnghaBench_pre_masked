
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idle_inject_device {int timer; int cpumask; int run_duration_us; int idle_duration_us; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (struct idle_inject_device*) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int ) ;

int FUNC_7(struct idle_inject_device *VAR_3)
{
 unsigned int VAR_4 = FUNC_0(VAR_3->idle_duration_us);
 unsigned int VAR_5 = FUNC_0(VAR_3->run_duration_us);

 if (!VAR_4 || !VAR_5)
  return -VAR_0;

 FUNC_5("Starting injecting idle cycles on CPUs '%*pbl'\n",
   FUNC_1(FUNC_6(VAR_3->cpumask)));

 FUNC_3(VAR_3);

 FUNC_2(&VAR_3->timer,
        FUNC_4((VAR_4 + VAR_5) *
      VAR_2),
        VAR_1);

 return 0;
}
