
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtual_consumer_data {long min_uA; int lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 struct virtual_consumer_data* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (char const*,int,long*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct device*,struct virtual_consumer_data*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0, struct device_attribute *VAR_1,
     const char *VAR_2, size_t VAR_3)
{
 struct virtual_consumer_data *VAR_4 = FUNC_0(VAR_0);
 long VAR_5;

 if (FUNC_1(VAR_2, 10, &VAR_5) != 0)
  return VAR_3;

 FUNC_2(&VAR_4->lock);

 VAR_4->min_uA = VAR_5;
 FUNC_4(VAR_0, VAR_4);

 FUNC_3(&VAR_4->lock);

 return VAR_3;
}
