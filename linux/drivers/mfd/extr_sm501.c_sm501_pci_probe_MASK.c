
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sm501_devdata {struct sm501_devdata* regs_claim; int regs; TYPE_1__* io_res; TYPE_1__* mem_res; int irq; TYPE_3__* dev; scalar_t__ pdev_id; int * platdata; } ;
struct pci_device_id {int dummy; } ;
struct TYPE_6__ {int * platform_data; } ;
struct pci_dev {TYPE_3__ dev; TYPE_1__* resource; int irq; scalar_t__ devfn; } ;
struct TYPE_5__ {int flags; } ;
struct TYPE_4__ {int start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_3__*,char*) ;
 int FUNC_1 (struct sm501_devdata*) ;
 struct sm501_devdata* FUNC_2 (int,int ) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int) ;
 int FUNC_6 (struct pci_dev*,int) ;
 int FUNC_7 (struct pci_dev*,struct sm501_devdata*) ;
 int FUNC_8 (struct sm501_devdata*) ;
 struct sm501_devdata* FUNC_9 (int ,int,char*) ;
 TYPE_2__ VAR_7 ;
 int FUNC_10 (struct sm501_devdata*) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_11(struct pci_dev *VAR_9,
         const struct pci_device_id *VAR_10)
{
 struct sm501_devdata *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_2(sizeof(*VAR_11), VAR_4);
 if (!VAR_11) {
  VAR_12 = -VAR_3;
  goto err1;
 }


 VAR_9->dev.platform_data = VAR_11->platdata = &VAR_8;


 VAR_11->pdev_id = 32 + VAR_9->devfn;

 FUNC_7(VAR_9, VAR_11);

 VAR_12 = FUNC_4(VAR_9);
 if (VAR_12) {
  FUNC_0(&VAR_9->dev, "cannot enable device\n");
  goto err2;
 }

 VAR_11->dev = &VAR_9->dev;
 VAR_11->irq = VAR_9->irq;
 if (!(FUNC_6(VAR_9, 0) & VAR_5)) {
  FUNC_0(&VAR_9->dev, "region #0 is not memory?\n");
  VAR_12 = -VAR_1;
  goto err3;
 }

 if (!(FUNC_6(VAR_9, 1) & VAR_5)) {
  FUNC_0(&VAR_9->dev, "region #1 is not memory?\n");
  VAR_12 = -VAR_1;
  goto err3;
 }



 VAR_11->io_res = &VAR_9->resource[1];
 VAR_11->mem_res = &VAR_9->resource[0];

 VAR_11->regs_claim = FUNC_9(VAR_11->io_res->start,
         0x100, "sm501");
 if (!VAR_11->regs_claim) {
  FUNC_0(&VAR_9->dev, "cannot claim registers\n");
  VAR_12= -VAR_0;
  goto err3;
 }

 VAR_11->regs = FUNC_5(VAR_9, 1);
 if (!VAR_11->regs) {
  FUNC_0(&VAR_9->dev, "cannot remap registers\n");
  VAR_12 = -VAR_2;
  goto err4;
 }

 FUNC_10(VAR_11);
 return 0;

 err4:
 FUNC_8(VAR_11->regs_claim);
 FUNC_1(VAR_11->regs_claim);
 err3:
 FUNC_3(VAR_9);
 err2:
 FUNC_1(VAR_11);
 err1:
 return VAR_12;
}
