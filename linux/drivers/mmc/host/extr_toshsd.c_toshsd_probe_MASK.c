
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct toshsd_host {int ioaddr; int lock; struct pci_dev* pdev; struct mmc_host* mmc; } ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; int irq; } ;
struct mmc_host {int f_min; int f_max; int ocr_avail; int caps; int * ops; } ;
typedef int resource_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,int *,int ) ;
 int FUNC_1 (struct mmc_host*) ;
 struct mmc_host* FUNC_2 (int,int *) ;
 int FUNC_3 (struct mmc_host*) ;
 struct toshsd_host* FUNC_4 (struct mmc_host*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*,int ,int ) ;
 int FUNC_8 (struct pci_dev*,int ) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*,int ) ;
 int FUNC_11 (struct pci_dev*,int ) ;
 int FUNC_12 (struct pci_dev*,struct toshsd_host*) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int ,int ,int ,int ,int ,struct toshsd_host*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct toshsd_host*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_17(struct pci_dev *VAR_9, const struct pci_device_id *VAR_10)
{
 int VAR_11;
 struct toshsd_host *VAR_12;
 struct mmc_host *VAR_13;
 resource_size_t VAR_14;

 VAR_11 = FUNC_6(VAR_9);
 if (VAR_11)
  return VAR_11;

 VAR_13 = FUNC_2(sizeof(struct toshsd_host), &VAR_9->dev);
 if (!VAR_13) {
  VAR_11 = -VAR_1;
  goto err;
 }

 VAR_12 = FUNC_4(VAR_13);
 VAR_12->mmc = VAR_13;

 VAR_12->pdev = VAR_9;
 FUNC_12(VAR_9, VAR_12);

 VAR_11 = FUNC_10(VAR_9, VAR_0);
 if (VAR_11)
  goto free;

 VAR_12->ioaddr = FUNC_7(VAR_9, 0, 0);
 if (!VAR_12->ioaddr) {
  VAR_11 = -VAR_1;
  goto release;
 }


 VAR_13->ops = &VAR_7;
 VAR_13->caps = VAR_4;
 VAR_13->ocr_avail = VAR_5;

 VAR_13->f_min = VAR_2 / 512;
 VAR_13->f_max = VAR_2;

 FUNC_15(&VAR_12->lock);

 FUNC_16(VAR_12);

 VAR_11 = FUNC_14(VAR_9->irq, VAR_6, VAR_8,
       VAR_3, VAR_0, VAR_12);
 if (VAR_11)
  goto unmap;

 FUNC_1(VAR_13);

 VAR_14 = FUNC_11(VAR_9, 0);
 FUNC_0(&VAR_9->dev, "MMIO %pa, IRQ %d\n", &VAR_14, VAR_9->irq);

 FUNC_13(&VAR_9->dev, 1);

 return 0;

unmap:
 FUNC_8(VAR_9, VAR_12->ioaddr);
release:
 FUNC_9(VAR_9);
free:
 FUNC_3(VAR_13);
 FUNC_12(VAR_9, ((void*)0));
err:
 FUNC_5(VAR_9);
 return VAR_11;
}
