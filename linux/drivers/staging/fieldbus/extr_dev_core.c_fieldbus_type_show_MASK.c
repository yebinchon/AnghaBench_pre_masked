
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fieldbus_dev {int fieldbus_type; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;



 struct fieldbus_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,char const*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
      struct device_attribute *VAR_1, char *VAR_2)
{
 struct fieldbus_dev *VAR_3 = FUNC_0(VAR_0);
 const char *VAR_4;

 switch (VAR_3->fieldbus_type) {
 case 128:
  VAR_4 = "profinet";
  break;
 default:
  VAR_4 = "unknown";
  break;
 }

 return FUNC_1(VAR_2, "%s\n", VAR_4);
}
