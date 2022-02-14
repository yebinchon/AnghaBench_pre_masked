
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w1_slave {int dummy; } ;
struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct bin_attribute {int dummy; } ;
typedef int ssize_t ;
typedef scalar_t__ loff_t ;
typedef int int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct w1_slave* FUNC_0 (struct kobject*) ;
 int FUNC_1 (char*,size_t,char*,int) ;
 scalar_t__ FUNC_2 (struct w1_slave*,int*) ;

__attribute__((used)) static ssize_t FUNC_3(struct file *VAR_2, struct kobject *VAR_3,
    struct bin_attribute *VAR_4, char *VAR_5,
    loff_t VAR_6, size_t VAR_7)
{
 struct w1_slave *VAR_8 = FUNC_0(VAR_3);
 int VAR_9;
 int16_t VAR_10;

 if (VAR_6 != 0)
  return 0;
 if (!VAR_5)
  return -VAR_0;

 if (FUNC_2(VAR_8, &VAR_10) == 0) {
  VAR_9 = FUNC_1(VAR_5, VAR_7, "%i\n", VAR_10);
 } else
  VAR_9 = -VAR_1;

 return VAR_9;
}
