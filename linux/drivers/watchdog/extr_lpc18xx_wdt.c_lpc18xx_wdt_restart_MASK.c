
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct lpc18xx_wdt_dev {int lock; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct lpc18xx_wdt_dev* FUNC_3 (struct watchdog_device*) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct watchdog_device *VAR_6,
          unsigned long VAR_7, void *VAR_8)
{
 struct lpc18xx_wdt_dev *VAR_9 = FUNC_3(VAR_6);
 unsigned long VAR_10;
 int VAR_11;




 FUNC_1(&VAR_9->lock, VAR_10);

 VAR_11 = FUNC_0(VAR_9->base + VAR_3);
 VAR_11 |= VAR_4;
 VAR_11 |= VAR_5;
 FUNC_4(VAR_11, VAR_9->base + VAR_3);

 FUNC_4(VAR_1, VAR_9->base + VAR_0);
 FUNC_4(VAR_2, VAR_9->base + VAR_0);

 FUNC_4(VAR_1, VAR_9->base + VAR_0);
 FUNC_4(VAR_1, VAR_9->base + VAR_0);

 FUNC_2(&VAR_9->lock, VAR_10);

 return 0;
}
