
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct bh1770_chip {unsigned long prox_threshold; int mutex; } ;
typedef int ssize_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bh1770_chip*) ;
 struct bh1770_chip* FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,int ,unsigned long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_2,
          struct device_attribute *VAR_3,
          const char *VAR_4, size_t VAR_5)
{
 struct bh1770_chip *VAR_6 = FUNC_1(VAR_2);
 unsigned long VAR_7;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_4, 0, &VAR_7);
 if (VAR_8)
  return VAR_8;

 if (VAR_7 > VAR_0)
  return -VAR_1;

 FUNC_3(&VAR_6->mutex);
 VAR_6->prox_threshold = VAR_7;
 VAR_8 = FUNC_0(VAR_6);
 FUNC_4(&VAR_6->mutex);
 if (VAR_8 < 0)
  return VAR_8;
 return VAR_5;
}
