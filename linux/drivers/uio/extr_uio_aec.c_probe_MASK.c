
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uio_info {char* name; char* version; scalar_t__ priv; int handler; int irq_flags; int irq; TYPE_1__* port; } ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; int irq; } ;
struct TYPE_2__ {int porttype; int size; int start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (struct uio_info*) ;
 struct uio_info* FUNC_5 (int,int ) ;
 int FUNC_6 (struct pci_dev*) ;
 scalar_t__ FUNC_7 (struct pci_dev*) ;
 scalar_t__ FUNC_8 (struct pci_dev*,int ,int ) ;
 int FUNC_9 (struct pci_dev*,scalar_t__) ;
 int FUNC_10 (struct pci_dev*) ;
 scalar_t__ FUNC_11 (struct pci_dev*,char*) ;
 int FUNC_12 (struct pci_dev*,int ) ;
 int FUNC_13 (struct pci_dev*,int ) ;
 int FUNC_14 (struct pci_dev*,struct uio_info*) ;
 int FUNC_15 (struct pci_dev*,struct uio_info*) ;
 int FUNC_16 (int *,struct uio_info*) ;

__attribute__((used)) static int FUNC_17(struct pci_dev *VAR_12, const struct pci_device_id *VAR_13)
{
 struct uio_info *VAR_14;
 int VAR_15;

 VAR_14 = FUNC_5(sizeof(struct uio_info), VAR_2);
 if (!VAR_14)
  return -VAR_1;

 if (FUNC_7(VAR_12))
  goto out_free;

 if (FUNC_11(VAR_12, "aectc"))
  goto out_disable;

 VAR_14->name = "aectc";
 VAR_14->port[0].start = FUNC_13(VAR_12, 0);
 if (!VAR_14->port[0].start)
  goto out_release;
 VAR_14->priv = FUNC_8(VAR_12, 0, 0);
 if (!VAR_14->priv)
  goto out_release;
 VAR_14->port[0].size = FUNC_12(VAR_12, 0);
 VAR_14->port[0].porttype = VAR_10;

 VAR_14->version = "0.0.1";
 VAR_14->irq = VAR_12->irq;
 VAR_14->irq_flags = VAR_9;
 VAR_14->handler = VAR_11;

 FUNC_15(VAR_12, VAR_14);
 VAR_15 = FUNC_16(&VAR_12->dev, VAR_14);
 if (VAR_15)
  goto out_unmap;

 FUNC_2(VAR_5, VAR_14->priv + VAR_6);
 FUNC_3(VAR_8, VAR_14->priv + VAR_7);
 if (!(FUNC_1(VAR_14->priv + VAR_3)
   & VAR_4))
  FUNC_0(&VAR_12->dev, "aectc: interrupts not enabled\n");

 FUNC_14(VAR_12, VAR_14);

 return 0;

out_unmap:
 FUNC_9(VAR_12, VAR_14->priv);
out_release:
 FUNC_10(VAR_12);
out_disable:
 FUNC_6(VAR_12);
out_free:
 FUNC_4(VAR_14);
 return -VAR_0;
}
