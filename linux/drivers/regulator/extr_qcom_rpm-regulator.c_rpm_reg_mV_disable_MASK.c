
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_member {scalar_t__ mask; } ;
struct rpm_reg_parts {struct request_member mV; } ;
struct regulator_dev {int dummy; } ;
struct qcom_rpm_reg {int lock; scalar_t__ is_enabled; struct rpm_reg_parts* parts; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct qcom_rpm_reg* FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct qcom_rpm_reg*,struct request_member const*,int ) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_1)
{
 struct qcom_rpm_reg *VAR_2 = FUNC_2(VAR_1);
 const struct rpm_reg_parts *VAR_3 = VAR_2->parts;
 const struct request_member *VAR_4 = &VAR_3->mV;
 int VAR_5;

 if (VAR_4->mask == 0)
  return -VAR_0;

 FUNC_0(&VAR_2->lock);
 VAR_5 = FUNC_3(VAR_2, VAR_4, 0);
 if (!VAR_5)
  VAR_2->is_enabled = 0;
 FUNC_1(&VAR_2->lock);

 return VAR_5;
}
