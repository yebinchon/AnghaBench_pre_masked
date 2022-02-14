
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int timeout; } ;
struct bcm_kona_wdt {int dummy; } ;


 unsigned int FUNC_0 (int ,struct bcm_kona_wdt*) ;
 int VAR_0 ;
 int FUNC_1 (struct bcm_kona_wdt*,int ,unsigned int) ;
 struct bcm_kona_wdt* FUNC_2 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_3(struct watchdog_device *VAR_1,
     unsigned VAR_2)
{
 struct bcm_kona_wdt *VAR_3 = FUNC_2(VAR_1);

 return FUNC_1(VAR_3, VAR_0,
     FUNC_0(VAR_1->timeout, VAR_3) |
     VAR_2);
}
