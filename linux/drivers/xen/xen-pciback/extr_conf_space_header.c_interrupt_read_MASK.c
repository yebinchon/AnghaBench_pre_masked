
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct pci_dev {scalar_t__ irq; } ;



__attribute__((used)) static int FUNC_0(struct pci_dev *VAR_0, int VAR_1, u8 * VAR_2,
     void *VAR_3)
{
 *VAR_2 = (u8) VAR_0->irq;

 return 0;
}
