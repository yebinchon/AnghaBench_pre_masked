
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct bh1770_chip {int lux_threshold_lo; } ;
typedef int ssize_t ;


 int FUNC_0 (struct bh1770_chip*,int *,char const*) ;
 struct bh1770_chip* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
      struct device_attribute *VAR_1,
      const char *VAR_2, size_t VAR_3)
{
 struct bh1770_chip *VAR_4 = FUNC_1(VAR_0);
 int VAR_5 = FUNC_0(VAR_4, &VAR_4->lux_threshold_lo, VAR_2);
 if (VAR_5 < 0)
  return VAR_5;
 return VAR_3;
}
