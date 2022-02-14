
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dev; } ;
struct TYPE_2__ {int parent; } ;
struct cxl {scalar_t__ perst_select_user; scalar_t__ perst_loads_image; TYPE_1__ dev; } ;


 int FUNC_0 (struct pci_dev*,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct pci_dev*,int,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (struct pci_dev*) ;
 struct pci_dev* FUNC_4 (int ) ;

int FUNC_5(struct cxl *VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_4(VAR_3->dev.parent);
 int VAR_5;
 int VAR_6;
 u8 VAR_7;

 if (!(VAR_6 = FUNC_3(VAR_4))) {
  FUNC_2(&VAR_4->dev, "ABORTING: CXL VSEC not found!\n");
  return -VAR_2;
 }

 if ((VAR_5 = FUNC_0(VAR_4, VAR_6, &VAR_7))) {
  FUNC_2(&VAR_4->dev, "failed to read image state: %i\n", VAR_5);
  return VAR_5;
 }

 if (VAR_3->perst_loads_image)
  VAR_7 |= VAR_0;
 else
  VAR_7 &= ~VAR_0;

 if (VAR_3->perst_select_user)
  VAR_7 |= VAR_1;
 else
  VAR_7 &= ~VAR_1;

 if ((VAR_5 = FUNC_1(VAR_4, VAR_6, VAR_7))) {
  FUNC_2(&VAR_4->dev, "failed to update image control: %i\n", VAR_5);
  return VAR_5;
 }

 return 0;
}
