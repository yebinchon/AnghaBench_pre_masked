
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spmi_regulator {int vs_enable_time; scalar_t__ ocp_count; scalar_t__ ocp_irq; } ;
struct regulator_dev {int dummy; } ;


 int FUNC_0 () ;
 struct spmi_regulator* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_0)
{
 struct spmi_regulator *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->ocp_irq) {
  VAR_1->ocp_count = 0;
  VAR_1->vs_enable_time = FUNC_0();
 }

 return FUNC_2(VAR_0);
}
