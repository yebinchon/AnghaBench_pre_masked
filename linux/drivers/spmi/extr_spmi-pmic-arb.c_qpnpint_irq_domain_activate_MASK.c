
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct spmi_pmic_arb {scalar_t__ ee; TYPE_2__* apid_data; TYPE_1__* spmic; } ;
struct irq_domain {int dummy; } ;
struct irq_data {int hwirq; } ;
struct TYPE_4__ {scalar_t__ irq_ee; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,size_t,size_t,size_t,scalar_t__,scalar_t__) ;
 size_t FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;
 size_t FUNC_3 (int ) ;
 size_t FUNC_4 (int ) ;
 struct spmi_pmic_arb* FUNC_5 (struct irq_data*) ;

__attribute__((used)) static int FUNC_6(struct irq_domain *VAR_1,
           struct irq_data *VAR_2, bool VAR_3)
{
 struct spmi_pmic_arb *VAR_4 = FUNC_5(VAR_2);
 u16 VAR_5 = FUNC_3(VAR_2->hwirq);
 u16 VAR_6 = FUNC_1(VAR_2->hwirq);
 u16 VAR_7 = FUNC_4(VAR_2->hwirq);
 u16 VAR_8 = FUNC_2(VAR_2->hwirq);

 if (VAR_4->apid_data[VAR_6].irq_ee != VAR_4->ee) {
  FUNC_0(&VAR_4->spmic->dev, "failed to xlate sid = %#x, periph = %#x, irq = %u: ee=%u but owner=%u\n",
   VAR_7, VAR_5, VAR_8, VAR_4->ee,
   VAR_4->apid_data[VAR_6].irq_ee);
  return -VAR_0;
 }

 return 0;
}
