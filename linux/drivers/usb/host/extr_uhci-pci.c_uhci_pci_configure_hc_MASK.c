
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uhci_hcd {int dummy; } ;
struct pci_dev {scalar_t__ vendor; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pci_dev*,int ,int ) ;
 int FUNC_1 (struct pci_dev*,int ,int ) ;
 struct pci_dev* FUNC_2 (int ) ;
 int FUNC_3 (struct uhci_hcd*) ;

__attribute__((used)) static void FUNC_4(struct uhci_hcd *VAR_4)
{
 struct pci_dev *VAR_5 = FUNC_2(FUNC_3(VAR_4));


 FUNC_1(VAR_5, VAR_1, VAR_2);


 if (VAR_5->vendor == VAR_0)
  FUNC_0(VAR_5, VAR_3, 0);
}
