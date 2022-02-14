
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct apds990x_chip {unsigned long prox_thres; int mutex; } ;
typedef int ssize_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct apds990x_chip*) ;
 struct apds990x_chip* FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,int ,unsigned long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_3,
      struct device_attribute *VAR_4,
      const char *VAR_5, size_t VAR_6)
{
 struct apds990x_chip *VAR_7 = FUNC_1(VAR_3);
 unsigned long VAR_8;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_5, 0, &VAR_8);
 if (VAR_9)
  return VAR_9;

 if ((VAR_8 > VAR_1) || (VAR_8 == 0) ||
  (VAR_8 < VAR_0))
  return -VAR_2;

 FUNC_3(&VAR_7->mutex);
 VAR_7->prox_thres = VAR_8;

 FUNC_0(VAR_7);
 FUNC_4(&VAR_7->mutex);
 return VAR_6;
}
