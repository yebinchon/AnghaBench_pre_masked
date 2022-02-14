
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int devfn; scalar_t__ current_state; TYPE_1__* bus; } ;
struct TYPE_2__ {int number; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (TYPE_1__*) ;
 struct pci_dev* FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct pci_dev *VAR_1)
{
 struct pci_dev *VAR_2;
 int VAR_3 = VAR_1->devfn;

 while (VAR_3-- > 0) {
  VAR_2 = FUNC_4(FUNC_3
   (VAR_1->bus), VAR_1->bus->number,
   FUNC_0(FUNC_1(VAR_1->devfn), VAR_3));
  if (!VAR_2)
   continue;

  if (VAR_2->current_state != VAR_0) {
   FUNC_2(VAR_2);
   return 0;
  }
  FUNC_2(VAR_2);
 }
 return 1;
}
