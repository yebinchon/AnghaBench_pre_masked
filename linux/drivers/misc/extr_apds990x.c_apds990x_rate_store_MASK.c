
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct apds990x_chip {int mutex; } ;
typedef int ssize_t ;


 int FUNC_0 (struct apds990x_chip*,unsigned long) ;
 struct apds990x_chip* FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,int ,unsigned long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
      struct device_attribute *VAR_1,
      const char *VAR_2, size_t VAR_3)
{
 struct apds990x_chip *VAR_4 = FUNC_1(VAR_0);
 unsigned long VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_2, 0, &VAR_5);
 if (VAR_6)
  return VAR_6;

 FUNC_3(&VAR_4->mutex);
 VAR_6 = FUNC_0(VAR_4, VAR_5);
 FUNC_4(&VAR_4->mutex);

 if (VAR_6 < 0)
  return VAR_6;
 return VAR_3;
}
