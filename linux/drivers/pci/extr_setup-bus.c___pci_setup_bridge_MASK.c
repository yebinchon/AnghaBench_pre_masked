
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct pci_bus {int bridge_ctl; int busn_res; struct pci_dev* self; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pci_dev*,char*,int *) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct pci_bus *VAR_4, unsigned long VAR_5)
{
 struct pci_dev *VAR_6 = VAR_4->self;

 FUNC_0(VAR_6, "PCI bridge to %pR\n",
   &VAR_4->busn_res);

 if (VAR_5 & VAR_0)
  FUNC_1(VAR_6);

 if (VAR_5 & VAR_1)
  FUNC_2(VAR_6);

 if (VAR_5 & VAR_2)
  FUNC_3(VAR_6);

 FUNC_4(VAR_6, VAR_3, VAR_4->bridge_ctl);
}
