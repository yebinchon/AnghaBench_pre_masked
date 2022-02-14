
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idle_inject_device {int idle_duration_us; int run_duration_us; } ;


 unsigned int FUNC_0 (int ) ;

void FUNC_1(struct idle_inject_device *VAR_0,
         unsigned int *VAR_1,
         unsigned int *VAR_2)
{
 *VAR_1 = FUNC_0(VAR_0->run_duration_us);
 *VAR_2 = FUNC_0(VAR_0->idle_duration_us);
}
