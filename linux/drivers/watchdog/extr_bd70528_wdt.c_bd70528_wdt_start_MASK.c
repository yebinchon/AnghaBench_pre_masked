
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wdtbd70528 {int dev; } ;
struct watchdog_device {int dummy; } ;


 int FUNC_0 (struct wdtbd70528*,int) ;
 int FUNC_1 (int ,char*) ;
 struct wdtbd70528* FUNC_2 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_3(struct watchdog_device *VAR_0)
{
 struct wdtbd70528 *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(VAR_1->dev, "WDT ping...\n");
 return FUNC_0(VAR_1, 1);
}
