
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct wlcore_platdev_data {TYPE_1__* family; } ;
struct wl1271 {TYPE_3__* dev; int nvs_loading_complete; struct platform_device* pdev; int ptable; int ops; } ;
struct TYPE_10__ {TYPE_2__* driver; } ;
struct platform_device {TYPE_3__ dev; } ;
struct TYPE_9__ {int * pm; } ;
struct TYPE_8__ {char* nvs_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 struct wlcore_platdev_data* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct platform_device*,struct wl1271*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int ,int ,char const*,TYPE_3__*,int ,struct wl1271*,int (*) (int *,struct wl1271*)) ;
 int FUNC_7 (char*,char const*,int) ;
 int FUNC_8 (int *,struct wl1271*) ;
 int VAR_4 ;

int FUNC_9(struct wl1271 *VAR_5, struct platform_device *VAR_6)
{
 struct wlcore_platdev_data *VAR_7 = FUNC_1(&VAR_6->dev);
 const char *VAR_8;
 int VAR_9 = 0;

 if (!VAR_5->ops || !VAR_5->ptable || !VAR_7)
  return -VAR_0;

 VAR_5->dev = &VAR_6->dev;
 VAR_5->pdev = VAR_6;
 FUNC_2(VAR_6, VAR_5);

 if (VAR_7->family && VAR_7->family->nvs_name) {
  VAR_8 = VAR_7->family->nvs_name;
  VAR_9 = FUNC_6(VAR_3, VAR_1,
           VAR_8, &VAR_6->dev, VAR_2,
           VAR_5, FUNC_8);
  if (VAR_9 < 0) {
   FUNC_7("request_firmware_nowait failed for %s: %d",
         VAR_8, VAR_9);
   FUNC_0(&VAR_5->nvs_loading_complete);
  }
 } else {
  FUNC_8(((void*)0), VAR_5);
 }

 VAR_5->dev->driver->pm = &VAR_4;
 FUNC_4(VAR_5->dev, 50);
 FUNC_5(VAR_5->dev);
 FUNC_3(VAR_5->dev);

 return VAR_9;
}
