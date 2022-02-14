
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct qcom_rpm_reg {int is_enabled; int enabled_updated; } ;


 struct qcom_rpm_reg* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct qcom_rpm_reg*) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_0)
{
 struct qcom_rpm_reg *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;

 VAR_1->is_enabled = 1;
 VAR_1->enabled_updated = 1;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2)
  VAR_1->is_enabled = 0;

 return VAR_2;
}
