
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct device*,char*,scalar_t__) ;
 int FUNC_1 (struct device*,char*,scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_2,
        struct device_attribute *VAR_3, char *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_4, VAR_1 - 1);
 if (VAR_5 != -VAR_0)
  return VAR_5;

 return FUNC_1(VAR_2, VAR_4, VAR_1);
}
