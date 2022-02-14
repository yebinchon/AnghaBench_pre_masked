
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct watchdog_device {int timeout; } ;
struct ftwdt010_wdt {scalar_t__ base; scalar_t__ has_irq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct ftwdt010_wdt* FUNC_0 (struct watchdog_device*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_9)
{
 struct ftwdt010_wdt *VAR_10 = FUNC_0(VAR_9);
 u32 VAR_11;

 FUNC_1(VAR_9->timeout * VAR_8, VAR_10->base + VAR_1);
 FUNC_1(VAR_7, VAR_10->base + VAR_2);

 VAR_11 = VAR_3 | VAR_5;
 FUNC_1(VAR_11, VAR_10->base + VAR_0);
 if (VAR_10->has_irq)
  VAR_11 |= VAR_6;
 VAR_11 |= VAR_4;
 FUNC_1(VAR_11, VAR_10->base + VAR_0);

 return 0;
}
