
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct bin_attribute {int dummy; } ;
typedef int ssize_t ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (struct kobject*) ;

__attribute__((used)) static ssize_t FUNC_2(struct file *VAR_2, struct kobject *VAR_3,
       struct bin_attribute *VAR_4, char *VAR_5,
       loff_t VAR_6, size_t VAR_7)
{
 if (VAR_7 != 1 || VAR_6 != 0)
  return -VAR_0;
 return FUNC_0(FUNC_1(VAR_3),
  VAR_1, VAR_5);
}
