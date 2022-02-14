
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
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
 int FUNC_1 (char*,int **,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct w1_slave*,int ,int *) ;

__attribute__((used)) static ssize_t FUNC_5(struct file *VAR_3, struct kobject *VAR_4,
     struct bin_attribute *VAR_5, char *VAR_6,
     loff_t VAR_7, size_t VAR_8)
{
 struct w1_slave *VAR_9 = FUNC_0(VAR_4);
 int VAR_10;
 u8 VAR_11[VAR_0 + 1 ];

 if (VAR_7 != 0)
  return 0;
 if (!VAR_6)
  return -VAR_1;

 FUNC_2(&VAR_9->master->bus_mutex);


 if (VAR_8 > VAR_0)
  VAR_8 = VAR_0;

 if (FUNC_4(VAR_9, 0, VAR_11) == 0) {
  FUNC_1(VAR_6, &VAR_11, VAR_8);
  VAR_10 = VAR_8;
 } else
  VAR_10 = -VAR_2;

 FUNC_3(&VAR_9->master->bus_mutex);

 return VAR_10;
}
