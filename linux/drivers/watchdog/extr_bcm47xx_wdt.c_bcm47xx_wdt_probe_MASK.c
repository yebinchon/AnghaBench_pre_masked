
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_8__ {TYPE_6__* ops; int * parent; int timeout; int * info; } ;
struct bcm47xx_wdt {int max_timer_ms; int soft_timer; TYPE_1__ wdd; } ;
struct TYPE_9__ {int (* set_timeout ) (TYPE_1__*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_6__ VAR_3 ;
 int VAR_4 ;
 TYPE_6__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 struct bcm47xx_wdt* FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int ,char*,char*) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int VAR_8 ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,scalar_t__) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_9)
{
 int VAR_10;
 bool VAR_11;
 struct bcm47xx_wdt *VAR_12 = FUNC_1(&VAR_9->dev);

 if (!VAR_12)
  return -VAR_0;

 VAR_11 = VAR_12->max_timer_ms < VAR_2 * 1000;

 if (VAR_11) {
  VAR_12->wdd.ops = &VAR_5;
  FUNC_4(&VAR_12->soft_timer, VAR_6, 0);
 } else {
  VAR_12->wdd.ops = &VAR_3;
 }

 VAR_12->wdd.info = &VAR_4;
 VAR_12->wdd.timeout = VAR_1;
 VAR_12->wdd.parent = &VAR_9->dev;
 VAR_10 = VAR_12->wdd.ops->set_timeout(&VAR_12->wdd, VAR_8);
 if (VAR_10)
  goto err_timer;
 FUNC_6(&VAR_12->wdd, VAR_7);
 FUNC_7(&VAR_12->wdd, 64);
 FUNC_8(&VAR_12->wdd);

 VAR_10 = FUNC_5(&VAR_12->wdd);
 if (VAR_10)
  goto err_timer;

 FUNC_2(&VAR_9->dev, "BCM47xx Watchdog Timer enabled (%d seconds%s%s)\n",
  VAR_8, VAR_7 ? ", nowayout" : "",
  VAR_11 ? ", Software Timer" : "");
 return 0;

err_timer:
 if (VAR_11)
  FUNC_0(&VAR_12->soft_timer);

 return VAR_10;
}
