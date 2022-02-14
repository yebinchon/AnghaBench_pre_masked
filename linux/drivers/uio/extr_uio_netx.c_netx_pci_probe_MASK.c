
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uio_info {char* name; char* version; TYPE_1__* mem; int handler; int irq_flags; int irq; } ;
struct pci_device_id {int device; } ;
struct pci_dev {int dev; int irq; } ;
struct TYPE_2__ {scalar_t__ internal_addr; int memtype; int size; int addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int FUNC_0 (int *,char*,char*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (struct uio_info*) ;
 struct uio_info* FUNC_5 (int,int ) ;
 int VAR_6 ;
 int FUNC_6 (struct pci_dev*) ;
 scalar_t__ FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*) ;
 scalar_t__ FUNC_9 (struct pci_dev*,char*) ;
 int FUNC_10 (struct pci_dev*,int) ;
 int FUNC_11 (struct pci_dev*,int) ;
 int FUNC_12 (struct pci_dev*,struct uio_info*) ;
 scalar_t__ FUNC_13 (int *,struct uio_info*) ;

__attribute__((used)) static int FUNC_14(struct pci_dev *VAR_7,
     const struct pci_device_id *VAR_8)
{
 struct uio_info *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_5(sizeof(struct uio_info), VAR_3);
 if (!VAR_9)
  return -VAR_2;

 if (FUNC_7(VAR_7))
  goto out_free;

 if (FUNC_9(VAR_7, "netx"))
  goto out_disable;

 switch (VAR_8->device) {
 case 128:
  VAR_10 = 0;
  VAR_9->name = "netx";
  break;
 case 129:
  VAR_10 = 0;
  VAR_9->name = "netplc";
  break;
 default:
  VAR_10 = 2;
  VAR_9->name = "netx_plx";
 }


 VAR_9->mem[0].addr = FUNC_11(VAR_7, VAR_10);
 if (!VAR_9->mem[0].addr)
  goto out_release;
 VAR_9->mem[0].internal_addr = FUNC_1(FUNC_11(VAR_7, VAR_10),
      FUNC_10(VAR_7, VAR_10));

 if (!VAR_9->mem[0].internal_addr)
   goto out_release;

 VAR_9->mem[0].size = FUNC_10(VAR_7, VAR_10);
 VAR_9->mem[0].memtype = VAR_5;
 VAR_9->irq = VAR_7->irq;
 VAR_9->irq_flags = VAR_4;
 VAR_9->handler = VAR_6;
 VAR_9->version = "0.0.1";


 FUNC_3(0, VAR_9->mem[0].internal_addr + VAR_0);

 if (FUNC_13(&VAR_7->dev, VAR_9))
  goto out_unmap;

 FUNC_12(VAR_7, VAR_9);
 FUNC_0(&VAR_7->dev, "Found %s card, registered UIO device.\n",
    VAR_9->name);

 return 0;

out_unmap:
 FUNC_2(VAR_9->mem[0].internal_addr);
out_release:
 FUNC_8(VAR_7);
out_disable:
 FUNC_6(VAR_7);
out_free:
 FUNC_4(VAR_9);
 return -VAR_1;
}
