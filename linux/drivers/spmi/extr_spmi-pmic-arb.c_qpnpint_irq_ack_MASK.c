
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct spmi_pmic_arb {TYPE_1__* ver_ops; } ;
struct irq_data {int hwirq; } ;
struct TYPE_2__ {int (* irq_clear ) (struct spmi_pmic_arb*,int ) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct spmi_pmic_arb* FUNC_3 (struct irq_data*) ;
 int FUNC_4 (struct irq_data*,int ,int *,int) ;
 int FUNC_5 (struct spmi_pmic_arb*,int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(struct irq_data *VAR_1)
{
 struct spmi_pmic_arb *VAR_2 = FUNC_3(VAR_1);
 u8 VAR_3 = FUNC_2(VAR_1->hwirq);
 u16 VAR_4 = FUNC_1(VAR_1->hwirq);
 u8 VAR_5;

 FUNC_6(FUNC_0(VAR_3), VAR_2->ver_ops->irq_clear(VAR_2, VAR_4));

 VAR_5 = FUNC_0(VAR_3);
 FUNC_4(VAR_1, VAR_0, &VAR_5, 1);
}
