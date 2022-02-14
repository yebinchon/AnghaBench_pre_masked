
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhci {int * vhci_hcd_ss; int * vhci_hcd_hs; } ;
struct platform_device {int dev; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct vhci *VAR_1 = *((void **)FUNC_0(&VAR_0->dev));






 FUNC_2(FUNC_3(VAR_1->vhci_hcd_ss));
 FUNC_1(FUNC_3(VAR_1->vhci_hcd_ss));

 FUNC_2(FUNC_3(VAR_1->vhci_hcd_hs));
 FUNC_1(FUNC_3(VAR_1->vhci_hcd_hs));

 VAR_1->vhci_hcd_hs = ((void*)0);
 VAR_1->vhci_hcd_ss = ((void*)0);

 return 0;
}
