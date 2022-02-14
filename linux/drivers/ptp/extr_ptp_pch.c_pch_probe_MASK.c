
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; int irq; } ;
struct pch_dev {scalar_t__ mem_base; int mem_size; TYPE_2__* regs; int ptp_clock; int register_lock; struct pci_dev* pdev; int irq; int caps; } ;
typedef int s32 ;
struct TYPE_5__ {int event; int trgt_hi; int trgt_lo; int addend; } ;
struct TYPE_4__ {int station; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,...) ;
 TYPE_2__* FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int,int *) ;
 int VAR_9 ;
 int FUNC_6 (struct pch_dev*) ;
 struct pch_dev* FUNC_7 (int,int ) ;
 int FUNC_8 (struct pch_dev*) ;
 TYPE_1__ VAR_10 ;
 int FUNC_9 (struct pch_dev*) ;
 scalar_t__ FUNC_10 (int ,struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (struct pci_dev*) ;
 int FUNC_13 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_14 (struct pci_dev*,int ) ;
 int FUNC_15 (struct pci_dev*,struct pch_dev*) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (int ) ;
 int VAR_11 ;
 int FUNC_18 (scalar_t__,int ) ;
 int FUNC_19 (int ,int *,int ,int ,struct pch_dev*) ;
 int FUNC_20 (scalar_t__,int ,char*) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *,unsigned long) ;
 int FUNC_23 (int *,unsigned long) ;
 scalar_t__ FUNC_24 (int ,char*) ;

__attribute__((used)) static s32
FUNC_25(struct pci_dev *VAR_12, const struct pci_device_id *VAR_13)
{
 s32 VAR_14;
 unsigned long VAR_15;
 struct pch_dev *VAR_16;

 VAR_16 = FUNC_7(sizeof(struct pch_dev), VAR_4);
 if (VAR_16 == ((void*)0))
  return -VAR_3;


 VAR_14 = FUNC_12(VAR_12);
 if (VAR_14 != 0) {
  FUNC_2(&VAR_12->dev, "could not enable the pci device\n");
  goto err_pci_en;
 }

 VAR_16->mem_base = FUNC_14(VAR_12, VAR_5);
 if (!VAR_16->mem_base) {
  FUNC_2(&VAR_12->dev, "could not locate IO memory address\n");
  VAR_14 = -VAR_2;
  goto err_pci_start;
 }


 VAR_16->mem_size = FUNC_13(VAR_12, VAR_5);


 if (!FUNC_20(VAR_16->mem_base, VAR_16->mem_size, "1588_regs")) {
  FUNC_2(&VAR_12->dev,
   "could not allocate register memory space\n");
  VAR_14 = -VAR_1;
  goto err_req_mem_region;
 }


 VAR_16->regs = FUNC_3(VAR_16->mem_base, VAR_16->mem_size);

 if (!VAR_16->regs) {
  FUNC_2(&VAR_12->dev, "Could not get virtual address\n");
  VAR_14 = -VAR_3;
  goto err_ioremap;
 }

 VAR_16->caps = VAR_11;
 VAR_16->ptp_clock = FUNC_16(&VAR_16->caps, &VAR_12->dev);
 if (FUNC_0(VAR_16->ptp_clock)) {
  VAR_14 = FUNC_1(VAR_16->ptp_clock);
  goto err_ptp_clock_reg;
 }

 FUNC_21(&VAR_16->register_lock);

 VAR_14 = FUNC_19(VAR_12->irq, &VAR_9, VAR_6, VAR_7, VAR_16);
 if (VAR_14 != 0) {
  FUNC_2(&VAR_12->dev, "failed to get irq %d\n", VAR_12->irq);
  goto err_req_irq;
 }


 VAR_16->irq = VAR_12->irq;
 VAR_16->pdev = VAR_12;
 FUNC_15(VAR_12, VAR_16);

 FUNC_22(&VAR_16->register_lock, VAR_15);

 FUNC_9(VAR_16);

 FUNC_5(VAR_0, &VAR_16->regs->addend);
 FUNC_5(1, &VAR_16->regs->trgt_lo);
 FUNC_5(0, &VAR_16->regs->trgt_hi);
 FUNC_5(VAR_8, &VAR_16->regs->event);

 FUNC_8(VAR_16);

 if (FUNC_24(VAR_10.station, "00:00:00:00:00:00") != 0) {
  if (FUNC_10(VAR_10.station, VAR_12) != 0) {
   FUNC_2(&VAR_12->dev,
   "Invalid station address parameter\n"
   "Module loaded but station address not set correctly\n"
   );
  }
 }
 FUNC_23(&VAR_16->register_lock, VAR_15);
 return 0;

err_req_irq:
 FUNC_17(VAR_16->ptp_clock);
err_ptp_clock_reg:
 FUNC_4(VAR_16->regs);
 VAR_16->regs = ((void*)0);

err_ioremap:
 FUNC_18(VAR_16->mem_base, VAR_16->mem_size);

err_req_mem_region:
 VAR_16->mem_base = 0;

err_pci_start:
 FUNC_11(VAR_12);

err_pci_en:
 FUNC_6(VAR_16);
 FUNC_2(&VAR_12->dev, "probe failed(ret=0x%x)\n", VAR_14);

 return VAR_14;
}
