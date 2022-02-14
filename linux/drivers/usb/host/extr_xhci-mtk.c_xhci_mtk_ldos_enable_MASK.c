
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_hcd_mtk {int vbus; int dev; int vusb33; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct xhci_hcd_mtk *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_2(VAR_0->vbus);
 if (VAR_1) {
  FUNC_0(VAR_0->dev, "failed to enable vbus\n");
  return VAR_1;
 }

 VAR_1 = FUNC_2(VAR_0->vusb33);
 if (VAR_1) {
  FUNC_0(VAR_0->dev, "failed to enable vusb33\n");
  FUNC_1(VAR_0->vbus);
  return VAR_1;
 }
 return 0;
}
