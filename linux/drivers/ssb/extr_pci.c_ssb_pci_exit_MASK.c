
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssb_bus {scalar_t__ bustype; struct pci_dev* host_pci; } ;
struct pci_dev {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;

void FUNC_1(struct ssb_bus *VAR_2)
{
 struct pci_dev *VAR_3;

 if (VAR_2->bustype != VAR_0)
  return;

 VAR_3 = VAR_2->host_pci;
 FUNC_0(&VAR_3->dev, &VAR_1);
}
