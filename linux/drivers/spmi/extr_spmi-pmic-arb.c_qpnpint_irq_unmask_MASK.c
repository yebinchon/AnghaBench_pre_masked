
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct spmi_pmic_arb {struct pmic_arb_ver_ops* ver_ops; } ;
struct pmic_arb_ver_ops {int (* acc_enable ) (struct spmi_pmic_arb*,int ) ;} ;
struct irq_data {int hwirq; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct spmi_pmic_arb* FUNC_3 (struct irq_data*) ;
 int FUNC_4 (struct irq_data*,int ,int*,int) ;
 int FUNC_5 (struct irq_data*,int ,int**,int) ;
 int FUNC_6 (struct spmi_pmic_arb*,int ) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static void FUNC_8(struct irq_data *VAR_3)
{
 struct spmi_pmic_arb *VAR_4 = FUNC_3(VAR_3);
 const struct pmic_arb_ver_ops *VAR_5 = VAR_4->ver_ops;
 u8 VAR_6 = FUNC_2(VAR_3->hwirq);
 u16 VAR_7 = FUNC_1(VAR_3->hwirq);
 u8 VAR_8[2];

 FUNC_7(VAR_2,
   VAR_5->acc_enable(VAR_4, VAR_7));

 FUNC_4(VAR_3, VAR_0, &VAR_8[0], 1);
 if (!(VAR_8[0] & FUNC_0(VAR_6))) {





  VAR_8[0] = FUNC_0(VAR_6);
  VAR_8[1] = FUNC_0(VAR_6);
  FUNC_5(VAR_3, VAR_1, &VAR_8, 2);
 }
}
