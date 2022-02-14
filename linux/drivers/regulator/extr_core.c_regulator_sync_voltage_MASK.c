
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regulator_voltage {int min_uV; int max_uV; } ;
struct regulator_dev {TYPE_2__* desc; } ;
struct regulator {struct regulator_voltage* voltage; struct regulator_dev* rdev; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int set_voltage_sel; int set_voltage; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct regulator_dev*,int,int) ;
 int FUNC_1 (struct regulator_dev*,int*,int*,int ) ;
 int FUNC_2 (struct regulator_dev*,int*,int*) ;
 int FUNC_3 (struct regulator_dev*) ;
 int FUNC_4 (struct regulator_dev*) ;

int FUNC_5(struct regulator *VAR_2)
{
 struct regulator_dev *VAR_3 = VAR_2->rdev;
 struct regulator_voltage *VAR_4 = &VAR_2->voltage[VAR_1];
 int VAR_5, VAR_6, VAR_7;

 FUNC_3(VAR_3);

 if (!VAR_3->desc->ops->set_voltage &&
     !VAR_3->desc->ops->set_voltage_sel) {
  VAR_5 = -VAR_0;
  goto out;
 }


 if (!VAR_4->min_uV && !VAR_4->max_uV) {
  VAR_5 = -VAR_0;
  goto out;
 }

 VAR_6 = VAR_4->min_uV;
 VAR_7 = VAR_4->max_uV;


 VAR_5 = FUNC_2(VAR_3, &VAR_6, &VAR_7);
 if (VAR_5 < 0)
  goto out;

 VAR_5 = FUNC_1(VAR_3, &VAR_6, &VAR_7, 0);
 if (VAR_5 < 0)
  goto out;

 VAR_5 = FUNC_0(VAR_3, VAR_6, VAR_7);

out:
 FUNC_4(VAR_3);
 return VAR_5;
}
