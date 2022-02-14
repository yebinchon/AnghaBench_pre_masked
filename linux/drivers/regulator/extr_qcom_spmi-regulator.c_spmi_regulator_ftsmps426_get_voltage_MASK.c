
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct spmi_voltage_range {int set_point_min_uV; int step_uV; } ;
struct spmi_regulator {TYPE_1__* set_points; } ;
struct regulator_dev {int dummy; } ;
struct TYPE_2__ {struct spmi_voltage_range* range; } ;


 int VAR_0 ;
 struct spmi_regulator* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct spmi_regulator*,int ,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_1)
{
 struct spmi_regulator *VAR_2 = FUNC_0(VAR_1);
 const struct spmi_voltage_range *VAR_3;
 u8 VAR_4[2];
 int VAR_5;

 FUNC_1(VAR_2, VAR_0, VAR_4, 2);

 VAR_5 = (((unsigned int)VAR_4[1] << 8) | (unsigned int)VAR_4[0]) * 1000;
 VAR_3 = VAR_2->set_points->range;

 return (VAR_5 - VAR_3->set_point_min_uV) / VAR_3->step_uV;
}
