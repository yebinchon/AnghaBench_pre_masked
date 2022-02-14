
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct w1_slave {int dummy; } ;
struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct bin_attribute {int dummy; } ;
typedef int ssize_t ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct w1_slave* FUNC_0 (struct kobject*) ;
 int FUNC_1 (char*,size_t,char*,int) ;
 scalar_t__ FUNC_2 (struct w1_slave*,int ,int*) ;

__attribute__((used)) static ssize_t FUNC_3(struct file *VAR_3, struct kobject *VAR_4,
   struct bin_attribute *VAR_5, char *VAR_6,
   loff_t VAR_7, size_t VAR_8)
{
 struct w1_slave *VAR_9 = FUNC_0(VAR_4);
 int VAR_10;
 uint16_t VAR_11;

 if (VAR_7 != 0)
  return 0;
 if (!VAR_6)
  return -VAR_1;

 if (FUNC_2(VAR_9, VAR_0, &VAR_11) == 0) {
  VAR_10 = FUNC_1(VAR_6, VAR_8, "%u\n", VAR_11);
 } else
  VAR_10 = -VAR_2;

 return VAR_10;
}
