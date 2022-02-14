
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spmi_pmic_arb {TYPE_1__* spmic; } ;
struct irq_domain {int dummy; } ;
typedef int irq_hw_number_t ;
typedef int irq_flow_handler_t ;
struct TYPE_2__ {int dev; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *,char*,unsigned int,int ,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct irq_domain*,unsigned int,int ,int *,struct spmi_pmic_arb*,int ,int *,int *) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(struct spmi_pmic_arb *VAR_4,
       struct irq_domain *VAR_5, unsigned int VAR_6,
       irq_hw_number_t VAR_7, unsigned int VAR_8)
{
 irq_flow_handler_t VAR_9;

 FUNC_0(&VAR_4->spmic->dev, "virq = %u, hwirq = %lu, type = %u\n",
  VAR_6, VAR_7, VAR_8);

 if (VAR_8 & VAR_0)
  VAR_9 = VAR_1;
 else
  VAR_9 = VAR_2;

 FUNC_1(VAR_5, VAR_6, VAR_7, &VAR_3, VAR_4,
       VAR_9, ((void*)0), ((void*)0));
}
