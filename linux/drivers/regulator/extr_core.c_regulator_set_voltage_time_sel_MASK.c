
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* desc; } ;
struct TYPE_4__ {int (* list_voltage ) (struct regulator_dev*,unsigned int) ;int (* set_voltage_time ) (struct regulator_dev*,int,int) ;} ;
struct TYPE_3__ {TYPE_2__* ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct regulator_dev*,int,int) ;
 int FUNC_1 (struct regulator_dev*,unsigned int) ;
 int FUNC_2 (struct regulator_dev*,unsigned int) ;
 int FUNC_3 (struct regulator_dev*,int,int) ;

int FUNC_4(struct regulator_dev *VAR_1,
       unsigned int VAR_2,
       unsigned int VAR_3)
{
 int VAR_4, VAR_5;


 if (!VAR_1->desc->ops->list_voltage)
  return -VAR_0;

 VAR_4 = VAR_1->desc->ops->list_voltage(VAR_1, VAR_2);
 VAR_5 = VAR_1->desc->ops->list_voltage(VAR_1, VAR_3);

 if (VAR_1->desc->ops->set_voltage_time)
  return VAR_1->desc->ops->set_voltage_time(VAR_1, VAR_4,
        VAR_5);
 else
  return FUNC_0(VAR_1, VAR_4, VAR_5);
}
