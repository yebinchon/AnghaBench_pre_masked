
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct panel_drv_data {int mutex; } ;
struct backlight_device {int dev; } ;


 int FUNC_0 (struct backlight_device*) ;
 struct panel_drv_data* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct backlight_device *VAR_0)
{
 struct panel_drv_data *VAR_1 = FUNC_1(&VAR_0->dev);
 int VAR_2;

 FUNC_2(&VAR_1->mutex);
 VAR_2 = FUNC_0(VAR_0);
 FUNC_3(&VAR_1->mutex);

 return VAR_2;
}
