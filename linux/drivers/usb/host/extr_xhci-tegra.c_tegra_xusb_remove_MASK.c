
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct xhci_hcd {int * shared_hcd; } ;
struct TYPE_6__ {int phys; int virt; int size; } ;
struct tegra_xusb {int padctl; TYPE_1__ fw; int * hcd; } ;
struct TYPE_7__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int ,int ) ;
 struct xhci_hcd* FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 struct tegra_xusb* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*,struct tegra_xusb*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_2)
{
 struct tegra_xusb *VAR_3 = FUNC_3(VAR_2);
 struct xhci_hcd *VAR_4 = FUNC_1(VAR_3->hcd);

 FUNC_10(VAR_4->shared_hcd);
 FUNC_9(VAR_4->shared_hcd);
 VAR_4->shared_hcd = ((void*)0);
 FUNC_10(VAR_3->hcd);
 FUNC_9(VAR_3->hcd);

 FUNC_0(&VAR_2->dev, VAR_3->fw.size, VAR_3->fw.virt,
     VAR_3->fw.phys);

 FUNC_5(&VAR_2->dev);
 FUNC_4(&VAR_2->dev);

 if (!FUNC_2(VAR_2->dev.of_node, "power-domains")) {
  FUNC_6(VAR_1);
  FUNC_6(VAR_0);
 } else {
  FUNC_8(&VAR_2->dev, VAR_3);
 }

 FUNC_7(VAR_3->padctl);

 return 0;
}
