
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct regulator_dev {int dummy; } ;
struct qcom_rpm_reg {int load; int load_updated; } ;


 struct qcom_rpm_reg* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct qcom_rpm_reg*) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_0, int VAR_1)
{
 struct qcom_rpm_reg *VAR_2 = FUNC_0(VAR_0);
 u32 VAR_3 = VAR_2->load;
 int VAR_4;

 VAR_2->load = VAR_1;
 VAR_2->load_updated = 1;
 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4)
  VAR_2->load = VAR_3;

 return VAR_4;
}
