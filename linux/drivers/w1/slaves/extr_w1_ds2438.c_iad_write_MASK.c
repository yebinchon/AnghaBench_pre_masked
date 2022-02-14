
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
struct TYPE_2__ {int bus_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct w1_slave* FUNC_0 (struct kobject*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct w1_slave*,int ,char) ;

__attribute__((used)) static ssize_t FUNC_4(struct file *VAR_3, struct kobject *VAR_4,
    struct bin_attribute *VAR_5, char *VAR_6,
    loff_t VAR_7, size_t VAR_8)
{
 struct w1_slave *VAR_9 = FUNC_0(VAR_4);
 int VAR_10;

 if (VAR_8 != 1 || VAR_7 != 0)
  return -VAR_1;

 FUNC_1(&VAR_9->master->bus_mutex);

 if (FUNC_3(VAR_9, VAR_0, *VAR_6 & 0x01) == 0)
  VAR_10 = 1;
 else
  VAR_10 = -VAR_2;

 FUNC_2(&VAR_9->master->bus_mutex);

 return VAR_10;
}
