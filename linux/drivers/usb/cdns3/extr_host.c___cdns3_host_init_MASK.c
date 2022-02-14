
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct cdns3 {int dev; int xhci_res; struct platform_device* host_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cdns3*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct platform_device*,int ,int ) ;
 struct platform_device* FUNC_4 (char*,int ) ;
 int FUNC_5 (struct platform_device*) ;

__attribute__((used)) static int FUNC_6(struct cdns3 *VAR_3)
{
 struct platform_device *VAR_4;
 int VAR_5;

 FUNC_0(VAR_3, 1);

 VAR_4 = FUNC_4("xhci-hcd", VAR_2);
 if (!VAR_4) {
  FUNC_1(VAR_3->dev, "couldn't allocate xHCI device\n");
  return -VAR_1;
 }

 VAR_4->dev.parent = VAR_3->dev;
 VAR_3->host_dev = VAR_4;

 VAR_5 = FUNC_3(VAR_4, VAR_3->xhci_res,
         VAR_0);
 if (VAR_5) {
  FUNC_1(VAR_3->dev, "couldn't add resources to xHCI device\n");
  goto err1;
 }

 VAR_5 = FUNC_2(VAR_4);
 if (VAR_5) {
  FUNC_1(VAR_3->dev, "failed to register xHCI device\n");
  goto err1;
 }

 return 0;
err1:
 FUNC_5(VAR_4);
 return VAR_5;
}
