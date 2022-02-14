
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {struct advk_pcie* host_data; } ;
struct irq_data {int hwirq; } ;
struct advk_pcie {int msi_used_lock; int msi_used; } ;


 int FUNC_0 (int ,int ,unsigned int) ;
 struct irq_data* FUNC_1 (struct irq_domain*,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct irq_domain *VAR_0,
         unsigned int VAR_1, unsigned int VAR_2)
{
 struct irq_data *VAR_3 = FUNC_1(VAR_0, VAR_1);
 struct advk_pcie *VAR_4 = VAR_0->host_data;

 FUNC_2(&VAR_4->msi_used_lock);
 FUNC_0(VAR_4->msi_used, VAR_3->hwirq, VAR_2);
 FUNC_3(&VAR_4->msi_used_lock);
}
