
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct w1_slave {TYPE_1__* master; struct w1_f1C_data* family_data; } ;
struct w1_f1C_data {int * memory; } ;
struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct bin_attribute {int dummy; } ;
typedef size_t ssize_t ;
typedef size_t loff_t ;
struct TYPE_2__ {int mutex; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct w1_slave* FUNC_0 (struct kobject*) ;
 int FUNC_1 (char*,int *,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_3 ;
 size_t FUNC_4 (size_t,size_t,int ) ;
 size_t FUNC_5 (struct w1_slave*,size_t,size_t,char*) ;
 scalar_t__ FUNC_6 (struct w1_slave*,struct w1_f1C_data*,int) ;

__attribute__((used)) static ssize_t FUNC_7(struct file *VAR_4, struct kobject *VAR_5,
      struct bin_attribute *VAR_6, char *VAR_7,
      loff_t VAR_8, size_t VAR_9)
{
 struct w1_slave *VAR_10 = FUNC_0(VAR_5);
 struct w1_f1C_data *VAR_11 = VAR_10->family_data;
 int VAR_12, VAR_13, VAR_14;

 VAR_9 = FUNC_4(VAR_8, VAR_9, VAR_1);
 if (VAR_9 == 0)
  return 0;

 FUNC_2(&VAR_10->master->mutex);

 if (VAR_3) {
  VAR_13 = (VAR_8 >> VAR_2);
  VAR_14 = (VAR_8 + VAR_9 - 1) >> VAR_2;
  for (VAR_12 = VAR_13; VAR_12 <= VAR_14; VAR_12++) {
   if (FUNC_6(VAR_10, VAR_11, VAR_12)) {
    VAR_9 = -VAR_0;
    goto out_up;
   }
  }
  FUNC_1(VAR_7, &VAR_11->memory[VAR_8], VAR_9);
 } else {
  VAR_9 = FUNC_5(VAR_10, VAR_8, VAR_9, VAR_7);
 }

out_up:
 FUNC_3(&VAR_10->master->mutex);

 return VAR_9;
}
