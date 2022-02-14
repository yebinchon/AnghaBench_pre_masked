
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_member {int mask; int shift; } ;
struct rpm_reg_parts {struct request_member ia; } ;
struct regulator_dev {int dummy; } ;
struct qcom_rpm_reg {int lock; struct rpm_reg_parts* parts; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct qcom_rpm_reg* FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct qcom_rpm_reg*,struct request_member const*,int) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_1, int VAR_2)
{
 struct qcom_rpm_reg *VAR_3 = FUNC_2(VAR_1);
 const struct rpm_reg_parts *VAR_4 = VAR_3->parts;
 const struct request_member *VAR_5 = &VAR_4->ia;
 int VAR_6 = VAR_2 / 1000;
 int VAR_7 = VAR_5->mask >> VAR_5->shift;
 int VAR_8;

 if (VAR_5->mask == 0)
  return -VAR_0;

 if (VAR_6 > VAR_7)
  VAR_6 = VAR_7;

 FUNC_0(&VAR_3->lock);
 VAR_8 = FUNC_3(VAR_3, VAR_5, VAR_6);
 FUNC_1(&VAR_3->lock);

 return VAR_8;
}
