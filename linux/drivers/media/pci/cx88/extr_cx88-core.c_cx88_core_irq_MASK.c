
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cx88_core {int pci_irqmask; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct cx88_core*) ;
 int VAR_1 ;
 int FUNC_2 (char*,int ,int ,int,int ) ;

int FUNC_3(struct cx88_core *VAR_2, u32 VAR_3)
{
 int VAR_4 = 0;

 if (VAR_3 & VAR_0) {
  FUNC_1(VAR_2);
  VAR_4++;
 }
 if (!VAR_4)
  FUNC_2("irq pci",
       VAR_1, FUNC_0(VAR_1),
       VAR_3, VAR_2->pci_irqmask);
 return VAR_4;
}
