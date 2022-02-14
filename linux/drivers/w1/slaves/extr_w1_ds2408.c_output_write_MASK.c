
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef char u8 ;
struct w1_slave {int dev; TYPE_1__* master; } ;
struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct bin_attribute {int dummy; } ;
typedef int ssize_t ;
typedef scalar_t__ loff_t ;
struct TYPE_4__ {int bus_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,char*,...) ;
 struct w1_slave* FUNC_1 (struct kobject*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct w1_slave*,char) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (struct w1_slave*) ;
 int FUNC_8 (TYPE_1__*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_9(struct file *VAR_5, struct kobject *VAR_6,
       struct bin_attribute *VAR_7, char *VAR_8,
       loff_t VAR_9, size_t VAR_10)
{
 struct w1_slave *VAR_11 = FUNC_1(VAR_6);
 u8 VAR_12[3];
 unsigned int VAR_13 = VAR_3;
 ssize_t VAR_14 = -VAR_1;

 if (VAR_10 != 1 || VAR_9 != 0)
  return -VAR_0;

 FUNC_0(&VAR_11->dev, "locking mutex for write_output");
 FUNC_2(&VAR_11->master->bus_mutex);
 FUNC_0(&VAR_11->dev, "mutex locked");

 if (FUNC_7(VAR_11))
  goto out;

 do {
  VAR_12[0] = VAR_2;
  VAR_12[1] = *VAR_8;
  VAR_12[2] = ~(*VAR_8);

  FUNC_8(VAR_11->master, VAR_12, 3);

  if (FUNC_5(VAR_11->master) == VAR_4 &&
      FUNC_4(VAR_11, *VAR_8)) {
   VAR_14 = 1;
   goto out;
  }

  if (FUNC_6(VAR_11->master))
   goto out;

 } while (--VAR_13);

out:
 FUNC_3(&VAR_11->master->bus_mutex);

 FUNC_0(&VAR_11->dev, "%s, mutex unlocked retries:%d\n",
  (VAR_14 > 0) ? "succeeded" : "error", VAR_13);

 return VAR_14;
}
