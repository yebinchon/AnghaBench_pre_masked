
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {unsigned int class; int dev; int devfn; TYPE_1__* bus; } ;
struct TYPE_2__ {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned int) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,int *,int) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct pci_dev*,char*,int ) ;
 struct pci_dev* FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (struct pci_dev*,char*,int ) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct pci_dev *VAR_2, unsigned int VAR_3,
       unsigned int VAR_4, unsigned int VAR_5,
       unsigned int VAR_6)
{
 struct pci_dev *VAR_7;

 if (FUNC_1(VAR_2->devfn) != VAR_3)
  return;

 VAR_7 = FUNC_7(FUNC_5(VAR_2->bus),
    VAR_2->bus->number,
    FUNC_0(FUNC_2(VAR_2->devfn), VAR_4));
 if (!VAR_7 || (VAR_7->class >> VAR_6) != VAR_5) {
  FUNC_4(VAR_7);
  return;
 }

 if (FUNC_3(&VAR_2->dev, &VAR_7->dev,
       VAR_1 | VAR_0))
  FUNC_8(VAR_2, "D0 power state depends on %s\n",
    FUNC_9(VAR_7));
 else
  FUNC_6(VAR_2, "Cannot enforce power dependency on %s\n",
   FUNC_9(VAR_7));

 FUNC_10(&VAR_2->dev);
 FUNC_4(VAR_7);
}
