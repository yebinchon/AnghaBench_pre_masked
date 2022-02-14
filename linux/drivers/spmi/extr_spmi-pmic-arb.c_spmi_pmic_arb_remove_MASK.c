
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spmi_pmic_arb {int domain; int irq; } ;
struct spmi_controller {int dummy; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int *) ;
 struct spmi_controller* FUNC_2 (struct platform_device*) ;
 struct spmi_pmic_arb* FUNC_3 (struct spmi_controller*) ;
 int FUNC_4 (struct spmi_controller*) ;
 int FUNC_5 (struct spmi_controller*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct spmi_controller *VAR_1 = FUNC_2(VAR_0);
 struct spmi_pmic_arb *VAR_2 = FUNC_3(VAR_1);
 FUNC_5(VAR_1);
 FUNC_1(VAR_2->irq, ((void*)0), ((void*)0));
 FUNC_0(VAR_2->domain);
 FUNC_4(VAR_1);
 return 0;
}
