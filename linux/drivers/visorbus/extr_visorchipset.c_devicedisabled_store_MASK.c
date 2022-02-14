
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int,unsigned int*) ;
 int FUNC_1 (unsigned int,int ) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
        struct device_attribute *VAR_2,
        const char *VAR_3, size_t VAR_4)
{
 unsigned int VAR_5;
 int VAR_6;

 if (FUNC_0(VAR_3, 10, &VAR_5))
  return -VAR_0;
 VAR_6 = FUNC_1(VAR_5, 0);
 if (VAR_6 < 0)
  return VAR_6;
 return VAR_4;
}
