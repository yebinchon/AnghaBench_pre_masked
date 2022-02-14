
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct cxl {int slices; int * afu; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct cxl*) ;
 int FUNC_1 (struct cxl*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 () ;
 struct cxl* FUNC_4 (struct pci_dev*) ;
 scalar_t__ FUNC_5 (struct pci_dev*) ;
 scalar_t__ FUNC_6 (struct pci_dev*) ;
 scalar_t__ VAR_1 ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,char*,int,...) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct cxl*,int,struct pci_dev*) ;
 int FUNC_12 () ;

__attribute__((used)) static int FUNC_13(struct pci_dev *VAR_2, const struct pci_device_id *VAR_3)
{
 struct cxl *VAR_4;
 int VAR_5;
 int VAR_6;

 if (FUNC_5(VAR_2)) {
  FUNC_7(&VAR_2->dev, "cxl_init_adapter: Ignoring cxl vphb device\n");
  return -VAR_0;
 }

 if (FUNC_6(VAR_2)) {
  FUNC_9(&VAR_2->dev, "Ignoring card on incompatible PCI slot\n");
  return -VAR_0;
 }

 if (FUNC_3() && !FUNC_12()) {
  FUNC_9(&VAR_2->dev, "Only Radix mode supported\n");
  return -VAR_0;
 }

 if (VAR_1)
  FUNC_10(VAR_2);

 VAR_4 = FUNC_4(VAR_2);
 if (FUNC_0(VAR_4)) {
  FUNC_8(&VAR_2->dev, "cxl_init_adapter failed: %li\n", FUNC_1(VAR_4));
  return FUNC_1(VAR_4);
 }

 for (VAR_5 = 0; VAR_5 < VAR_4->slices; VAR_5++) {
  if ((VAR_6 = FUNC_11(VAR_4, VAR_5, VAR_2))) {
   FUNC_8(&VAR_2->dev, "AFU %i failed to initialise: %i\n", VAR_5, VAR_6);
   continue;
  }

  VAR_6 = FUNC_2(VAR_4->afu[VAR_5]);
  if (VAR_6)
   FUNC_8(&VAR_2->dev, "AFU %i failed to start: %i\n", VAR_5, VAR_6);
 }

 return 0;
}
