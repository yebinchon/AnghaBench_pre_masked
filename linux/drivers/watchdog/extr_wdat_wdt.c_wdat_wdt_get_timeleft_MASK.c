
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wdat_wdt {int period; } ;
struct watchdog_device {int dummy; } ;


 int VAR_0 ;
 struct wdat_wdt* FUNC_0 (struct watchdog_device*) ;
 int FUNC_1 (struct wdat_wdt*,int ,int ,int*) ;

__attribute__((used)) static unsigned int FUNC_2(struct watchdog_device *VAR_1)
{
 struct wdat_wdt *VAR_2 = FUNC_0(VAR_1);
 u32 VAR_3 = 0;

 FUNC_1(VAR_2, VAR_0, 0, &VAR_3);
 return VAR_3 * VAR_2->period / 1000;
}
