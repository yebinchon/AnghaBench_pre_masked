
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct via_camera {void* reset_gpio; void* power_gpio; TYPE_1__* platdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (void*,int ) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*,char*) ;
 void* FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct via_camera *VAR_1)
{
 int VAR_2;

 VAR_1->power_gpio = FUNC_5("VGPIO3");
 VAR_1->reset_gpio = FUNC_5("VGPIO2");
 if (!FUNC_3(VAR_1->power_gpio) || !FUNC_3(VAR_1->reset_gpio)) {
  FUNC_0(&VAR_1->platdev->dev, "Unable to find GPIO lines\n");
  return -VAR_0;
 }
 VAR_2 = FUNC_4(VAR_1->power_gpio, "viafb-camera");
 if (VAR_2) {
  FUNC_0(&VAR_1->platdev->dev, "Unable to request power GPIO\n");
  return VAR_2;
 }
 VAR_2 = FUNC_4(VAR_1->reset_gpio, "viafb-camera");
 if (VAR_2) {
  FUNC_0(&VAR_1->platdev->dev, "Unable to request reset GPIO\n");
  FUNC_2(VAR_1->power_gpio);
  return VAR_2;
 }
 FUNC_1(VAR_1->power_gpio, 0);
 FUNC_1(VAR_1->reset_gpio, 0);
 return 0;
}
