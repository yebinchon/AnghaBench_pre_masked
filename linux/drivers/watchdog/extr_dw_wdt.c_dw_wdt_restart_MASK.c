
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct dw_wdt {scalar_t__ regs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct dw_wdt*) ;
 scalar_t__ FUNC_1 (struct dw_wdt*) ;
 int FUNC_2 (int) ;
 struct dw_wdt* FUNC_3 (struct watchdog_device*) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct watchdog_device *VAR_3,
     unsigned long VAR_4, void *VAR_5)
{
 struct dw_wdt *VAR_6 = FUNC_3(VAR_3);

 FUNC_4(0, VAR_6->regs + VAR_2);
 if (FUNC_1(VAR_6))
  FUNC_4(VAR_0,
         VAR_6->regs + VAR_1);
 else
  FUNC_0(VAR_6);


 FUNC_2(500);

 return 0;
}
