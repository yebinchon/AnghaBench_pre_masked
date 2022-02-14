
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct TYPE_2__ {int parent; } ;
struct cxl {scalar_t__ perst_same_image; TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct cxl*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct pci_dev*,int ) ;
 int VAR_1 ;
 struct pci_dev* FUNC_5 (int ) ;

int FUNC_6(struct cxl *VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_5(VAR_2->dev.parent);
 int VAR_4;

 if (VAR_2->perst_same_image) {
  FUNC_3(&VAR_3->dev,
    "cxl: refusing to reset/reflash when perst_reloads_same_image is set.\n");
  return -VAR_0;
 }

 FUNC_2(&VAR_3->dev, "CXL reset\n");




 FUNC_0(VAR_2);




 if ((VAR_4 = FUNC_4(VAR_3, VAR_1))) {
  FUNC_1(&VAR_3->dev, "cxl: pcie_warm_reset failed\n");
  return VAR_4;
 }

 return VAR_4;
}
