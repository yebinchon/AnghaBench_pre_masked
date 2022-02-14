
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
struct watchdog_device {unsigned int timeout; } ;
struct armada_37xx_watchdog {unsigned int timeout; scalar_t__ clk_rate; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,int ) ;
 struct armada_37xx_watchdog* FUNC_1 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_1,
           unsigned int VAR_2)
{
 struct armada_37xx_watchdog *VAR_3 = FUNC_1(VAR_1);

 VAR_1->timeout = VAR_2;






 VAR_3->timeout = (u64)VAR_3->clk_rate * VAR_2;
 FUNC_0(VAR_3->timeout, VAR_0);

 return 0;
}
