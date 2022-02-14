
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct apds990x_chip {unsigned long lux_calib; } ;
typedef int ssize_t ;


 struct apds990x_chip* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int ,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
      struct device_attribute *VAR_1,
      const char *VAR_2, size_t VAR_3)
{
 struct apds990x_chip *VAR_4 = FUNC_0(VAR_0);
 unsigned long VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_2, 0, &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_4->lux_calib = VAR_5;

 return VAR_3;
}
