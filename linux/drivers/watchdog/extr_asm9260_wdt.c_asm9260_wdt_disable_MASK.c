
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct asm9260_wdt_priv {int rst; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct asm9260_wdt_priv* FUNC_2 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_3(struct watchdog_device *VAR_0)
{
 struct asm9260_wdt_priv *VAR_1 = FUNC_2(VAR_0);


 FUNC_0(VAR_1->rst);
 FUNC_1(VAR_1->rst);

 return 0;
}
