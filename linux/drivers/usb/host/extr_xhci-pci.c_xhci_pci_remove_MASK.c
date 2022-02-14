
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_hcd {int quirks; int * shared_hcd; int xhc_state; } ;
struct pci_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct xhci_hcd* FUNC_0 (int ) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct pci_dev *VAR_4)
{
 struct xhci_hcd *VAR_5;

 VAR_5 = FUNC_0(FUNC_1(VAR_4));
 VAR_5->xhc_state |= VAR_3;

 if (VAR_5->quirks & VAR_1)
  FUNC_3(&VAR_4->dev);

 if (VAR_5->shared_hcd) {
  FUNC_6(VAR_5->shared_hcd);
  FUNC_5(VAR_5->shared_hcd);
  VAR_5->shared_hcd = ((void*)0);
 }


 if (VAR_5->quirks & VAR_2)
  FUNC_2(VAR_4, VAR_0);

 FUNC_4(VAR_4);
}
