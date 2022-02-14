
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct spmi_pmic_arb {TYPE_1__* spmic; } ;
struct irq_data {int irq; int hwirq; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct spmi_pmic_arb* FUNC_3 (struct irq_data*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ,int,int,void*,size_t) ;

__attribute__((used)) static void FUNC_5(struct irq_data *VAR_1, u8 VAR_2, void *VAR_3,
          size_t VAR_4)
{
 struct spmi_pmic_arb *VAR_5 = FUNC_3(VAR_1);
 u8 VAR_6 = FUNC_2(VAR_1->hwirq);
 u8 VAR_7 = FUNC_1(VAR_1->hwirq);

 if (FUNC_4(VAR_5->spmic, VAR_0, VAR_6,
          (VAR_7 << 8) + VAR_2, VAR_3, VAR_4))
  FUNC_0(&VAR_5->spmic->dev, "failed irqchip transaction on %x\n",
        VAR_1->irq);
}
