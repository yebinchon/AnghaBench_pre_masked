
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct w1_slave {TYPE_1__* master; } ;
struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct bin_attribute {int dummy; } ;
typedef int ssize_t ;
typedef scalar_t__ loff_t ;
typedef int ack ;
struct TYPE_3__ {int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct w1_slave* FUNC_0 (struct kobject*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int*,int) ;
 scalar_t__ FUNC_4 (struct w1_slave*) ;
 int FUNC_5 (TYPE_1__*,int*,int) ;

__attribute__((used)) static ssize_t FUNC_6(struct file *VAR_3, struct kobject *VAR_4,
    struct bin_attribute *VAR_5, char *VAR_6, loff_t VAR_7,
    size_t VAR_8)

{
 struct w1_slave *VAR_9 = FUNC_0(VAR_4);
 u8 VAR_10[3];
 u8 VAR_11;


 if (VAR_7 != 0 || VAR_8 != 1 || VAR_6 == ((void*)0))
  return -VAR_0;

 FUNC_1(&VAR_9->master->mutex);


 if (FUNC_4(VAR_9)) {
  FUNC_2(&VAR_9->master->mutex);
  return -1;
 }


 *VAR_6 = *VAR_6 | 0xFC;

 VAR_10[0] = VAR_2;
 VAR_10[1] = *VAR_6;
 VAR_10[2] = ~(*VAR_6);
 FUNC_5(VAR_9->master, VAR_10, 3);

 FUNC_3(VAR_9->master, &VAR_11, sizeof(VAR_11));

 FUNC_2(&VAR_9->master->mutex);


 if (VAR_11 != 0xAA)
  return -VAR_1;

 return VAR_8;
}
