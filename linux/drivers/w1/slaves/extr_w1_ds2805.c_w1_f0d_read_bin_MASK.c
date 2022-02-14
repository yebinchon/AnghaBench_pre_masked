
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


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct w1_slave* FUNC_0 (struct kobject*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 size_t FUNC_3 (int,size_t,int ) ;
 scalar_t__ FUNC_4 (struct w1_slave*,int,int,char*) ;

__attribute__((used)) static ssize_t FUNC_5(struct file *VAR_3, struct kobject *VAR_4,
          struct bin_attribute *VAR_5,
          char *VAR_6, loff_t VAR_7, size_t VAR_8)
{
 struct w1_slave *VAR_9 = FUNC_0(VAR_4);
 int VAR_10 = VAR_8;

 VAR_8 = FUNC_3(VAR_7, VAR_8, VAR_1);
 if (VAR_8 == 0)
  return 0;

 FUNC_1(&VAR_9->master->mutex);


 while (VAR_10 > 0) {
  int VAR_11;

  if (VAR_10 >= VAR_2)
   VAR_11 = VAR_2;
  else
   VAR_11 = VAR_10;

  if (FUNC_4(VAR_9, VAR_7, VAR_11, VAR_6) < 0) {
   VAR_8 = -VAR_0;
   break;
  }

  VAR_10 -= VAR_2;
  VAR_6 += VAR_2;
  VAR_7 += VAR_2;
 }

 FUNC_2(&VAR_9->master->mutex);

 return VAR_8;
}
