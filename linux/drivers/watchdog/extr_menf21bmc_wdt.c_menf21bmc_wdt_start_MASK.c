
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct menf21bmc_wdt {int i2c_client; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 struct menf21bmc_wdt* FUNC_1 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_1)
{
 struct menf21bmc_wdt *VAR_2 = FUNC_1(VAR_1);

 return FUNC_0(VAR_2->i2c_client, VAR_0);
}
