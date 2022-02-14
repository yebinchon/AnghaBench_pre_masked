
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef char u8 ;
struct w1_slave {TYPE_1__* master; } ;
struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct bin_attribute {int dummy; } ;
typedef int ssize_t ;
typedef scalar_t__ loff_t ;
struct TYPE_4__ {int bus_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 unsigned int VAR_5 ;
 struct w1_slave* FUNC_0 (struct kobject*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 char FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (struct w1_slave*) ;
 int FUNC_6 (TYPE_1__*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_7(struct file *VAR_6, struct kobject *VAR_7,
        struct bin_attribute *VAR_8, char *VAR_9,
        loff_t VAR_10, size_t VAR_11)
{
 struct w1_slave *VAR_12 = FUNC_0(VAR_7);
 u8 VAR_13[4];
 unsigned int VAR_14 = VAR_5;

 if (VAR_11 != 1 || VAR_10 != 0)
  return -VAR_0;

 FUNC_1(&VAR_12->master->bus_mutex);

 if (FUNC_5(VAR_12))
  goto error;

 while (VAR_14--) {
  VAR_13[0] = VAR_3;
  VAR_13[1] = VAR_4;
  VAR_13[2] = 0;
  VAR_13[3] = *VAR_9;

  FUNC_6(VAR_12->master, VAR_13, 4);
  if (FUNC_4(VAR_12->master))
   goto error;

  VAR_13[0] = VAR_2;
  VAR_13[1] = VAR_4;
  VAR_13[2] = 0;

  FUNC_6(VAR_12->master, VAR_13, 3);
  if (FUNC_3(VAR_12->master) == *VAR_9) {

   FUNC_2(&VAR_12->master->bus_mutex);
   return 1;
  }
 }
error:
 FUNC_2(&VAR_12->master->bus_mutex);

 return -VAR_1;
}
