
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct s3c2410_wdt {int lock; scalar_t__ reg_base; int count; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct s3c2410_wdt* FUNC_2 (struct watchdog_device*) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct watchdog_device *VAR_1)
{
 struct s3c2410_wdt *VAR_2 = FUNC_2(VAR_1);

 FUNC_0(&VAR_2->lock);
 FUNC_3(VAR_2->count, VAR_2->reg_base + VAR_0);
 FUNC_1(&VAR_2->lock);

 return 0;
}
