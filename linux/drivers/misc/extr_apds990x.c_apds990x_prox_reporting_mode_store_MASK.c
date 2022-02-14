
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct apds990x_chip {int prox_continuous_mode; } ;
typedef int ssize_t ;


 struct apds990x_chip* FUNC_0 (struct device*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char const*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
      struct device_attribute *VAR_2,
      const char *VAR_3, size_t VAR_4)
{
 struct apds990x_chip *VAR_5 = FUNC_0(VAR_1);
 int VAR_6;

 VAR_6 = FUNC_1(VAR_0, VAR_3);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_5->prox_continuous_mode = VAR_6;
 return VAR_4;
}
