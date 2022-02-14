
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct w1_slave {int reg_num; struct w1_master* master; } ;
struct w1_master {int bus_mutex; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int dev_addr ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct w1_slave* FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char const*,char*,unsigned int*,int*) ;
 int FUNC_6 (struct w1_slave*) ;
 scalar_t__ FUNC_7 (struct w1_master*) ;
 int FUNC_8 (struct w1_master*,int *,int) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_3,
       struct device_attribute *VAR_4,
       const char *VAR_5, size_t VAR_6)
{
 struct w1_slave *VAR_7 = FUNC_0(VAR_3);
 struct w1_master *VAR_8 = VAR_7->master;

 int VAR_9, VAR_10;
 unsigned int VAR_11;
 ssize_t VAR_12;

 if (VAR_6 < 1)
  return -VAR_0;

 if (FUNC_5(VAR_5, " %u%n", &VAR_11, &VAR_9) < 1)
  return -VAR_0;

 if (VAR_11 != 0 && VAR_11 != 1)
  return -VAR_0;

 VAR_12 = VAR_9;

 VAR_9 = FUNC_3(&VAR_8->bus_mutex);
 if (VAR_9)
  return VAR_9;

 VAR_10 = FUNC_6(VAR_7);
 if (VAR_10 < 0) {
  VAR_12 = VAR_10;
  goto out_unlock;
 }

 if (VAR_10 == VAR_11)
  goto out_unlock;

 if (FUNC_7(VAR_8) != 0) {
  VAR_12 = -VAR_1;
  goto out_unlock;
 }





 do {
  u64 VAR_13 = FUNC_1(*(u64 *)&VAR_7->reg_num);
  u8 VAR_14[9];

  VAR_14[0] = VAR_2;
  FUNC_2(&VAR_14[1], &VAR_13, sizeof(VAR_13));

  FUNC_8(VAR_8, VAR_14, sizeof(VAR_14));
 } while (0);

out_unlock:
 FUNC_7(VAR_8);
 FUNC_4(&VAR_8->bus_mutex);

 return VAR_12;
}
