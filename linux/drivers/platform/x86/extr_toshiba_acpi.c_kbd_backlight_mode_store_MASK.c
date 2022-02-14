
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct toshiba_acpi_dev {int kbd_type; int kbd_mode; int kbd_time; int kbd_event_generated; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int kbd_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct toshiba_acpi_dev* FUNC_0 (struct device*) ;
 int VAR_6 ;
 int FUNC_1 (char const*,int ,int*) ;
 int FUNC_2 (int *) ;
 TYPE_1__* VAR_7 ;
 int FUNC_3 (struct toshiba_acpi_dev*,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_8,
     struct device_attribute *VAR_9,
     const char *VAR_10, size_t VAR_11)
{
 struct toshiba_acpi_dev *VAR_12 = FUNC_0(VAR_8);
 int VAR_13;
 int VAR_14;


 VAR_14 = FUNC_1(VAR_10, 0, &VAR_13);
 if (VAR_14)
  return VAR_14;


 if (VAR_12->kbd_type == 1) {

  if (VAR_13 != VAR_3 && VAR_13 != VAR_2)
   return -VAR_0;
 } else if (VAR_12->kbd_type == 2) {

  if (VAR_13 != VAR_2 && VAR_13 != VAR_5 &&
      VAR_13 != VAR_4)
   return -VAR_0;
 }
 if (VAR_12->kbd_mode != VAR_13) {

  int VAR_15 = VAR_12->kbd_time << VAR_1;


  if (VAR_12->kbd_type == 1) {

   VAR_15 |= VAR_12->kbd_mode;
  } else if (VAR_12->kbd_type == 2) {

   VAR_15 |= VAR_13;
  }

  VAR_14 = FUNC_3(VAR_12, VAR_15);
  if (VAR_14)
   return VAR_14;

  VAR_12->kbd_mode = VAR_13;
  VAR_7->kbd_mode = VAR_13;
  if (VAR_12->kbd_type == 2 &&
      !VAR_12->kbd_event_generated)
   FUNC_2(&VAR_6);
 }

 return VAR_11;
}
