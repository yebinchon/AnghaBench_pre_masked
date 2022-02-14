
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct bin_attribute {int dummy; } ;
typedef int ssize_t ;
typedef int loff_t ;


 int FUNC_0 (char*,size_t,int *,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static ssize_t FUNC_3(struct file *VAR_3, struct kobject *VAR_4,
        struct bin_attribute *VAR_5,
        char *VAR_6, loff_t VAR_7, size_t VAR_8)
{
 ssize_t VAR_9;

 FUNC_1(&VAR_2);
 VAR_9 = FUNC_0(VAR_6, VAR_8, &VAR_7, VAR_0,
     VAR_1);
 FUNC_2(&VAR_2);
 return VAR_9;
}
