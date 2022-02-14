
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct w1_slave {struct w1_master* master; } ;
struct w1_master {int bus_mutex; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int) ;
 struct w1_slave* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct w1_slave*,int) ;
 int FUNC_5 (struct w1_master*) ;
 int FUNC_6 (struct w1_master*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_2,
     struct device_attribute *VAR_3, char *VAR_4)
{
 struct w1_slave *VAR_5 = FUNC_1(VAR_2);
 struct w1_master *VAR_6 = VAR_5->master;

 int VAR_7;
 ssize_t VAR_8;
 u8 VAR_9;

 VAR_7 = FUNC_2(&VAR_6->bus_mutex);
 if (VAR_7)
  return VAR_7;

 if (!FUNC_4(VAR_5, 0)) {
  VAR_8 = -VAR_1;
  goto out_unlock;
 }

 VAR_9 = FUNC_5(VAR_6);
 if (VAR_9 != 0 &&
     VAR_9 != 0xff) {
  FUNC_0(VAR_2, "non-consistent state %x\n", VAR_9);
  VAR_8 = -VAR_0;
  goto out_unlock;
 }

 *VAR_4 = VAR_9 ? '1' : '0';
 VAR_8 = 1;

out_unlock:
 FUNC_6(VAR_6);
 FUNC_3(&VAR_6->bus_mutex);

 return VAR_8;
}
