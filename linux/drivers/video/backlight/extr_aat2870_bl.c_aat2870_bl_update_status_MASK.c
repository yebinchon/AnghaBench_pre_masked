
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int brightness; int max_brightness; scalar_t__ power; int state; } ;
struct backlight_device {TYPE_3__ props; int dev; } ;
struct aat2870_data {int (* write ) (struct aat2870_data*,int ,int ) ;} ;
struct aat2870_bl_driver_data {int brightness; TYPE_2__* pdev; } ;
struct TYPE_4__ {int parent; } ;
struct TYPE_5__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct aat2870_bl_driver_data*) ;
 int FUNC_1 (struct aat2870_bl_driver_data*) ;
 scalar_t__ FUNC_2 (struct aat2870_bl_driver_data*,int) ;
 struct aat2870_bl_driver_data* FUNC_3 (struct backlight_device*) ;
 int FUNC_4 (int *,char*,int,scalar_t__,int) ;
 int FUNC_5 (int *,char*,int) ;
 struct aat2870_data* FUNC_6 (int ) ;
 int FUNC_7 (struct aat2870_data*,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct backlight_device *VAR_5)
{
 struct aat2870_bl_driver_data *VAR_6 = FUNC_3(VAR_5);
 struct aat2870_data *VAR_7 =
   FUNC_6(VAR_6->pdev->dev.parent);
 int VAR_8 = VAR_5->props.brightness;
 int VAR_9;

 if ((VAR_8 < 0) || (VAR_5->props.max_brightness < VAR_8)) {
  FUNC_5(&VAR_5->dev, "invalid brightness, %d\n", VAR_8);
  return -VAR_3;
 }

 FUNC_4(&VAR_5->dev, "brightness=%d, power=%d, state=%d\n",
   VAR_5->props.brightness, VAR_5->props.power, VAR_5->props.state);

 if ((VAR_5->props.power != VAR_4) ||
   (VAR_5->props.state & VAR_1) ||
   (VAR_5->props.state & VAR_2))
  VAR_8 = 0;

 VAR_9 = VAR_7->write(VAR_7, VAR_0,
        (u8)FUNC_2(VAR_6, VAR_8));
 if (VAR_9 < 0)
  return VAR_9;

 if (VAR_8 == 0) {
  VAR_9 = FUNC_0(VAR_6);
  if (VAR_9 < 0)
   return VAR_9;
 } else if (VAR_6->brightness == 0) {
  VAR_9 = FUNC_1(VAR_6);
  if (VAR_9 < 0)
   return VAR_9;
 }

 VAR_6->brightness = VAR_8;

 return 0;
}
