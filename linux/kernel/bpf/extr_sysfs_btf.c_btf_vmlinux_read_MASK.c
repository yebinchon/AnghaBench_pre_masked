
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct bin_attribute {int dummy; } ;
typedef size_t ssize_t ;
typedef scalar_t__ loff_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__,size_t) ;

__attribute__((used)) static ssize_t
FUNC_1(struct file *VAR_1, struct kobject *VAR_2,
   struct bin_attribute *VAR_3,
   char *VAR_4, loff_t VAR_5, size_t VAR_6)
{
 FUNC_0(VAR_4, VAR_0 + VAR_5, VAR_6);
 return VAR_6;
}
