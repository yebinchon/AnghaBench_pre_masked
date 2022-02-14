
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msi_msg {int data; int address_hi; int address_lo; } ;
struct irq_data {int hwirq; } ;
struct iproc_msi {scalar_t__ msi_addr; } ;
typedef scalar_t__ dma_addr_t ;


 scalar_t__ FUNC_0 (struct iproc_msi*,int) ;
 struct iproc_msi* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_0,
       struct msi_msg *VAR_1)
{
 struct iproc_msi *VAR_2 = FUNC_1(VAR_0);
 dma_addr_t VAR_3;

 VAR_3 = VAR_2->msi_addr + FUNC_0(VAR_2, VAR_0->hwirq);
 VAR_1->address_lo = FUNC_2(VAR_3);
 VAR_1->address_hi = FUNC_3(VAR_3);
 VAR_1->data = VAR_0->hwirq << 5;
}
