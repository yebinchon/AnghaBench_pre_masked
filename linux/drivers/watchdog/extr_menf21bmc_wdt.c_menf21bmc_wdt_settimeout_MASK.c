
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {unsigned int timeout; } ;
struct menf21bmc_wdt {int i2c_client; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,unsigned int) ;
 struct menf21bmc_wdt* FUNC_1 (struct watchdog_device*) ;

__attribute__((used)) static int
FUNC_2(struct watchdog_device *VAR_1, unsigned int VAR_2)
{
 int VAR_3;
 struct menf21bmc_wdt *VAR_4 = FUNC_1(VAR_1);






 VAR_3 = FUNC_0(VAR_4->i2c_client,
     VAR_0, VAR_2 * 10);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_1->timeout = VAR_2;

 return 0;
}
