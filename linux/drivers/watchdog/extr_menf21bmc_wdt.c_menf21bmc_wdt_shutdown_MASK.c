
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct menf21bmc_wdt {int i2c_client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 struct menf21bmc_wdt* FUNC_1 (struct platform_device*) ;

__attribute__((used)) static void FUNC_2(struct platform_device *VAR_2)
{
 struct menf21bmc_wdt *VAR_3 = FUNC_1(VAR_2);

 FUNC_0(VAR_3->i2c_client,
      VAR_0, VAR_1);
}
