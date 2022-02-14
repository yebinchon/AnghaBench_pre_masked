
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_2,
     struct device_attribute *VAR_3,
     const char *VAR_4, size_t VAR_5)
{
 if (VAR_5 < 1)
  return -VAR_0;

 if (FUNC_1(VAR_4, "on", 2) == 0 ||
     FUNC_1(VAR_4, "1", 1) == 0) {
  VAR_1 = 1;
  FUNC_0(VAR_2, "s3c2410fb: Debug On");
 } else if (FUNC_1(VAR_4, "off", 3) == 0 ||
     FUNC_1(VAR_4, "0", 1) == 0) {
  VAR_1 = 0;
  FUNC_0(VAR_2, "s3c2410fb: Debug Off");
 } else {
  return -VAR_0;
 }

 return VAR_5;
}
