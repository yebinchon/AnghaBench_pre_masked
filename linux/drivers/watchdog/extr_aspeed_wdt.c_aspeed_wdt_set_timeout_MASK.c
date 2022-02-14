
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct watchdog_device {unsigned int timeout; int max_hw_heartbeat_ms; } ;
struct aspeed_wdt {scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int,int) ;
 struct aspeed_wdt* FUNC_1 (struct watchdog_device*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct watchdog_device *VAR_4,
      unsigned int VAR_5)
{
 struct aspeed_wdt *VAR_6 = FUNC_1(VAR_4);
 u32 VAR_7;

 VAR_4->timeout = VAR_5;

 VAR_7 = FUNC_0(VAR_5, VAR_4->max_hw_heartbeat_ms * 1000);

 FUNC_2(VAR_7 * VAR_0, VAR_6->base + VAR_1);
 FUNC_2(VAR_3, VAR_6->base + VAR_2);

 return 0;
}
