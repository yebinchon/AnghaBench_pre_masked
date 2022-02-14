
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dev; } ;
struct TYPE_3__ {int sense_interrupt_reg; int sense_interrupt_reg32; int sense_interrupt_mask_reg; int clr_interrupt_mask_reg32; } ;
struct ipr_ioa_cfg {TYPE_2__* host; scalar_t__ msi_received; int msi_wait_q; TYPE_1__ regs; } ;
struct TYPE_4__ {int host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int,struct ipr_ioa_cfg*) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (struct ipr_ioa_cfg*,int ) ;
 int VAR_8 ;
 int FUNC_5 (struct pci_dev*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,int ,int ,int ,struct ipr_ioa_cfg*) ;
 int FUNC_8 (int ,unsigned long) ;
 int FUNC_9 (int ,unsigned long) ;
 int FUNC_10 (int ,scalar_t__,int ) ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static int FUNC_12(struct ipr_ioa_cfg *VAR_9, struct pci_dev *VAR_10)
{
 int VAR_11;
 volatile u32 VAR_12;
 unsigned long VAR_13 = 0;
 int VAR_14 = FUNC_5(VAR_10, 0);

 VAR_0;

 FUNC_8(VAR_9->host->host_lock, VAR_13);
 FUNC_3(&VAR_9->msi_wait_q);
 VAR_9->msi_received = 0;
 FUNC_4(VAR_9, ~VAR_4);
 FUNC_11(VAR_5, VAR_9->regs.clr_interrupt_mask_reg32);
 VAR_12 = FUNC_6(VAR_9->regs.sense_interrupt_mask_reg);
 FUNC_9(VAR_9->host->host_lock, VAR_13);

 VAR_11 = FUNC_7(VAR_14, VAR_8, 0, VAR_3, VAR_9);
 if (VAR_11) {
  FUNC_0(&VAR_10->dev, "Can not assign irq %d\n", VAR_14);
  return VAR_11;
 } else if (VAR_7)
  FUNC_1(&VAR_10->dev, "IRQ assigned: %d\n", VAR_14);

 FUNC_11(VAR_5, VAR_9->regs.sense_interrupt_reg32);
 VAR_12 = FUNC_6(VAR_9->regs.sense_interrupt_reg);
 FUNC_10(VAR_9->msi_wait_q, VAR_9->msi_received, VAR_2);
 FUNC_8(VAR_9->host->host_lock, VAR_13);
 FUNC_4(VAR_9, ~VAR_4);

 if (!VAR_9->msi_received) {

  FUNC_1(&VAR_10->dev, "MSI test failed.  Falling back to LSI.\n");
  VAR_11 = -VAR_1;
 } else if (VAR_7)
  FUNC_1(&VAR_10->dev, "MSI test succeeded.\n");

 FUNC_9(VAR_9->host->host_lock, VAR_13);

 FUNC_2(VAR_14, VAR_9);

 VAR_6;

 return VAR_11;
}
