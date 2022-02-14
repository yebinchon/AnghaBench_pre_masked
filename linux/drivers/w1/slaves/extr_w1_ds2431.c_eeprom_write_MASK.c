
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
struct TYPE_2__ {int bus_mutex; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct w1_slave* FUNC_0 (struct kobject*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 size_t FUNC_4 (int,size_t,int ) ;
 scalar_t__ FUNC_5 (struct w1_slave*,int,int,char*) ;
 scalar_t__ FUNC_6 (struct w1_slave*,int,int,char*) ;

__attribute__((used)) static ssize_t FUNC_7(struct file *VAR_4, struct kobject *VAR_5,
       struct bin_attribute *VAR_6, char *VAR_7,
       loff_t VAR_8, size_t VAR_9)
{
 struct w1_slave *VAR_10 = FUNC_0(VAR_5);
 int VAR_11, VAR_12;
 int VAR_13;

 VAR_9 = FUNC_4(VAR_8, VAR_9, VAR_1);
 if (VAR_9 == 0)
  return 0;

 FUNC_2(&VAR_10->master->bus_mutex);


 VAR_11 = VAR_8;
 VAR_12 = VAR_9;
 while (VAR_12 > 0) {


  if (VAR_12 < VAR_3 || VAR_11 & VAR_2) {
   char VAR_14[VAR_3];


   if (FUNC_5(VAR_10, VAR_11 & ~VAR_2,
     VAR_3, VAR_14)) {
    VAR_9 = -VAR_0;
    goto out_up;
   }


   VAR_13 = VAR_3 -
    (VAR_11 & VAR_2);

   if (VAR_13 > VAR_12)
    VAR_13 = VAR_12;

   FUNC_1(&VAR_14[VAR_11 & VAR_2], VAR_7, VAR_13);
   if (FUNC_6(VAR_10, VAR_11 & ~VAR_2,
     VAR_3, VAR_14) < 0) {
    VAR_9 = -VAR_0;
    goto out_up;
   }
  } else {

   VAR_13 = VAR_3;
   if (FUNC_6(VAR_10, VAR_11, VAR_13, VAR_7) < 0) {
    VAR_9 = -VAR_0;
    goto out_up;
   }
  }
  VAR_7 += VAR_13;
  VAR_11 += VAR_13;
  VAR_12 -= VAR_13;
 }

out_up:
 FUNC_3(&VAR_10->master->bus_mutex);

 return VAR_9;
}
