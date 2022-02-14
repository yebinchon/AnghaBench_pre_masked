
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ics932s401_data {unsigned long sensors_last_updated; int sensors_valid; int* regs; int lock; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ics932s401_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,size_t) ;
 unsigned long VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 size_t* VAR_3 ;
 scalar_t__ FUNC_4 (unsigned long,scalar_t__) ;
 struct i2c_client* FUNC_5 (struct device*) ;

__attribute__((used)) static struct ics932s401_data *FUNC_6(struct device *VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_5(VAR_4);
 struct ics932s401_data *VAR_6 = FUNC_0(VAR_5);
 unsigned long VAR_7 = VAR_2;
 int VAR_8, VAR_9;

 FUNC_2(&VAR_6->lock);
 if (FUNC_4(VAR_7, VAR_6->sensors_last_updated +
  VAR_1)
  && VAR_6->sensors_valid)
  goto out;






 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  VAR_9 = FUNC_1(VAR_5, VAR_3[VAR_8]);
  if (VAR_9 < 0)
   VAR_6->regs[VAR_3[VAR_8]] = 0;
  VAR_6->regs[VAR_3[VAR_8]] = VAR_9 >> 8;
 }

 VAR_6->sensors_last_updated = VAR_7;
 VAR_6->sensors_valid = 1;

out:
 FUNC_3(&VAR_6->lock);
 return VAR_6;
}
