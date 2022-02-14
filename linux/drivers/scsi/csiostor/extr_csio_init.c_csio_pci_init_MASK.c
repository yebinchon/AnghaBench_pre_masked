
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct pci_dev*) ;
 scalar_t__ FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int) ;
 scalar_t__ FUNC_6 (struct pci_dev*,int,int ) ;
 int FUNC_7 (struct pci_dev*,int ) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*) ;

__attribute__((used)) static int
FUNC_10(struct pci_dev *VAR_3, int *VAR_4)
{
 int VAR_5 = -VAR_0;

 *VAR_4 = FUNC_7(VAR_3, VAR_1);

 if (FUNC_4(VAR_3))
  goto err;

 if (FUNC_6(VAR_3, *VAR_4, VAR_2))
  goto err_disable_device;

 FUNC_8(VAR_3);
 FUNC_9(VAR_3);

 VAR_5 = FUNC_2(&VAR_3->dev, FUNC_0(64));
 if (VAR_5)
  VAR_5 = FUNC_2(&VAR_3->dev, FUNC_0(32));
 if (VAR_5) {
  VAR_5 = -VAR_0;
  FUNC_1(&VAR_3->dev, "No suitable DMA available.\n");
  goto err_release_regions;
 }

 return 0;

err_release_regions:
 FUNC_5(VAR_3, *VAR_4);
err_disable_device:
 FUNC_3(VAR_3);
err:
 return VAR_5;

}
