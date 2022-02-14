
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w1_slave {int name; } ;
struct w1_reg_num {int dummy; } ;
struct w1_master {int mutex; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct device*,char*,int ) ;
 struct w1_master* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct device*,char const*,size_t,struct w1_reg_num*) ;
 int FUNC_5 (struct w1_master*,struct w1_reg_num*) ;
 struct w1_slave* FUNC_6 (struct w1_master*,struct w1_reg_num*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_1,
      struct device_attribute *VAR_2,
      const char *VAR_3, size_t VAR_4)
{
 struct w1_master *VAR_5 = FUNC_1(VAR_1);
 struct w1_reg_num VAR_6;
 struct w1_slave *VAR_7;
 ssize_t VAR_8 = VAR_4;

 if (FUNC_4(VAR_1, VAR_3, VAR_4, &VAR_6))
  return -VAR_0;

 FUNC_2(&VAR_5->mutex);
 VAR_7 = FUNC_6(VAR_5, &VAR_6);




 if (VAR_7) {
  FUNC_0(VAR_1, "Device %s already exists\n", VAR_7->name);
  VAR_8 = -VAR_0;
 } else {
  FUNC_5(VAR_5, &VAR_6);
 }
 FUNC_3(&VAR_5->mutex);

 return VAR_8;
}
