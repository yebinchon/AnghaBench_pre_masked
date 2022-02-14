
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char const*,char*,int*,int*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
           struct device_attribute *VAR_2,
           const char *VAR_3, size_t VAR_4)
{
 int VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_3, "%d %d", &VAR_6, &VAR_5);
 if (VAR_7 != 2) {
  FUNC_0(VAR_1, "Error args\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_1(VAR_6, VAR_5);
 if (VAR_7) {
  FUNC_0(VAR_1, "command %d error with %d\n", VAR_6, VAR_7);
  return VAR_7;
 }
 return (ssize_t)VAR_4;
}
