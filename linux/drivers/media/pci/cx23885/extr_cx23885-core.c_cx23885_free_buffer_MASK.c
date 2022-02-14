
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx23885_riscmem {int dma; int cpu; int size; } ;
struct cx23885_dev {int pci; } ;
struct cx23885_buffer {struct cx23885_riscmem risc; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int ,int ) ;

void FUNC_3(struct cx23885_dev *VAR_0, struct cx23885_buffer *VAR_1)
{
 struct cx23885_riscmem *VAR_2 = &VAR_1->risc;

 FUNC_0(FUNC_1());
 FUNC_2(VAR_0->pci, VAR_2->size, VAR_2->cpu, VAR_2->dma);
}
