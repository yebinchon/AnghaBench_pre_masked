
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regulator_dev {TYPE_2__* desc; } ;
struct TYPE_4__ {int n_voltages; TYPE_1__* ops; } ;
struct TYPE_3__ {int (* list_voltage ) (struct regulator_dev*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct regulator_dev*,int) ;

int FUNC_1(struct regulator_dev *VAR_1,
     int VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_1->desc->n_voltages; VAR_4++) {
  VAR_5 = VAR_1->desc->ops->list_voltage(VAR_1, VAR_4);
  if (VAR_5 < 0)
   continue;

  if (VAR_5 > VAR_3)
   break;

  if (VAR_5 >= VAR_2 && VAR_5 <= VAR_3)
   return VAR_4;
 }

 return -VAR_0;
}
