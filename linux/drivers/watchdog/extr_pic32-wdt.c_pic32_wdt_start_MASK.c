
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct pic32_wdt {scalar_t__ regs; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct pic32_wdt*) ;
 struct pic32_wdt* FUNC_2 (struct watchdog_device*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct watchdog_device *VAR_2)
{
 struct pic32_wdt *VAR_3 = FUNC_2(VAR_2);

 FUNC_3(VAR_0, FUNC_0(VAR_3->regs + VAR_1));
 FUNC_1(VAR_3);

 return 0;
}
