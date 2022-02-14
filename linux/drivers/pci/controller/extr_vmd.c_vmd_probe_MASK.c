
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int domain; } ;
struct vmd_dev {int msix_count; TYPE_1__ sysdata; struct pci_dev* dev; int cfg_lock; TYPE_2__* irqs; int cfgbar; } ;
struct pci_device_id {scalar_t__ driver_data; } ;
struct pci_dev {int dev; int * resource; } ;
struct TYPE_5__ {int irq_list; int srcu; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_2 (int *,char*,int ) ;
 TYPE_2__* FUNC_3 (int *,int,int,int ) ;
 struct vmd_dev* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,int ,int ,int ,char*,TYPE_2__*) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct pci_dev*,int,int,int ) ;
 int FUNC_9 (struct pci_dev*,int) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*,struct vmd_dev*) ;
 int FUNC_12 (struct pci_dev*) ;
 int FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (struct pci_dev*,size_t,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct vmd_dev*,unsigned long) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_18(struct pci_dev *VAR_7, const struct pci_device_id *VAR_8)
{
 struct vmd_dev *VAR_9;
 int VAR_10, VAR_11;

 if (FUNC_15(&VAR_7->resource[VAR_5]) < (1 << 20))
  return -VAR_1;

 VAR_9 = FUNC_4(&VAR_7->dev, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->dev = VAR_7;
 VAR_11 = FUNC_13(VAR_7);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_9->cfgbar = FUNC_14(VAR_7, VAR_5, 0);
 if (!VAR_9->cfgbar)
  return -VAR_1;

 FUNC_12(VAR_7);
 if (FUNC_6(&VAR_7->dev, FUNC_0(64)) &&
     FUNC_6(&VAR_7->dev, FUNC_0(32)))
  return -VAR_0;

 VAR_9->msix_count = FUNC_10(VAR_7);
 if (VAR_9->msix_count < 0)
  return -VAR_0;

 VAR_9->msix_count = FUNC_8(VAR_7, 1, VAR_9->msix_count,
     VAR_4);
 if (VAR_9->msix_count < 0)
  return VAR_9->msix_count;

 VAR_9->irqs = FUNC_3(&VAR_7->dev, VAR_9->msix_count, sizeof(*VAR_9->irqs),
     VAR_2);
 if (!VAR_9->irqs)
  return -VAR_1;

 for (VAR_10 = 0; VAR_10 < VAR_9->msix_count; VAR_10++) {
  VAR_11 = FUNC_7(&VAR_9->irqs[VAR_10].srcu);
  if (VAR_11)
   return VAR_11;

  FUNC_1(&VAR_9->irqs[VAR_10].irq_list);
  VAR_11 = FUNC_5(&VAR_7->dev, FUNC_9(VAR_7, VAR_10),
           VAR_6, VAR_3,
           "vmd", &VAR_9->irqs[VAR_10]);
  if (VAR_11)
   return VAR_11;
 }

 FUNC_16(&VAR_9->cfg_lock);
 FUNC_11(VAR_7, VAR_9);
 VAR_11 = FUNC_17(VAR_9, (unsigned long) VAR_8->driver_data);
 if (VAR_11)
  return VAR_11;

 FUNC_2(&VAR_9->dev->dev, "Bound to PCI domain %04x\n",
   VAR_9->sysdata.domain);
 return 0;
}
