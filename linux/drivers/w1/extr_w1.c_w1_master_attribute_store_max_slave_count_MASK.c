
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w1_master {int max_slave_count; int mutex; int flags; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 struct w1_master* FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (char const*,int ,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_2,
 struct device_attribute *VAR_3, const char *VAR_4, size_t VAR_5)
{
 int VAR_6;
 struct w1_master *VAR_7 = FUNC_1(VAR_2);

 if (FUNC_2(VAR_4, 0, &VAR_6) || VAR_6 < 1)
  return -VAR_0;

 FUNC_3(&VAR_7->mutex);
 VAR_7->max_slave_count = VAR_6;

 FUNC_0(VAR_1, &VAR_7->flags);
 FUNC_4(&VAR_7->mutex);

 return VAR_5;
}
