
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct most_interface {int interface; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
 int VAR_0 ;
 int FUNC_0 (char*,int ,char*) ;
 struct most_interface* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
         struct device_attribute *VAR_2,
         char *VAR_3)
{
 struct most_interface *VAR_4 = FUNC_1(VAR_1);

 switch (VAR_4->interface) {
 case 133:
  return FUNC_0(VAR_3, VAR_0, "loopback\n");
 case 135:
  return FUNC_0(VAR_3, VAR_0, "i2c\n");
 case 134:
  return FUNC_0(VAR_3, VAR_0, "i2s\n");
 case 129:
  return FUNC_0(VAR_3, VAR_0, "tsi\n");
 case 136:
  return FUNC_0(VAR_3, VAR_0, "hbi\n");
 case 132:
  return FUNC_0(VAR_3, VAR_0, "mlb_dim\n");
 case 131:
  return FUNC_0(VAR_3, VAR_0, "mlb_dim2\n");
 case 128:
  return FUNC_0(VAR_3, VAR_0, "usb\n");
 case 130:
  return FUNC_0(VAR_3, VAR_0, "pcie\n");
 }
 return FUNC_0(VAR_3, VAR_0, "unknown\n");
}
