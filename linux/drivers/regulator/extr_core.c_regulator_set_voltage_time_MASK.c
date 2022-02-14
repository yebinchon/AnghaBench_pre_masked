
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_ops {int (* set_voltage_time ) (struct regulator_dev*,int,int) ;int (* set_voltage_time_sel ) (struct regulator_dev*,int,int) ;int list_voltage; } ;
struct regulator_dev {TYPE_1__* desc; } ;
struct regulator {struct regulator_dev* rdev; } ;
struct TYPE_2__ {int n_voltages; struct regulator_ops* ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct regulator_dev*,int,int) ;
 int FUNC_1 (struct regulator*,int) ;
 int FUNC_2 (struct regulator_dev*,int,int) ;
 int FUNC_3 (struct regulator_dev*,int,int) ;

int FUNC_4(struct regulator *VAR_1,
          int VAR_2, int VAR_3)
{
 struct regulator_dev *VAR_4 = VAR_1->rdev;
 const struct regulator_ops *VAR_5 = VAR_4->desc->ops;
 int VAR_6 = -1;
 int VAR_7 = -1;
 int VAR_8;
 int VAR_9;

 if (VAR_5->set_voltage_time)
  return VAR_5->set_voltage_time(VAR_4, VAR_2, VAR_3);
 else if (!VAR_5->set_voltage_time_sel)
  return FUNC_0(VAR_4, VAR_2, VAR_3);


 if (!VAR_5->list_voltage || !VAR_4->desc->n_voltages)
  return -VAR_0;

 for (VAR_9 = 0; VAR_9 < VAR_4->desc->n_voltages; VAR_9++) {

  VAR_8 = FUNC_1(VAR_1, VAR_9);
  if (VAR_8 < 0)
   return -VAR_0;
  if (VAR_8 == 0)
   continue;
  if (VAR_8 == VAR_2)
   VAR_6 = VAR_9;
  if (VAR_8 == VAR_3)
   VAR_7 = VAR_9;
 }

 if (VAR_6 < 0 || VAR_7 < 0)
  return -VAR_0;

 return VAR_5->set_voltage_time_sel(VAR_4, VAR_6, VAR_7);
}
