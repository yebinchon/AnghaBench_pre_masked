
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w1_slave {struct w1_master* master; } ;
struct w1_master {int bus_mutex; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct w1_slave* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct w1_slave*) ;
 int FUNC_4 (struct w1_master*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
      struct device_attribute *VAR_1, char *VAR_2)
{
 struct w1_slave *VAR_3 = FUNC_0(VAR_0);
 struct w1_master *VAR_4 = VAR_3->master;

 int VAR_5;
 ssize_t VAR_6;

 VAR_5 = FUNC_1(&VAR_4->bus_mutex);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_3(VAR_3);
 if (VAR_5 < 0) {
  VAR_6 = VAR_5;
  goto out_unlock;
 }

 *VAR_2 = VAR_5 ? '1' : '0';
 VAR_6 = 1;

out_unlock:
 FUNC_4(VAR_4);
 FUNC_2(&VAR_4->bus_mutex);

 return VAR_6;
}
