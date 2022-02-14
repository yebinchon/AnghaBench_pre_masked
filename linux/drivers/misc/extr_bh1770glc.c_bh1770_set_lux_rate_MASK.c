
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct bh1770_chip {int lux_rate_index; int mutex; } ;
typedef int ssize_t ;


 int FUNC_0 (unsigned long*) ;
 int FUNC_1 (struct bh1770_chip*,int) ;
 struct bh1770_chip* FUNC_2 (struct device*) ;
 int FUNC_3 (char const*,int ,unsigned long*) ;
 unsigned long* VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
          struct device_attribute *VAR_2,
          const char *VAR_3, size_t VAR_4)
{
 struct bh1770_chip *VAR_5 = FUNC_2(VAR_1);
 unsigned long VAR_6;
 int VAR_7, VAR_8;

 VAR_7 = FUNC_3(VAR_3, 0, &VAR_6);
 if (VAR_7)
  return VAR_7;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_0) - 1; VAR_8++)
  if (VAR_6 >= VAR_0[VAR_8])
   break;

 FUNC_4(&VAR_5->mutex);
 VAR_5->lux_rate_index = VAR_8;
 VAR_7 = FUNC_1(VAR_5, VAR_8);
 FUNC_5(&VAR_5->mutex);

 if (VAR_7 < 0)
  return VAR_7;

 return VAR_4;
}
