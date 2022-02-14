
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct watchdog_device {unsigned int timeout; } ;
struct imx7ulp_wdt_device {scalar_t__ base; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct imx7ulp_wdt_device* FUNC_0 (struct watchdog_device*) ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_4,
       unsigned int VAR_5)
{
 struct imx7ulp_wdt_device *VAR_6 = FUNC_0(VAR_4);
 u32 VAR_7 = VAR_1 * VAR_5;

 FUNC_1(VAR_0, VAR_6->base + VAR_2);
 FUNC_1(VAR_7, VAR_6->base + VAR_3);

 VAR_4->timeout = VAR_5;

 return 0;
}
