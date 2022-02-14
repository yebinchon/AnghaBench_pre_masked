
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_hcd {int xhc_state; int * devs; int hcs_params1; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct xhci_hcd*) ;
 int FUNC_3 (struct xhci_hcd*,char*) ;
 int FUNC_4 (struct xhci_hcd*,int,int) ;
 int FUNC_5 (struct xhci_hcd*) ;

void FUNC_6(struct xhci_hcd *VAR_2)
{
 int VAR_3, VAR_4;

 if (VAR_2->xhc_state & VAR_0)
  return;

 FUNC_3(VAR_2, "xHCI host controller not responding, assume dead\n");
 VAR_2->xhc_state |= VAR_0;

 FUNC_2(VAR_2);


 for (VAR_3 = 0; VAR_3 <= FUNC_0(VAR_2->hcs_params1); VAR_3++) {
  if (!VAR_2->devs[VAR_3])
   continue;
  for (VAR_4 = 0; VAR_4 < 31; VAR_4++)
   FUNC_4(VAR_2, VAR_3, VAR_4);
 }


 if (!(VAR_2->xhc_state & VAR_1))
  FUNC_1(FUNC_5(VAR_2));
}
