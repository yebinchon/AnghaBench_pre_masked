
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_ops {int (* get_voltage_sel ) (struct regulator_dev*) ;int (* set_voltage_sel ) (struct regulator_dev*,int) ;} ;
struct regulator_dev {TYPE_1__* desc; } ;
struct TYPE_2__ {int vsel_step; struct regulator_ops* ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct regulator_dev*,int,int) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct regulator_dev*,int) ;
 int FUNC_4 (struct regulator_dev*,int) ;
 int FUNC_5 (struct regulator_dev*,int) ;

__attribute__((used)) static int FUNC_6(struct regulator_dev *VAR_1,
        int VAR_2, int VAR_3)
{
 const struct regulator_ops *VAR_4 = VAR_1->desc->ops;
 int VAR_5, VAR_6, VAR_7, VAR_8;


 if (!FUNC_1(VAR_1))
  goto final_set;

 if (!VAR_4->get_voltage_sel)
  return -VAR_0;

 VAR_6 = VAR_4->get_voltage_sel(VAR_1);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_5 = VAR_3 - VAR_6;
 if (VAR_5 == 0)
  return 0;

 if (VAR_5 > 0) {

  for (VAR_7 = VAR_6 + VAR_1->desc->vsel_step;
       VAR_7 < VAR_3;
       VAR_7 += VAR_1->desc->vsel_step) {






   VAR_8 = VAR_4->set_voltage_sel(VAR_1, VAR_7);
   if (VAR_8)
    goto try_revert;
  }
 } else {

  for (VAR_7 = VAR_6 - VAR_1->desc->vsel_step;
       VAR_7 > VAR_3;
       VAR_7 -= VAR_1->desc->vsel_step) {
   VAR_8 = VAR_4->set_voltage_sel(VAR_1, VAR_7);
   if (VAR_8)
    goto try_revert;
  }
 }

final_set:

 return FUNC_0(VAR_1, VAR_2, VAR_3);

try_revert:




 (void)VAR_4->set_voltage_sel(VAR_1, VAR_6);
 return VAR_8;
}
