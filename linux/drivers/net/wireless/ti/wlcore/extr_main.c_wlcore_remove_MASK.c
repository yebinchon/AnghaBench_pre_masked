
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct wlcore_platdev_data {TYPE_2__* family; } ;
struct wl1271 {int irq; TYPE_3__* dev; scalar_t__ irq_wake_enabled; int wakeirq; int initialized; int nvs_loading_complete; } ;
struct platform_device {int dev; } ;
struct TYPE_12__ {TYPE_1__* driver; } ;
struct TYPE_11__ {scalar_t__ nvs_name; } ;
struct TYPE_10__ {int * pm; } ;


 int VAR_0 ;
 struct wlcore_platdev_data* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,char*,int) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,struct wl1271*) ;
 struct wl1271* FUNC_6 (struct platform_device*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct wl1271*) ;
 int FUNC_13 (struct wl1271*) ;

int FUNC_14(struct platform_device *VAR_1)
{
 struct wlcore_platdev_data *VAR_2 = FUNC_0(&VAR_1->dev);
 struct wl1271 *VAR_3 = FUNC_6(VAR_1);
 int VAR_4;

 VAR_4 = FUNC_9(VAR_3->dev);
 if (VAR_4 < 0)
  FUNC_2(VAR_3->dev, "PM runtime failed: %i\n", VAR_4);

 VAR_3->dev->driver->pm = ((void*)0);

 if (VAR_2->family && VAR_2->family->nvs_name)
  FUNC_11(&VAR_3->nvs_loading_complete);
 if (!VAR_3->initialized)
  return 0;

 if (VAR_3->wakeirq >= 0) {
  FUNC_1(VAR_3->dev);
  VAR_3->wakeirq = -VAR_0;
 }

 FUNC_3(VAR_3->dev, 0);

 if (VAR_3->irq_wake_enabled)
  FUNC_4(VAR_3->irq);

 FUNC_12(VAR_3);

 FUNC_10(VAR_3->dev);
 FUNC_8(VAR_3->dev);
 FUNC_7(VAR_3->dev);

 FUNC_5(VAR_3->irq, VAR_3);
 FUNC_13(VAR_3);

 return 0;
}
