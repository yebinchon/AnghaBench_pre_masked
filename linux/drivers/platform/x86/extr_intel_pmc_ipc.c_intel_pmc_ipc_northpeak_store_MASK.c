
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int,int) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (char const*,int ,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
          struct device_attribute *VAR_3,
          const char *VAR_4, size_t VAR_5)
{
 unsigned long VAR_6;
 int VAR_7;
 int VAR_8;

 if (FUNC_2(VAR_4, 0, &VAR_6))
  return -VAR_0;

 if (VAR_6)
  VAR_7 = 1;
 else
  VAR_7 = 0;
 VAR_8 = FUNC_1(VAR_1, VAR_7);
 if (VAR_8) {
  FUNC_0(VAR_2, "command north %d error with %d\n", VAR_7, VAR_8);
  return VAR_8;
 }
 return (ssize_t)VAR_5;
}
