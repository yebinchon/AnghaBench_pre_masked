
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct xgene_msi {scalar_t__ msi_addr; } ;
struct msi_msg {int data; int address_lo; int address_hi; } ;
struct irq_data {int hwirq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct xgene_msi* FUNC_3 (struct irq_data*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct irq_data *VAR_0, struct msi_msg *VAR_1)
{
 struct xgene_msi *VAR_2 = FUNC_3(VAR_0);
 u32 VAR_3 = FUNC_2(VAR_0->hwirq);
 u32 VAR_4 = FUNC_0(VAR_0->hwirq);
 u64 VAR_5 = VAR_2->msi_addr + (((8 * VAR_4) + VAR_3) << 16);

 VAR_1->address_hi = FUNC_5(VAR_5);
 VAR_1->address_lo = FUNC_4(VAR_5);
 VAR_1->data = FUNC_1(VAR_0->hwirq);
}
