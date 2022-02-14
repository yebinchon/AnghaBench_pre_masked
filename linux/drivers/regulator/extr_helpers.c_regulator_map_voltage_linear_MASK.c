
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regulator_dev {TYPE_2__* desc; } ;
struct TYPE_4__ {int n_voltages; scalar_t__ uV_step; int min_uV; TYPE_1__* ops; scalar_t__ linear_min_sel; } ;
struct TYPE_3__ {int (* list_voltage ) (struct regulator_dev*,int) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (struct regulator_dev*,int) ;

int FUNC_3(struct regulator_dev *VAR_1,
     int VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;


 if (VAR_1->desc->n_voltages == 1 && VAR_1->desc->uV_step == 0) {
  if (VAR_2 <= VAR_1->desc->min_uV && VAR_1->desc->min_uV <= VAR_3)
   return 0;
  else
   return -VAR_0;
 }

 if (!VAR_1->desc->uV_step) {
  FUNC_0(!VAR_1->desc->uV_step);
  return -VAR_0;
 }

 if (VAR_2 < VAR_1->desc->min_uV)
  VAR_2 = VAR_1->desc->min_uV;

 VAR_4 = FUNC_1(VAR_2 - VAR_1->desc->min_uV, VAR_1->desc->uV_step);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 += VAR_1->desc->linear_min_sel;


 VAR_5 = VAR_1->desc->ops->list_voltage(VAR_1, VAR_4);
 if (VAR_5 < VAR_2 || VAR_5 > VAR_3)
  return -VAR_0;

 return VAR_4;
}
