
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct lpc18xx_wdt_dev {int lock; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 struct lpc18xx_wdt_dev* FUNC_2 (struct watchdog_device*) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct watchdog_device *VAR_3)
{
 struct lpc18xx_wdt_dev *VAR_4 = FUNC_2(VAR_3);
 unsigned long VAR_5;





 FUNC_0(&VAR_4->lock, VAR_5);
 FUNC_3(VAR_1, VAR_4->base + VAR_0);
 FUNC_3(VAR_2, VAR_4->base + VAR_0);
 FUNC_1(&VAR_4->lock, VAR_5);

 return 0;
}
