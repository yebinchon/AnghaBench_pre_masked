
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct s3c2410_wdt {int lock; } ;


 int FUNC_0 (struct s3c2410_wdt*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct s3c2410_wdt* FUNC_3 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_4(struct watchdog_device *VAR_0)
{
 struct s3c2410_wdt *VAR_1 = FUNC_3(VAR_0);

 FUNC_1(&VAR_1->lock);
 FUNC_0(VAR_1);
 FUNC_2(&VAR_1->lock);

 return 0;
}
