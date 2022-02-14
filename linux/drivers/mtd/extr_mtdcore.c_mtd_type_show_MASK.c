
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int type; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
 int VAR_0 ;
 struct mtd_info* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
  struct device_attribute *VAR_2, char *VAR_3)
{
 struct mtd_info *VAR_4 = FUNC_0(VAR_1);
 char *VAR_5;

 switch (VAR_4->type) {
 case 135:
  VAR_5 = "absent";
  break;
 case 130:
  VAR_5 = "ram";
  break;
 case 129:
  VAR_5 = "rom";
  break;
 case 131:
  VAR_5 = "nor";
  break;
 case 132:
  VAR_5 = "nand";
  break;
 case 134:
  VAR_5 = "dataflash";
  break;
 case 128:
  VAR_5 = "ubi";
  break;
 case 133:
  VAR_5 = "mlc-nand";
  break;
 default:
  VAR_5 = "unknown";
 }

 return FUNC_1(VAR_3, VAR_0, "%s\n", VAR_5);
}
