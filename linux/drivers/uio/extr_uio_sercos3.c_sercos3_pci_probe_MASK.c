
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uio_info {char* name; char* version; TYPE_1__* mem; int irqcontrol; int handler; int irq_flags; int irq; struct uio_info* priv; int ier0_cache_lock; } ;
struct sercos3_priv {char* name; char* version; TYPE_1__* mem; int irqcontrol; int handler; int irq_flags; int irq; struct sercos3_priv* priv; int ier0_cache_lock; } ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; int irq; } ;
struct TYPE_2__ {scalar_t__ internal_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct uio_info*) ;
 struct uio_info* FUNC_2 (int,int ) ;
 int FUNC_3 (struct pci_dev*) ;
 scalar_t__ FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 scalar_t__ FUNC_6 (struct pci_dev*,char*) ;
 int FUNC_7 (struct pci_dev*,struct uio_info*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_8 (struct pci_dev*,struct uio_info*,int,int) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,struct uio_info*) ;

__attribute__((used)) static int FUNC_11(struct pci_dev *VAR_6,
           const struct pci_device_id *VAR_7)
{
 struct uio_info *VAR_8;
 struct sercos3_priv *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_2(sizeof(struct uio_info), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_9 = FUNC_2(sizeof(struct sercos3_priv), VAR_2);
 if (!VAR_9)
  goto out_free;

 if (FUNC_4(VAR_6))
  goto out_free_priv;

 if (FUNC_6(VAR_6, "sercos3"))
  goto out_disable;


 if (FUNC_8(VAR_6, VAR_8, 0, 0))
  goto out_unmap;
 if (FUNC_8(VAR_6, VAR_8, 1, 2))
  goto out_unmap;
 if (FUNC_8(VAR_6, VAR_8, 2, 3))
  goto out_unmap;
 if (FUNC_8(VAR_6, VAR_8, 3, 4))
  goto out_unmap;
 if (FUNC_8(VAR_6, VAR_8, 4, 5))
  goto out_unmap;

 FUNC_9(&VAR_9->ier0_cache_lock);
 VAR_8->priv = VAR_9;
 VAR_8->name = "Sercos_III_PCI";
 VAR_8->version = "0.0.1";
 VAR_8->irq = VAR_6->irq;
 VAR_8->irq_flags = VAR_3;
 VAR_8->handler = VAR_4;
 VAR_8->irqcontrol = VAR_5;

 FUNC_7(VAR_6, VAR_8);

 if (FUNC_10(&VAR_6->dev, VAR_8))
  goto out_unmap;

 return 0;

out_unmap:
 for (VAR_10 = 0; VAR_10 < 5; VAR_10++) {
  if (VAR_8->mem[VAR_10].internal_addr)
   FUNC_0(VAR_8->mem[VAR_10].internal_addr);
 }
 FUNC_5(VAR_6);
out_disable:
 FUNC_3(VAR_6);
out_free_priv:
 FUNC_1(VAR_9);
out_free:
 FUNC_1(VAR_8);
 return -VAR_0;
}
