
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct bin_attribute {int private; } ;
typedef int ssize_t ;
typedef int loff_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct kobject*) ;
 int FUNC_2 (int ,int ,size_t,char*) ;
 int VAR_0 ;

__attribute__((used)) static ssize_t
FUNC_3(struct file *VAR_1, struct kobject *VAR_2,
  struct bin_attribute *VAR_3,
  char *VAR_4, loff_t VAR_5, size_t VAR_6)
{
 FUNC_0(FUNC_1(VAR_2), VAR_0);

 return FUNC_2(VAR_3->private, VAR_5, VAR_6, VAR_4);
}
