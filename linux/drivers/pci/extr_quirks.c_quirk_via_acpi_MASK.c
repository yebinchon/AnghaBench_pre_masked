
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int irq; } ;


 int FUNC_0 (struct pci_dev*,int,int*) ;

__attribute__((used)) static void FUNC_1(struct pci_dev *VAR_0)
{
 u8 VAR_1;


 FUNC_0(VAR_0, 0x42, &VAR_1);
 VAR_1 &= 0xf;
 if (VAR_1 && (VAR_1 != 2))
  VAR_0->irq = VAR_1;
}
