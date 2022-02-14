
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct s3c2410_wdt {unsigned long count; int lock; scalar_t__ reg_base; int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct s3c2410_wdt*) ;
 int FUNC_1 (int ,char*,unsigned long,unsigned long) ;
 unsigned long FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct s3c2410_wdt* FUNC_5 (struct watchdog_device*) ;
 int FUNC_6 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct watchdog_device *VAR_8)
{
 unsigned long VAR_9;
 struct s3c2410_wdt *VAR_10 = FUNC_5(VAR_8);

 FUNC_3(&VAR_10->lock);

 FUNC_0(VAR_10);

 VAR_9 = FUNC_2(VAR_10->reg_base + VAR_1);
 VAR_9 |= VAR_3 | VAR_2;

 if (VAR_7) {
  VAR_9 |= VAR_4;
  VAR_9 &= ~VAR_5;
 } else {
  VAR_9 &= ~VAR_4;
  VAR_9 |= VAR_5;
 }

 FUNC_1(VAR_10->dev, "Starting watchdog: count=0x%08x, wtcon=%08lx\n",
  VAR_10->count, VAR_9);

 FUNC_6(VAR_10->count, VAR_10->reg_base + VAR_6);
 FUNC_6(VAR_10->count, VAR_10->reg_base + VAR_0);
 FUNC_6(VAR_9, VAR_10->reg_base + VAR_1);
 FUNC_4(&VAR_10->lock);

 return 0;
}
