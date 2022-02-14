
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_plat_priv {int quirks; } ;
struct xhci_hcd {int quirks; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct xhci_plat_priv* FUNC_0 (struct xhci_hcd*) ;

__attribute__((used)) static void FUNC_1(struct device *VAR_1, struct xhci_hcd *VAR_2)
{
 struct xhci_plat_priv *VAR_3 = FUNC_0(VAR_2);






 VAR_2->quirks |= VAR_0 | VAR_3->quirks;
}
