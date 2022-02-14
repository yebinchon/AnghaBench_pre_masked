
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct apds990x_chip {int lux_wait_fresh_res; int mutex; } ;
typedef int ssize_t ;


 int FUNC_0 (struct apds990x_chip*) ;
 int FUNC_1 (struct apds990x_chip*) ;
 struct apds990x_chip* FUNC_2 (struct device*) ;
 int FUNC_3 (char const*,int ,unsigned long*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_0,
      struct device_attribute *VAR_1,
      const char *VAR_2, size_t VAR_3)
{
 struct apds990x_chip *VAR_4 = FUNC_2(VAR_0);
 unsigned long VAR_5;
 int VAR_6;

 VAR_6 = FUNC_3(VAR_2, 0, &VAR_5);
 if (VAR_6)
  return VAR_6;

 if (VAR_5) {
  FUNC_6(VAR_0);
  FUNC_4(&VAR_4->mutex);
  VAR_4->lux_wait_fresh_res = 1;
  FUNC_0(VAR_4);
  FUNC_1(VAR_4);
  FUNC_5(&VAR_4->mutex);
 } else {
  if (!FUNC_8(VAR_0))
   FUNC_7(VAR_0);
 }
 return VAR_3;
}
