
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct bin_attribute {int dummy; } ;
typedef size_t ssize_t ;
typedef scalar_t__ loff_t ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,char*,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_2 ;
 size_t FUNC_3 (scalar_t__) ;
 int VAR_3 ;

__attribute__((used)) static ssize_t FUNC_4(struct file *VAR_4, struct kobject *VAR_5,
         struct bin_attribute *VAR_6,
         char *VAR_7, loff_t VAR_8, size_t VAR_9)
{
 ssize_t VAR_10;

 if ((VAR_8 + VAR_9) > VAR_1)
  return -VAR_0;

 FUNC_1(&VAR_3);

 VAR_10 = FUNC_3(VAR_8 + VAR_9);
 if (VAR_10)
  goto out;

 FUNC_0(VAR_2 + VAR_8, VAR_7, VAR_9);
 VAR_10 = VAR_9;
out:
 FUNC_2(&VAR_3);
 return VAR_10;
}
