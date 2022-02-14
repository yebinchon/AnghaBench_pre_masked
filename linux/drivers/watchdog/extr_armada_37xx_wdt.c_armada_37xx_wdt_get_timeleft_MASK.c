
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
struct watchdog_device {int dummy; } ;
struct armada_37xx_watchdog {int clk_rate; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,int ) ;
 unsigned int FUNC_1 (struct armada_37xx_watchdog*,int ) ;
 struct armada_37xx_watchdog* FUNC_2 (struct watchdog_device*) ;

__attribute__((used)) static unsigned int FUNC_3(struct watchdog_device *VAR_2)
{
 struct armada_37xx_watchdog *VAR_3 = FUNC_2(VAR_2);
 u64 VAR_4;

 VAR_4 = FUNC_1(VAR_3, VAR_1) * VAR_0;
 FUNC_0(VAR_4, VAR_3->clk_rate);

 return VAR_4;
}
