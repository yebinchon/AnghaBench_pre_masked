
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int instr_processed; } ;
struct octeon_instr_queue {int lock; int instr_pending; TYPE_1__ stats; int host_write_index; int octeon_read_index; int fill_cnt; } ;
struct octeon_device_priv {int droq_tasklet; } ;
struct TYPE_12__ {int work; } ;
struct TYPE_11__ {int iq; int oq; } ;
struct TYPE_10__ {int (* free_mbox ) (struct octeon_device*) ;int (* disable_interrupt ) (struct octeon_device*,int ) ;int (* disable_io_queues ) (struct octeon_device*) ;} ;
struct octeon_device {int num_msix_irqs; TYPE_5__* pci_dev; TYPE_4__ nic_poll_work; TYPE_3__ io_qmask; TYPE_2__ fn_list; int * irq_name_storage; int * msix_entries; TYPE_8__* ioq_vector; int msix_on; struct octeon_instr_queue** instr_queue; int status; int app_mode; scalar_t__ priv; } ;
struct msix_entry {int vector; } ;
struct TYPE_14__ {int vector; } ;
struct TYPE_13__ {int reset_fn; int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct octeon_device*) ;
 int FUNC_2 (struct octeon_device*) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct octeon_device*) ;
 int FUNC_7 (int *,char*,int ) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int ,TYPE_8__*) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct octeon_device*,struct octeon_instr_queue*,int ) ;
 int FUNC_14 (struct octeon_device*,int) ;
 int FUNC_15 (struct octeon_device*) ;
 int FUNC_16 (struct octeon_device*) ;
 int FUNC_17 (int) ;
 int FUNC_18 (struct octeon_device*) ;
 int FUNC_19 (struct octeon_device*,int) ;
 int FUNC_20 (struct octeon_device*,int) ;
 int FUNC_21 (struct octeon_device*) ;
 int FUNC_22 (struct octeon_device*) ;
 int FUNC_23 (struct octeon_device*) ;
 int FUNC_24 (struct octeon_device*) ;
 int FUNC_25 (struct octeon_device*) ;
 int FUNC_26 (struct octeon_device*) ;
 int FUNC_27 (struct octeon_device*,int) ;
 int FUNC_28 (TYPE_5__*) ;
 int FUNC_29 (TYPE_5__*) ;
 int FUNC_30 (TYPE_5__*) ;
 int FUNC_31 (int) ;
 int FUNC_32 (int *) ;
 int FUNC_33 (int *) ;
 int FUNC_34 (struct octeon_device*) ;
 int FUNC_35 (struct octeon_device*,int ) ;
 int FUNC_36 (struct octeon_device*) ;
 int FUNC_37 (int *) ;
 int FUNC_38 (struct octeon_device*) ;

__attribute__((used)) static void FUNC_39(struct octeon_device *VAR_3)
{
 struct octeon_device_priv *VAR_4 =
  (struct octeon_device_priv *)VAR_3->priv;
 struct msix_entry *VAR_5;
 int VAR_6;

 switch (FUNC_3(&VAR_3->status)) {
 case 129:
 case 142:

  FUNC_4(&VAR_3->status, 136);

  VAR_3->app_mode = VAR_0;
  FUNC_7(&VAR_3->pci_dev->dev, "Device state is now %s\n",
   FUNC_12(&VAR_3->status));

  FUNC_31(VAR_1 / 10);


 case 139:

 case 135:
  if (FUNC_15(VAR_3))
   FUNC_8(&VAR_3->pci_dev->dev, "IQ had pending instructions\n");

  if (FUNC_38(VAR_3))
   FUNC_8(&VAR_3->pci_dev->dev, "There were pending requests\n");





  VAR_3->fn_list.disable_io_queues(VAR_3);

  if (FUNC_16(VAR_3))
   FUNC_8(&VAR_3->pci_dev->dev, "OQ had pending packets\n");




  for (VAR_6 = 0; VAR_6 < FUNC_1(VAR_3); VAR_6++) {
   struct octeon_instr_queue *VAR_7;

   if (!(VAR_3->io_qmask.iq & FUNC_0(VAR_6)))
    continue;
   VAR_7 = VAR_3->instr_queue[VAR_6];

   if (FUNC_3(&VAR_7->instr_pending)) {
    FUNC_32(&VAR_7->lock);
    VAR_7->fill_cnt = 0;
    VAR_7->octeon_read_index = VAR_7->host_write_index;
    VAR_7->stats.instr_processed +=
     FUNC_3(&VAR_7->instr_pending);
    FUNC_13(VAR_3, VAR_7, 0);
    FUNC_33(&VAR_7->lock);
   }
  }

  FUNC_14(VAR_3, 1);
  FUNC_24(VAR_3);
  FUNC_25(VAR_3);


 case 137:

  VAR_3->fn_list.disable_interrupt(VAR_3, VAR_2);

  if (VAR_3->msix_on) {
   VAR_5 = (struct msix_entry *)VAR_3->msix_entries;
   for (VAR_6 = 0; VAR_6 < VAR_3->num_msix_irqs; VAR_6++) {
    if (VAR_3->ioq_vector[VAR_6].vector) {
     FUNC_10(
       VAR_5[VAR_6].vector,
       ((void*)0));
     FUNC_9(VAR_5[VAR_6].vector,
       &VAR_3->ioq_vector[VAR_6]);
     VAR_3->ioq_vector[VAR_6].vector = 0;
    }
   }
   FUNC_30(VAR_3->pci_dev);
   FUNC_11(VAR_3->msix_entries);
   VAR_3->msix_entries = ((void*)0);
   FUNC_11(VAR_3->irq_name_storage);
   VAR_3->irq_name_storage = ((void*)0);
  }

  if (VAR_3->pci_dev->reset_fn)
   FUNC_26(VAR_3);
  else
   FUNC_6(VAR_3);


 case 133:
  FUNC_22(VAR_3);


 case 134:
  VAR_3->fn_list.free_mbox(VAR_3);


 case 136:
 case 140:
  FUNC_17(100);
  for (VAR_6 = 0; VAR_6 < FUNC_2(VAR_3); VAR_6++) {
   if (!(VAR_3->io_qmask.oq & FUNC_0(VAR_6)))
    continue;
   FUNC_19(VAR_3, VAR_6);
  }


 case 130:
  FUNC_21(VAR_3);


 case 138:
  for (VAR_6 = 0; VAR_6 < FUNC_1(VAR_3); VAR_6++) {
   if (!(VAR_3->io_qmask.iq & FUNC_0(VAR_6)))
    continue;
   FUNC_20(VAR_3, VAR_6);
  }


 case 128:
  FUNC_23(VAR_3);


 case 141:
  FUNC_18(VAR_3);
  FUNC_5(&VAR_3->nic_poll_work.work);


 case 131:
  FUNC_27(VAR_3, 0);
  FUNC_27(VAR_3, 1);


 case 132:
  FUNC_28(VAR_3->pci_dev);

  FUNC_29(VAR_3->pci_dev);


 case 143:

  break;
 }

 FUNC_37(&VAR_4->droq_tasklet);
}
