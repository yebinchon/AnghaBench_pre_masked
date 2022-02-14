
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct flexcop_pci {TYPE_1__* pdev; int io_mem; int init_state; int irq_lock; } ;
struct TYPE_9__ {int irq; int revision; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*,struct flexcop_pci*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ,int ,int ,int ,struct flexcop_pci*) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct flexcop_pci *VAR_5)
{
 int VAR_6;

 FUNC_1("card revision %x", VAR_5->pdev->revision);

 if ((VAR_6 = FUNC_3(VAR_5->pdev)) != 0)
  return VAR_6;
 FUNC_9(VAR_5->pdev);

 if ((VAR_6 = FUNC_7(VAR_5->pdev, VAR_0)) != 0)
  goto err_pci_disable_device;

 VAR_5->io_mem = FUNC_4(VAR_5->pdev, 0, 0x800);

 if (!VAR_5->io_mem) {
  FUNC_0("cannot map io memory\n");
  VAR_6 = -VAR_1;
  goto err_pci_release_regions;
 }

 FUNC_8(VAR_5->pdev, VAR_5);
 FUNC_11(&VAR_5->irq_lock);
 if ((VAR_6 = FUNC_10(VAR_5->pdev->irq, VAR_4,
     VAR_3, VAR_0, VAR_5)) != 0)
  goto err_pci_iounmap;

 VAR_5->init_state |= VAR_2;
 return VAR_6;

err_pci_iounmap:
 FUNC_5(VAR_5->pdev, VAR_5->io_mem);
err_pci_release_regions:
 FUNC_6(VAR_5->pdev);
err_pci_disable_device:
 FUNC_2(VAR_5->pdev);
 return VAR_6;
}
