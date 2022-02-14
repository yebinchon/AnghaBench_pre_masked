
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lis3lv02d {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct lis3lv02d* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int ,unsigned long*) ;
 scalar_t__ FUNC_2 (struct lis3lv02d*,unsigned long) ;
 int FUNC_3 (struct lis3lv02d*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
    struct device_attribute *VAR_2, const char *VAR_3,
    size_t VAR_4)
{
 struct lis3lv02d *VAR_5 = FUNC_0(VAR_1);
 unsigned long VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_3, 0, &VAR_6);
 if (VAR_7)
  return VAR_7;

 FUNC_3(VAR_5);
 if (FUNC_2(VAR_5, VAR_6))
  return -VAR_0;

 return VAR_4;
}
