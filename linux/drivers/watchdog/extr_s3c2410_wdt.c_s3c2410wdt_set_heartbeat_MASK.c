
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {unsigned int timeout; } ;
struct s3c2410_wdt {unsigned int count; scalar_t__ reg_base; int dev; int clock; } ;


 void* FUNC_0 (unsigned int,unsigned int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long FUNC_1 (unsigned int) ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,unsigned int,unsigned int,unsigned int,...) ;
 int FUNC_4 (int ,char*,unsigned int) ;
 unsigned long FUNC_5 (scalar_t__) ;
 struct s3c2410_wdt* FUNC_6 (struct watchdog_device*) ;
 int FUNC_7 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct watchdog_device *VAR_4,
        unsigned int VAR_5)
{
 struct s3c2410_wdt *VAR_6 = FUNC_6(VAR_4);
 unsigned long VAR_7 = FUNC_2(VAR_6->clock);
 unsigned int VAR_8;
 unsigned int VAR_9 = 1;
 unsigned long VAR_10;

 if (VAR_5 < 1)
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_7, 128);
 VAR_8 = VAR_5 * VAR_7;

 FUNC_3(VAR_6->dev, "Heartbeat: count=%d, timeout=%d, freq=%lu\n",
  VAR_8, VAR_5, VAR_7);






 if (VAR_8 >= 0x10000) {
  VAR_9 = FUNC_0(VAR_8, 0xffff);

  if (VAR_9 > 0x100) {
   FUNC_4(VAR_6->dev, "timeout %d too big\n", VAR_5);
   return -VAR_0;
  }
 }

 FUNC_3(VAR_6->dev, "Heartbeat: timeout=%d, divisor=%d, count=%d (%08x)\n",
  VAR_5, VAR_9, VAR_8, FUNC_0(VAR_8, VAR_9));

 VAR_8 = FUNC_0(VAR_8, VAR_9);
 VAR_6->count = VAR_8;


 VAR_10 = FUNC_5(VAR_6->reg_base + VAR_1);
 VAR_10 &= ~VAR_2;
 VAR_10 |= FUNC_1(VAR_9-1);

 FUNC_7(VAR_8, VAR_6->reg_base + VAR_3);
 FUNC_7(VAR_10, VAR_6->reg_base + VAR_1);

 VAR_4->timeout = (VAR_8 * VAR_9) / VAR_7;

 return 0;
}
