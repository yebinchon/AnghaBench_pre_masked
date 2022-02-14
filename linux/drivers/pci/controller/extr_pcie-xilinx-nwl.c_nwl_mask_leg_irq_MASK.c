
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nwl_pcie {int leg_mask_lock; } ;
struct irq_desc {int dummy; } ;
struct irq_data {int hwirq; int irq; } ;


 int VAR_0 ;
 struct nwl_pcie* FUNC_0 (struct irq_desc*) ;
 struct irq_desc* FUNC_1 (int ) ;
 int FUNC_2 (struct nwl_pcie*,int ) ;
 int FUNC_3 (struct nwl_pcie*,int,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct irq_data *VAR_1)
{
 struct irq_desc *VAR_2 = FUNC_1(VAR_1->irq);
 struct nwl_pcie *VAR_3;
 unsigned long VAR_4;
 u32 VAR_5;
 u32 VAR_6;

 VAR_3 = FUNC_0(VAR_2);
 VAR_5 = 1 << (VAR_1->hwirq - 1);
 FUNC_4(&VAR_3->leg_mask_lock, VAR_4);
 VAR_6 = FUNC_2(VAR_3, VAR_0);
 FUNC_3(VAR_3, (VAR_6 & (~VAR_5)), VAR_0);
 FUNC_5(&VAR_3->leg_mask_lock, VAR_4);
}
