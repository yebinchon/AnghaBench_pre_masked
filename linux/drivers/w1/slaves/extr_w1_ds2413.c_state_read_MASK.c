
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct w1_slave {int dev; TYPE_2__* master; } ;
struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_5__ {int name; } ;
struct bin_attribute {TYPE_1__ attr; } ;
typedef int ssize_t ;
typedef scalar_t__ loff_t ;
struct TYPE_6__ {int bus_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,unsigned int) ;
 struct w1_slave* FUNC_2 (struct kobject*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (struct w1_slave*) ;
 int FUNC_8 (TYPE_2__*,int ) ;

__attribute__((used)) static ssize_t FUNC_9(struct file *VAR_5, struct kobject *VAR_6,
     struct bin_attribute *VAR_7, char *VAR_8, loff_t VAR_9,
     size_t VAR_10)
{
 struct w1_slave *VAR_11 = FUNC_2(VAR_6);
 unsigned int VAR_12 = VAR_4;
 ssize_t VAR_13 = -VAR_1;
 u8 VAR_14;

 FUNC_0(&VAR_11->dev,
  "Reading %s kobj: %p, off: %0#10x, count: %zu, buff addr: %p",
  VAR_7->attr.name, VAR_6, (unsigned int)VAR_9, VAR_10, VAR_8);

 if (VAR_9 != 0)
  return 0;
 if (!VAR_8)
  return -VAR_0;

 FUNC_3(&VAR_11->master->bus_mutex);
 FUNC_0(&VAR_11->dev, "mutex locked");

next:
 if (FUNC_7(VAR_11))
  goto out;

 while (VAR_12--) {
  FUNC_8(VAR_11->master, VAR_2);

  VAR_14 = FUNC_5(VAR_11->master);
  if ((VAR_14 & 0x0F) == ((~VAR_14 >> 4) & 0x0F)) {

   *VAR_8 = VAR_14;
   VAR_13 = 1;
   goto out;
  } else if (VAR_14 == VAR_3) {

   FUNC_1(&VAR_11->dev, "slave device did not respond to PIO_ACCESS_READ, " "reselecting, retries left: %d\n", VAR_12);

   goto next;
  }

  if (FUNC_6(VAR_11->master))
   goto out;

  FUNC_1(&VAR_11->dev, "PIO_ACCESS_READ error, retries left: %d\n", VAR_12);
 }

out:
 FUNC_4(&VAR_11->master->bus_mutex);
 FUNC_0(&VAR_11->dev, "%s, mutex unlocked, retries: %d\n",
  (VAR_13 > 0) ? "succeeded" : "error", VAR_12);
 return VAR_13;
}
