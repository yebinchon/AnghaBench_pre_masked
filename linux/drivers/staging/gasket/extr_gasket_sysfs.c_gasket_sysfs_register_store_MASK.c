
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int ulong ;
struct gasket_sysfs_mapping {struct gasket_dev* gasket_dev; } ;
struct TYPE_3__ {int offset; int bar; } ;
struct TYPE_4__ {TYPE_1__ bar_address; } ;
struct gasket_sysfs_attribute {int (* write_callback ) (struct gasket_dev*,struct gasket_sysfs_attribute*,int ) ;TYPE_2__ data; } ;
struct gasket_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct gasket_dev*,int ,int ,int ) ;
 struct gasket_sysfs_attribute* FUNC_2 (struct device*,struct device_attribute*) ;
 int FUNC_3 (struct device*,struct gasket_sysfs_attribute*) ;
 struct gasket_sysfs_mapping* FUNC_4 (struct device*) ;
 scalar_t__ FUNC_5 (char const*,int,int *) ;
 int FUNC_6 (struct gasket_sysfs_mapping*) ;
 int FUNC_7 (struct gasket_dev*,struct gasket_sysfs_attribute*,int ) ;

ssize_t FUNC_8(struct device *VAR_1,
        struct device_attribute *VAR_2,
        const char *VAR_3, size_t VAR_4)
{
 ulong VAR_5 = 0;
 struct gasket_sysfs_mapping *VAR_6;
 struct gasket_dev *VAR_7;
 struct gasket_sysfs_attribute *VAR_8;

 if (VAR_4 < 3 || VAR_3[0] != '0' || VAR_3[1] != 'x') {
  FUNC_0(VAR_1,
   "sysfs register write format: \"0x<hex value>\"\n");
  return -VAR_0;
 }

 if (FUNC_5(VAR_3, 16, &VAR_5) != 0) {
  FUNC_0(VAR_1,
   "Unable to parse input as 64-bit hex value: %s\n", VAR_3);
  return -VAR_0;
 }

 VAR_6 = FUNC_4(VAR_1);
 if (!VAR_6) {
  FUNC_0(VAR_1, "Device driver may have been removed\n");
  return 0;
 }

 VAR_7 = VAR_6->gasket_dev;
 if (!VAR_7) {
  FUNC_0(VAR_1, "Device driver may have been removed\n");
  return 0;
 }

 VAR_8 = FUNC_2(VAR_1, VAR_2);
 if (!VAR_8) {
  FUNC_6(VAR_6);
  return VAR_4;
 }

 FUNC_1(VAR_7, VAR_5,
       VAR_8->data.bar_address.bar,
       VAR_8->data.bar_address.offset);

 if (VAR_8->write_callback)
  VAR_8->write_callback(VAR_7, VAR_8,
         VAR_5);

 FUNC_3(VAR_1, VAR_8);
 FUNC_6(VAR_6);
 return VAR_4;
}
