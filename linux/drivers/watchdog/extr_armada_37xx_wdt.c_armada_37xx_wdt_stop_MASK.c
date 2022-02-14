
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct armada_37xx_watchdog {int cpu_misc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct armada_37xx_watchdog*,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 struct armada_37xx_watchdog* FUNC_2 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_3(struct watchdog_device *VAR_3)
{
 struct armada_37xx_watchdog *VAR_4 = FUNC_2(VAR_3);

 FUNC_0(VAR_4, VAR_1);
 FUNC_0(VAR_4, VAR_0);
 FUNC_1(VAR_4->cpu_misc, VAR_2, 0);

 return 0;
}
