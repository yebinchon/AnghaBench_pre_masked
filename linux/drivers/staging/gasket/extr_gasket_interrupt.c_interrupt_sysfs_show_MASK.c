
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ attr_type; } ;
struct gasket_sysfs_attribute {TYPE_1__ data; } ;
struct gasket_interrupt_data {int num_interrupts; int * interrupt_counts; } ;
struct gasket_dev {int dev; struct gasket_interrupt_data* interrupt_data; } ;
struct TYPE_4__ {int name; } ;
struct device_attribute {TYPE_2__ attr; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef enum interrupt_sysfs_attribute_type { ____Placeholder_interrupt_sysfs_attribute_type } interrupt_sysfs_attribute_type ;



 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 struct gasket_sysfs_attribute* FUNC_1 (struct device*,struct device_attribute*) ;
 struct gasket_dev* FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,struct gasket_sysfs_attribute*) ;
 int FUNC_4 (struct device*,struct gasket_dev*) ;
 int FUNC_5 (char*,int,char*,int,int ) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
        struct device_attribute *VAR_2, char *VAR_3)
{
 int VAR_4, VAR_5;
 ssize_t VAR_6 = 0, VAR_7 = 0;
 struct gasket_interrupt_data *VAR_8;
 struct gasket_dev *VAR_9;
 struct gasket_sysfs_attribute *VAR_10;
 enum interrupt_sysfs_attribute_type VAR_11;

 VAR_9 = FUNC_2(VAR_1);
 if (!VAR_9) {
  FUNC_0(VAR_1, "No sysfs mapping found for device\n");
  return 0;
 }

 VAR_10 = FUNC_1(VAR_1, VAR_2);
 if (!VAR_10) {
  FUNC_0(VAR_1, "No sysfs attr data found for device\n");
  FUNC_4(VAR_1, VAR_9);
  return 0;
 }

 VAR_11 = (enum interrupt_sysfs_attribute_type)
  VAR_10->data.attr_type;
 VAR_8 = VAR_9->interrupt_data;
 switch (VAR_11) {
 case 128:
  for (VAR_4 = 0; VAR_4 < VAR_8->num_interrupts; ++VAR_4) {
   VAR_6 =
    FUNC_5(VAR_3, VAR_0 - VAR_7,
       "0x%02x: %ld\n", VAR_4,
       VAR_8->interrupt_counts[VAR_4]);
   VAR_7 += VAR_6;
   VAR_3 += VAR_6;
  }
  VAR_5 = VAR_7;
  break;
 default:
  FUNC_0(VAR_9->dev, "Unknown attribute: %s\n",
   VAR_2->attr.name);
  VAR_5 = 0;
  break;
 }

 FUNC_3(VAR_1, VAR_10);
 FUNC_4(VAR_1, VAR_9);
 return VAR_5;
}
