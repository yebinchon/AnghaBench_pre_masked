
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int device; int devfn; } ;
 void* FUNC_0 (int ) ;
 void* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct pci_dev *VAR_2)
{

 switch (VAR_2->device) {
 case 128:





  VAR_1 = FUNC_0(VAR_2->devfn);
  VAR_0 = FUNC_0(VAR_2->devfn);
  break;
 case 130:
 case 129:
  VAR_1 = 15;
  break;
 case 131:
  VAR_1 = 16;
  break;
 case 135:
 case 132:
 case 134:
 case 133:
  VAR_1 = 17;
  break;
 }
}
