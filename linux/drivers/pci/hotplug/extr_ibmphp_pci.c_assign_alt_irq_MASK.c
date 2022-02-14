
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_func {int* irq; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct pci_func *VAR_3, u8 VAR_4)
{
 int VAR_5;
 for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
  if (VAR_3->irq[VAR_5] == 0xff) {
   switch (VAR_4) {
    case 128:
     VAR_3->irq[VAR_5] = VAR_2;
     break;
    case 129:
     VAR_3->irq[VAR_5] = VAR_0;
     break;
    default:
     VAR_3->irq[VAR_5] = VAR_1;
     break;
   }
  }
 }
}
