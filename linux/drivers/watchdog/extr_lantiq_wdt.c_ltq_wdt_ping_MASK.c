
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct watchdog_device {int timeout; } ;
struct ltq_wdt_priv {int clk_rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ltq_wdt_priv* FUNC_0 (struct watchdog_device*) ;
 int FUNC_1 (struct ltq_wdt_priv*,int,int,int ) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_5)
{
 struct ltq_wdt_priv *VAR_6 = FUNC_0(VAR_5);
 u32 VAR_7;

 VAR_7 = VAR_5->timeout * VAR_6->clk_rate;

 FUNC_1(VAR_6, VAR_4, VAR_2, VAR_0);

 FUNC_1(VAR_6, VAR_4 | VAR_1,
       VAR_3 | VAR_7, VAR_0);

 return 0;
}
