
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hl_device {int asic_type; int dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;



 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 struct hl_device* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
  struct device_attribute *VAR_2, char *VAR_3)
{
 struct hl_device *VAR_4 = FUNC_1(VAR_1);
 char *VAR_5;

 switch (VAR_4->asic_type) {
 case 128:
  VAR_5 = "GOYA";
  break;
 default:
  FUNC_0(VAR_4->dev, "Unrecognized ASIC type %d\n",
    VAR_4->asic_type);
  return -VAR_0;
 }

 return FUNC_2(VAR_3, "%s\n", VAR_5);
}
