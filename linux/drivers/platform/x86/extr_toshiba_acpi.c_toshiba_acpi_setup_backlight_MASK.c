
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct toshiba_acpi_dev {TYPE_3__* backlight_dev; TYPE_1__* acpi_dev; scalar_t__ tr_backlight_supported; } ;
struct backlight_properties {scalar_t__ max_brightness; int type; } ;
typedef int props ;
struct TYPE_7__ {int brightness; } ;
struct TYPE_8__ {TYPE_2__ props; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct toshiba_acpi_dev*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (scalar_t__) ;
 TYPE_3__* FUNC_5 (char*,int *,struct toshiba_acpi_dev*,int *,struct backlight_properties*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct backlight_properties*,int ,int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (struct toshiba_acpi_dev*,int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_11(struct toshiba_acpi_dev *VAR_5)
{
 struct backlight_properties VAR_6;
 int VAR_7;
 int VAR_8;







 VAR_7 = FUNC_2(VAR_5);
 if (VAR_7 < 0)
  return 0;






 if (VAR_5->tr_backlight_supported && VAR_7 == 0)
  VAR_7++;
 VAR_8 = FUNC_10(VAR_5, VAR_7);
 if (VAR_8) {
  FUNC_8("Backlight method is read-only, disabling backlight support\n");
  return 0;
 }





 if (VAR_5->tr_backlight_supported ||
     FUNC_6(VAR_4))
  FUNC_4(VAR_2);

 if (FUNC_3() != VAR_2)
  return 0;

 FUNC_7(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.type = VAR_0;
 VAR_6.max_brightness = VAR_1 - 1;


 if (VAR_5->tr_backlight_supported)
  VAR_6.max_brightness++;

 VAR_5->backlight_dev = FUNC_5("toshiba",
             &VAR_5->acpi_dev->dev,
             VAR_5,
             &VAR_3,
             &VAR_6);
 if (FUNC_0(VAR_5->backlight_dev)) {
  VAR_8 = FUNC_1(VAR_5->backlight_dev);
  FUNC_9("Could not register toshiba backlight device\n");
  VAR_5->backlight_dev = ((void*)0);
  return VAR_8;
 }

 VAR_5->backlight_dev->props.brightness = VAR_7;
 return 0;
}
