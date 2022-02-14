
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct toshiba_acpi_dev {TYPE_2__* backlight_dev; } ;
struct seq_file {struct toshiba_acpi_dev* private; } ;
struct TYPE_3__ {int max_brightness; } ;
struct TYPE_4__ {TYPE_1__ props; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct seq_file*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_1, void *VAR_2)
{
 struct toshiba_acpi_dev *VAR_3 = VAR_1->private;
 int VAR_4;
 int VAR_5;

 if (!VAR_3->backlight_dev)
  return -VAR_0;

 VAR_4 = VAR_3->backlight_dev->props.max_brightness + 1;
 VAR_5 = FUNC_0(VAR_3->backlight_dev);
 if (VAR_5 < 0) {
  FUNC_1("Error reading LCD brightness\n");
  return VAR_5;
 }

 FUNC_2(VAR_1, "brightness:              %d\n", VAR_5);
 FUNC_2(VAR_1, "brightness_levels:       %d\n", VAR_4);

 return 0;
}
