
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint ;
struct TYPE_3__ {scalar_t__ attr_type; } ;
struct gasket_sysfs_attribute {TYPE_1__ data; } ;
struct gasket_page_table {int dummy; } ;
struct gasket_dev {int dev; struct gasket_page_table** page_table; } ;
struct TYPE_4__ {int name; } ;
struct device_attribute {TYPE_2__ attr; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef enum sysfs_attribute_type { ____Placeholder_sysfs_attribute_type } sysfs_attribute_type ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct gasket_page_table*) ;
 int FUNC_3 (struct gasket_page_table*) ;
 int FUNC_4 (struct gasket_page_table*) ;
 struct gasket_sysfs_attribute* FUNC_5 (struct device*,struct device_attribute*) ;
 struct gasket_dev* FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*,struct gasket_sysfs_attribute*) ;
 int FUNC_8 (struct device*,struct gasket_dev*) ;
 int FUNC_9 (char*,int ,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_2, struct device_attribute *VAR_3,
     char *VAR_4)
{
 int VAR_5;
 struct gasket_dev *VAR_6;
 struct gasket_sysfs_attribute *VAR_7;
 enum sysfs_attribute_type VAR_8;
 struct gasket_page_table *VAR_9;
 uint VAR_10;

 VAR_6 = FUNC_6(VAR_2);
 if (!VAR_6) {
  FUNC_1(VAR_2, "No Apex device sysfs mapping found\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_5(VAR_2, VAR_3);
 if (!VAR_7) {
  FUNC_1(VAR_2, "No Apex device sysfs attr data found\n");
  FUNC_8(VAR_2, VAR_6);
  return -VAR_0;
 }

 VAR_8 = (enum sysfs_attribute_type)VAR_7->data.attr_type;
 VAR_9 = VAR_6->page_table[0];
 switch (VAR_8) {
 case 129:
  VAR_10 = FUNC_3(VAR_9);
  break;
 case 128:
  VAR_10 = FUNC_4(VAR_9);
  break;
 case 130:
  VAR_10 = FUNC_2(VAR_9);
  break;
 default:
  FUNC_0(VAR_6->dev, "Unknown attribute: %s\n",
   VAR_3->attr.name);
  VAR_5 = 0;
  goto exit;
 }
 VAR_5 = FUNC_9(VAR_4, VAR_1, "%u\n", VAR_10);
exit:
 FUNC_7(VAR_2, VAR_7);
 FUNC_8(VAR_2, VAR_6);
 return VAR_5;
}
