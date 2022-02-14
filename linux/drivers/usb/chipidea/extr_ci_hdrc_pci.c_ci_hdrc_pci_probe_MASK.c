
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int flags; scalar_t__ start; int end; } ;
struct pci_device_id {scalar_t__ driver_data; } ;
struct pci_dev {int dev; scalar_t__ irq; } ;
struct ci_hdrc_platform_data {int dummy; } ;
struct ci_hdrc_pci {int ci; int phy; } ;
typedef int res ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,struct resource*,int,struct ci_hdrc_platform_data*) ;
 int FUNC_3 (int *,char*) ;
 struct ci_hdrc_pci* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (struct resource*,int ,int) ;
 int FUNC_6 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_7 (struct pci_dev*,int ) ;
 int FUNC_8 (struct pci_dev*,struct ci_hdrc_pci*) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*) ;
 int FUNC_12 () ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(struct pci_dev *VAR_5,
           const struct pci_device_id *VAR_6)
{
 struct ci_hdrc_platform_data *VAR_7 = (void *)VAR_6->driver_data;
 struct ci_hdrc_pci *VAR_8;
 struct resource VAR_9[3];
 int VAR_10 = 0, VAR_11 = 2;

 if (!VAR_7) {
  FUNC_3(&VAR_5->dev, "device doesn't provide driver data\n");
  return -VAR_0;
 }

 VAR_8 = FUNC_4(&VAR_5->dev, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_10 = FUNC_11(VAR_5);
 if (VAR_10)
  return VAR_10;

 if (!VAR_5->irq) {
  FUNC_3(&VAR_5->dev, "No IRQ, check BIOS/PCI setup!");
  return -VAR_0;
 }

 FUNC_9(VAR_5);
 FUNC_10(VAR_5);


 VAR_8->phy = FUNC_12();
 if (FUNC_0(VAR_8->phy))
  return FUNC_1(VAR_8->phy);

 FUNC_5(VAR_9, 0, sizeof(VAR_9));
 VAR_9[0].start = FUNC_7(VAR_5, 0);
 VAR_9[0].end = FUNC_6(VAR_5, 0);
 VAR_9[0].flags = VAR_4;
 VAR_9[1].start = VAR_5->irq;
 VAR_9[1].flags = VAR_3;

 VAR_8->ci = FUNC_2(&VAR_5->dev, VAR_9, VAR_11, VAR_7);
 if (FUNC_0(VAR_8->ci)) {
  FUNC_3(&VAR_5->dev, "ci_hdrc_add_device failed!\n");
  FUNC_13(VAR_8->phy);
  return FUNC_1(VAR_8->ci);
 }

 FUNC_8(VAR_5, VAR_8);

 return 0;
}
