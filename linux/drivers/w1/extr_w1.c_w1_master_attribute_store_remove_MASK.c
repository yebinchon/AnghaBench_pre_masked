
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w1_slave {int dummy; } ;
struct w1_reg_num {scalar_t__ id; int family; } ;
struct w1_master {int mutex; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct device*,char*,int ,unsigned long long) ;
 struct w1_master* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct device*,char const*,size_t,struct w1_reg_num*) ;
 size_t FUNC_5 (struct w1_slave*) ;
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
  VAR_8 = FUNC_5(VAR_7);

  if (VAR_8 == 0)
   VAR_8 = VAR_4;
 } else {
  FUNC_0(VAR_1, "Device %02x-%012llx doesn't exists\n", VAR_6.family,
   (unsigned long long)VAR_6.id);
  VAR_8 = -VAR_0;
 }
 FUNC_3(&VAR_5->mutex);

 return VAR_8;
}
