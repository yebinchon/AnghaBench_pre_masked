
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct w1_slave {TYPE_1__* master; } ;
struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct bin_attribute {int dummy; } ;
typedef size_t ssize_t ;
typedef int loff_t ;
struct TYPE_2__ {int mutex; } ;


 struct w1_slave* FUNC_0 (struct kobject*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,char*,size_t) ;

__attribute__((used)) static ssize_t FUNC_4(struct file *VAR_0, struct kobject *VAR_1,
         struct bin_attribute *VAR_2, char *VAR_3, loff_t VAR_4,
         size_t VAR_5)
{
 struct w1_slave *VAR_6 = FUNC_0(VAR_1);

 FUNC_1(&VAR_6->master->mutex);
 FUNC_3(VAR_6->master, VAR_3, VAR_5);
 FUNC_2(&VAR_6->master->mutex);
 return VAR_5;
}
