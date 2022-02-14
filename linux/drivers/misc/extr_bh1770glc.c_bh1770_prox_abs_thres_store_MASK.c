
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct bh1770_chip {unsigned long prox_abs_thres; } ;
typedef int ssize_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 struct bh1770_chip* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int ,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_2,
    struct device_attribute *VAR_3,
    const char *VAR_4, size_t VAR_5)
{
 struct bh1770_chip *VAR_6 = FUNC_0(VAR_2);
 unsigned long VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_4, 0, &VAR_7);
 if (VAR_8)
  return VAR_8;

 if (VAR_7 > VAR_0)
  return -VAR_1;

 VAR_6->prox_abs_thres = VAR_7;

 return VAR_5;
}
