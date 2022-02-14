
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmcraid_isr_param {int hrrq_id; struct pmcraid_instance* drv_inst; } ;
struct TYPE_2__ {int host_ioa_interrupt_reg; } ;
struct pmcraid_instance {int num_hrrq; int interrupt_mode; struct pmcraid_isr_param* hrrq_vector; TYPE_1__ int_regs; struct pci_dev* pdev; } ;
struct pci_dev {scalar_t__ msix_enabled; } ;
typedef int irq_handler_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,struct pmcraid_isr_param*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct pci_dev*,int,int ,unsigned int) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int ,int ,unsigned int,int ,struct pmcraid_isr_param*) ;

__attribute__((used)) static int
FUNC_7(struct pmcraid_instance *VAR_9)
{
 struct pci_dev *VAR_10 = VAR_9->pdev;
 unsigned int VAR_11 = VAR_2, VAR_12;
 int VAR_13, VAR_14, VAR_15;
 irq_handler_t VAR_16;

 if (VAR_6)
  VAR_11 |= VAR_3;

 VAR_13 = FUNC_3(VAR_10, 1, VAR_5,
   VAR_11);
 if (VAR_13 < 0)
  return VAR_13;

 if (VAR_10->msix_enabled) {
  VAR_12 = 0;
  VAR_16 = VAR_8;
 } else {
  VAR_12 = VAR_1;
  VAR_16 = VAR_7;
 }

 for (VAR_15 = 0; VAR_15 < VAR_13; VAR_15++) {
  struct pmcraid_isr_param *VAR_17 = &VAR_9->hrrq_vector[VAR_15];

  VAR_17->hrrq_id = VAR_15;
  VAR_17->drv_inst = VAR_9;
  VAR_14 = FUNC_6(FUNC_5(VAR_10, VAR_15), VAR_16, VAR_12,
    VAR_4, VAR_17);
  if (VAR_14)
   goto out_unwind;
 }

 VAR_9->num_hrrq = VAR_13;
 if (VAR_10->msix_enabled) {
  VAR_9->interrupt_mode = 1;
  FUNC_2(VAR_0,
     VAR_9->int_regs.host_ioa_interrupt_reg);
  FUNC_1(VAR_9->int_regs.host_ioa_interrupt_reg);
 }

 return 0;

out_unwind:
 while (--VAR_15 > 0)
  FUNC_0(FUNC_5(VAR_10, VAR_15), &VAR_9->hrrq_vector[VAR_15]);
 FUNC_4(VAR_10);
 return VAR_14;
}
