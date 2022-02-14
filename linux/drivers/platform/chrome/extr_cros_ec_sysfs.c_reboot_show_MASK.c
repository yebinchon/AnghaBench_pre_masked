
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char*,scalar_t__,char*) ;

__attribute__((used)) static ssize_t FUNC_1(struct device *VAR_1,
      struct device_attribute *VAR_2, char *VAR_3)
{
 int VAR_4 = 0;

 VAR_4 += FUNC_0(VAR_3 + VAR_4, VAR_0 - VAR_4,
      "ro|rw|cancel|cold|disable-jump|hibernate");
 VAR_4 += FUNC_0(VAR_3 + VAR_4, VAR_0 - VAR_4,
      " [at-shutdown]\n");
 return VAR_4;
}
