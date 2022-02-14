
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct w1_slave {TYPE_1__* master; } ;
struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct bin_attribute {int dummy; } ;
typedef int ssize_t ;
typedef scalar_t__ loff_t ;
struct TYPE_3__ {int bus_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 struct w1_slave* FUNC_1 (struct kobject*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int*,int) ;
 scalar_t__ FUNC_5 (struct w1_slave*) ;
 int FUNC_6 (TYPE_1__*,int*,int) ;

__attribute__((used)) static ssize_t FUNC_7(
 struct file *VAR_3, struct kobject *VAR_4,
 struct bin_attribute *VAR_5,
 char *VAR_6, loff_t VAR_7, size_t VAR_8)
{
 u8 VAR_9[6]={VAR_2, 7, 0, 0, 0, 0};
 struct w1_slave *VAR_10 = FUNC_1(VAR_4);
 u16 VAR_11=0;
 int VAR_12;
 ssize_t VAR_13=1;

 if (VAR_7 != 0)
  return 0;
 if (!VAR_6)
  return -VAR_0;

 FUNC_2(&VAR_10->master->bus_mutex);

 if (FUNC_5(VAR_10)) {
  FUNC_3(&VAR_10->master->bus_mutex);
  return -VAR_1;
 }

 FUNC_6(VAR_10->master, VAR_9, 3);
 FUNC_4(VAR_10->master, VAR_9+3, 3);
 for (VAR_12=0; VAR_12<6; VAR_12++)
  VAR_11=FUNC_0(VAR_11, VAR_9[VAR_12]);
 if (VAR_11==0xb001)
  *VAR_6=((VAR_9[3]>>5)&3)|0x30;
 else
  VAR_13=-VAR_1;

 FUNC_3(&VAR_10->master->bus_mutex);

 return VAR_13;
}
