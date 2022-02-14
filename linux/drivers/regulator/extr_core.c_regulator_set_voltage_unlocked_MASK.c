
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t suspend_state_t ;
struct regulator_voltage {int min_uV; int max_uV; } ;
struct regulator_dev {TYPE_2__* desc; } ;
struct regulator {struct regulator_voltage* voltage; struct regulator_dev* rdev; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int set_voltage_sel; int set_voltage; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct regulator_dev*,size_t) ;
 int FUNC_1 (struct regulator_dev*,int*,int*) ;
 int FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct regulator_dev*,int ) ;

__attribute__((used)) static int FUNC_4(struct regulator *VAR_2,
       int VAR_3, int VAR_4,
       suspend_state_t VAR_5)
{
 struct regulator_dev *VAR_6 = VAR_2->rdev;
 struct regulator_voltage *VAR_7 = &VAR_2->voltage[VAR_5];
 int VAR_8 = 0;
 int VAR_9, VAR_10;
 int VAR_11;





 if (VAR_7->min_uV == VAR_3 && VAR_7->max_uV == VAR_4)
  goto out;





 if (!FUNC_3(VAR_6, VAR_1)) {
  VAR_11 = FUNC_2(VAR_6);
  if (VAR_3 <= VAR_11 && VAR_11 <= VAR_4) {
   VAR_7->min_uV = VAR_3;
   VAR_7->max_uV = VAR_4;
   goto out;
  }
 }


 if (!VAR_6->desc->ops->set_voltage &&
     !VAR_6->desc->ops->set_voltage_sel) {
  VAR_8 = -VAR_0;
  goto out;
 }


 VAR_8 = FUNC_1(VAR_6, &VAR_3, &VAR_4);
 if (VAR_8 < 0)
  goto out;


 VAR_9 = VAR_7->min_uV;
 VAR_10 = VAR_7->max_uV;
 VAR_7->min_uV = VAR_3;
 VAR_7->max_uV = VAR_4;


 VAR_8 = FUNC_0(VAR_6, VAR_5);
 if (VAR_8 < 0) {
  VAR_7->min_uV = VAR_9;
  VAR_7->max_uV = VAR_10;
 }

out:
 return VAR_8;
}
