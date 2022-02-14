
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct bcm_kona_wdt {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int,struct bcm_kona_wdt*) ;
 int FUNC_1 (struct bcm_kona_wdt*,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct bcm_kona_wdt* FUNC_4 (struct watchdog_device*) ;

__attribute__((used)) static unsigned int FUNC_5(struct watchdog_device *VAR_2)
{
 struct bcm_kona_wdt *VAR_3 = FUNC_4(VAR_2);
 int VAR_4;
 unsigned long VAR_5;

 FUNC_2(&VAR_3->lock, VAR_5);
 VAR_4 = FUNC_1(VAR_3, VAR_1);
 FUNC_3(&VAR_3->lock, VAR_5);

 if (VAR_4 < 0)
  return VAR_4;

 return FUNC_0(VAR_4 & VAR_0, VAR_3);
}
