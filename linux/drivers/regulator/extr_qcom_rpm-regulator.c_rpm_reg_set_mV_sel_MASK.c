
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_member {scalar_t__ mask; } ;
struct rpm_reg_parts {struct request_member mV; } ;
struct regulator_dev {int dummy; } ;
struct qcom_rpm_reg {int uV; int lock; scalar_t__ is_enabled; struct rpm_reg_parts* parts; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct qcom_rpm_reg* FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct regulator_dev*,unsigned int) ;
 int FUNC_4 (struct qcom_rpm_reg*,struct request_member const*,int) ;

__attribute__((used)) static int FUNC_5(struct regulator_dev *VAR_1,
         unsigned VAR_2)
{
 struct qcom_rpm_reg *VAR_3 = FUNC_2(VAR_1);
 const struct rpm_reg_parts *VAR_4 = VAR_3->parts;
 const struct request_member *VAR_5 = &VAR_4->mV;
 int VAR_6 = 0;
 int VAR_7;

 if (VAR_5->mask == 0)
  return -VAR_0;

 VAR_7 = FUNC_3(VAR_1, VAR_2);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_0(&VAR_3->lock);
 if (VAR_3->is_enabled)
  VAR_6 = FUNC_4(VAR_3, VAR_5, VAR_7 / 1000);

 if (!VAR_6)
  VAR_3->uV = VAR_7;
 FUNC_1(&VAR_3->lock);

 return VAR_6;
}
