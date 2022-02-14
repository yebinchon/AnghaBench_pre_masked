
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nwl_msi {int lock; int bitmap; } ;
struct nwl_pcie {struct nwl_msi msi; } ;
struct irq_domain {int dummy; } ;
struct irq_data {int hwirq; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (unsigned int) ;
 struct nwl_pcie* FUNC_2 (struct irq_data*) ;
 struct irq_data* FUNC_3 (struct irq_domain*,unsigned int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct irq_domain *VAR_0, unsigned int VAR_1,
     unsigned int VAR_2)
{
 struct irq_data *VAR_3 = FUNC_3(VAR_0, VAR_1);
 struct nwl_pcie *VAR_4 = FUNC_2(VAR_3);
 struct nwl_msi *VAR_5 = &VAR_4->msi;

 FUNC_4(&VAR_5->lock);
 FUNC_0(VAR_5->bitmap, VAR_3->hwirq,
         FUNC_1(VAR_2));
 FUNC_5(&VAR_5->lock);
}
