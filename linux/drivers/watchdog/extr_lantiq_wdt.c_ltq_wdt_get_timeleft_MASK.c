
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct watchdog_device {int dummy; } ;
struct ltq_wdt_priv {int clk_rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int,int ) ;
 struct ltq_wdt_priv* FUNC_1 (struct watchdog_device*) ;
 int FUNC_2 (struct ltq_wdt_priv*,int ) ;

__attribute__((used)) static unsigned int FUNC_3(struct watchdog_device *VAR_2)
{
 struct ltq_wdt_priv *VAR_3 = FUNC_1(VAR_2);
 u64 VAR_4;

 VAR_4 = FUNC_2(VAR_3, VAR_0) & VAR_1;
 return FUNC_0(VAR_4, VAR_3->clk_rate);
}
