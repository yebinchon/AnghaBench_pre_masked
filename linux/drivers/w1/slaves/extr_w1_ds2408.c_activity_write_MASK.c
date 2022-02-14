
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct w1_slave {TYPE_1__* master; } ;
struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct bin_attribute {int dummy; } ;
typedef int ssize_t ;
typedef scalar_t__ loff_t ;
struct TYPE_4__ {int bus_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct w1_slave* FUNC_0 (struct kobject*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (struct w1_slave*) ;
 int FUNC_6 (TYPE_1__*,int ) ;

__attribute__((used)) static ssize_t FUNC_7(struct file *VAR_5, struct kobject *VAR_6,
         struct bin_attribute *VAR_7, char *VAR_8,
         loff_t VAR_9, size_t VAR_10)
{
 struct w1_slave *VAR_11 = FUNC_0(VAR_6);
 unsigned int VAR_12 = VAR_3;

 if (VAR_10 != 1 || VAR_9 != 0)
  return -VAR_0;

 FUNC_1(&VAR_11->master->bus_mutex);

 if (FUNC_5(VAR_11))
  goto error;

 while (VAR_12--) {
  FUNC_6(VAR_11->master, VAR_2);
  if (FUNC_3(VAR_11->master) == VAR_4) {
   FUNC_2(&VAR_11->master->bus_mutex);
   return 1;
  }
  if (FUNC_4(VAR_11->master))
   goto error;
 }

error:
 FUNC_2(&VAR_11->master->bus_mutex);
 return -VAR_1;
}
