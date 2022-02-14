
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lcd_platform_data {int reset_delay; int (* reset ) (int ) ;int power_on_delay; int (* power_on ) (int ,int) ;} ;
struct TYPE_2__ {int brightness; } ;
struct backlight_device {TYPE_1__ props; } ;
struct ams369fg06 {int dev; int ld; struct backlight_device* bd; struct lcd_platform_data* lcd_pd; } ;


 int VAR_0 ;
 int FUNC_0 (struct ams369fg06*,int ) ;
 int FUNC_1 (struct ams369fg06*) ;
 int FUNC_2 (struct ams369fg06*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct ams369fg06 *VAR_1)
{
 int VAR_2 = 0;
 struct lcd_platform_data *VAR_3;
 struct backlight_device *VAR_4;

 VAR_3 = VAR_1->lcd_pd;
 VAR_4 = VAR_1->bd;

 if (VAR_3->power_on) {
  VAR_3->power_on(VAR_1->ld, 1);
  FUNC_4(VAR_3->power_on_delay);
 }

 if (!VAR_3->reset) {
  FUNC_3(VAR_1->dev, "reset is NULL.\n");
  return -VAR_0;
 }

 VAR_3->reset(VAR_1->ld);
 FUNC_4(VAR_3->reset_delay);

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2) {
  FUNC_3(VAR_1->dev, "failed to initialize ldi.\n");
  return VAR_2;
 }

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2) {
  FUNC_3(VAR_1->dev, "failed to enable ldi.\n");
  return VAR_2;
 }


 VAR_2 = FUNC_0(VAR_1, VAR_4->props.brightness);
 if (VAR_2) {
  FUNC_3(VAR_1->dev, "lcd gamma setting failed.\n");
  return VAR_2;
 }

 return 0;
}
