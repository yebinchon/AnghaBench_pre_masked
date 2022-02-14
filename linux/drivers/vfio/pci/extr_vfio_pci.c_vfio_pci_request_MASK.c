
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_pci_device {int igate; scalar_t__ req_trigger; struct pci_dev* pdev; } ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pci_dev*,char*,unsigned int) ;
 int FUNC_4 (struct pci_dev*,char*) ;

__attribute__((used)) static void FUNC_5(void *VAR_0, unsigned int VAR_1)
{
 struct vfio_pci_device *VAR_2 = VAR_0;
 struct pci_dev *VAR_3 = VAR_2->pdev;

 FUNC_1(&VAR_2->igate);

 if (VAR_2->req_trigger) {
  if (!(VAR_1 % 10))
   FUNC_3(VAR_3,
    "Relaying device request to user (#%u)\n",
    VAR_1);
  FUNC_0(VAR_2->req_trigger, 1);
 } else if (VAR_1 == 0) {
  FUNC_4(VAR_3,
   "No device request channel registered, blocked until released by user\n");
 }

 FUNC_2(&VAR_2->igate);
}
