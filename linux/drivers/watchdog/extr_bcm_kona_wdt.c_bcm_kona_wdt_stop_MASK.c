
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct bcm_kona_wdt {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bcm_kona_wdt*,int,int ) ;
 struct bcm_kona_wdt* FUNC_1 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_2)
{
 struct bcm_kona_wdt *VAR_3 = FUNC_1(VAR_2);

 return FUNC_0(VAR_3, VAR_0 |
         VAR_1, 0);
}
