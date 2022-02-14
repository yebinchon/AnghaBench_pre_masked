
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct sama5d4_wdt {int mr; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sama5d4_wdt* FUNC_0 (struct watchdog_device*) ;
 int FUNC_1 (struct sama5d4_wdt*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_2)
{
 struct sama5d4_wdt *VAR_3 = FUNC_0(VAR_2);

 VAR_3->mr &= ~VAR_1;
 FUNC_1(VAR_3, VAR_0, VAR_3->mr);

 return 0;
}
