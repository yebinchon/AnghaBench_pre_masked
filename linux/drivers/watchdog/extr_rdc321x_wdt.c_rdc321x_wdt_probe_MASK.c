
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int start; } ;
struct rdc321x_wdt_pdata {int sb_pdev; } ;
struct platform_device {int dev; } ;
struct TYPE_2__ {int default_ticks; int timer; int inuse; scalar_t__ queue; int stop; int base_reg; int sb_pdev; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,char*) ;
 struct rdc321x_wdt_pdata* FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int ) ;
 struct resource* FUNC_7 (struct platform_device*,int ,char*) ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int *) ;
 int VAR_6 ;
 int FUNC_9 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_7)
{
 int VAR_8;
 struct resource *VAR_9;
 struct rdc321x_wdt_pdata *VAR_10;

 VAR_10 = FUNC_2(&VAR_7->dev);
 if (!VAR_10) {
  FUNC_1(&VAR_7->dev, "no platform data supplied\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_7(VAR_7, VAR_1, "wdt-reg");
 if (!VAR_9) {
  FUNC_1(&VAR_7->dev, "failed to get wdt-reg resource\n");
  return -VAR_0;
 }

 VAR_3.sb_pdev = VAR_10->sb_pdev;
 VAR_3.base_reg = VAR_9->start;

 VAR_8 = FUNC_5(&VAR_4);
 if (VAR_8 < 0) {
  FUNC_1(&VAR_7->dev, "misc_register failed\n");
  return VAR_8;
 }

 FUNC_8(&VAR_3.lock);


 FUNC_6(VAR_3.sb_pdev,
    VAR_3.base_reg, VAR_2);

 FUNC_4(&VAR_3.stop);
 VAR_3.queue = 0;

 FUNC_0(0, &VAR_3.inuse);

 FUNC_9(&VAR_3.timer, VAR_5, 0);

 VAR_3.default_ticks = VAR_6;

 FUNC_3(&VAR_7->dev, "watchdog init success\n");

 return 0;
}
