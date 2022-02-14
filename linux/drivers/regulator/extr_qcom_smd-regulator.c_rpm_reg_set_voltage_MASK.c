
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct qcom_rpm_reg {int uV; int uv_updated; } ;


 struct qcom_rpm_reg* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct qcom_rpm_reg*) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_0,
          int VAR_1,
          int VAR_2,
          unsigned *VAR_3)
{
 struct qcom_rpm_reg *VAR_4 = FUNC_0(VAR_0);
 int VAR_5;
 int VAR_6 = VAR_4->uV;

 VAR_4->uV = VAR_1;
 VAR_4->uv_updated = 1;

 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5)
  VAR_4->uV = VAR_6;

 return VAR_5;
}
