
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct w1_slave {TYPE_1__* master; } ;
struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct bin_attribute {int dummy; } ;
typedef int ssize_t ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct w1_slave* FUNC_0 (struct kobject*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct w1_slave*,int ,size_t,char*) ;

__attribute__((used)) static ssize_t FUNC_4(struct file *VAR_2, struct kobject *VAR_3,
   struct bin_attribute *VAR_4, char *VAR_5, loff_t VAR_6,
   size_t VAR_7)

{
 struct w1_slave *VAR_8 = FUNC_0(VAR_3);
 int VAR_9;


 if (VAR_6 != 0 || VAR_7 != 1 || VAR_5 == ((void*)0))
  return -VAR_0;

 FUNC_1(&VAR_8->master->mutex);
 VAR_9 = FUNC_3(VAR_8, VAR_1, VAR_7, VAR_5);
 FUNC_2(&VAR_8->master->mutex);

 return VAR_9;
}
