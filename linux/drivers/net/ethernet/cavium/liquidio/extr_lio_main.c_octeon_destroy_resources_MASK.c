
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int instr_processed; } ;
struct octeon_instr_queue {int lock; int instr_pending; TYPE_3__ stats; int host_write_index; int octeon_read_index; int fill_cnt; } ;
struct octeon_device_priv {int droq_tasklet; } ;
struct TYPE_14__ {int (* soft_reset ) (struct octeon_device*) ;int (* free_mbox ) (struct octeon_device*) ;int (* disable_interrupt ) (struct octeon_device*,int ) ;int (* disable_io_queues ) (struct octeon_device*) ;} ;
struct TYPE_12__ {int work; } ;
struct TYPE_11__ {int sriov_enabled; } ;
struct TYPE_15__ {int iq; int oq; } ;
struct octeon_device {int flags; size_t octeon_id; TYPE_6__* pci_dev; TYPE_4__ fn_list; int * adapter_fw_state; TYPE_2__ nic_poll_work; TYPE_1__ sriov_info; TYPE_5__ io_qmask; int * irq_name_storage; int * msix_entries; int vector; struct octeon_device* ioq_vector; int num_msix_irqs; int msix_on; struct octeon_instr_queue** instr_queue; int status; int app_mode; scalar_t__ priv; } ;
struct msix_entry {int vector; } ;
struct handshake {int started; int started_ok; int init; int init_ok; int pci_dev; } ;
struct TYPE_16__ {int irq; int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct octeon_device*) ;
 int FUNC_2 (struct octeon_device*) ;
 int VAR_5 ;
 int FUNC_3 (struct octeon_device*) ;
 int FUNC_4 (struct octeon_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,char*,int ) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (int ,struct octeon_device*) ;
 struct handshake* VAR_6 ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct octeon_device*,struct octeon_instr_queue*,int ) ;
 int FUNC_16 (struct octeon_device*,int) ;
 int FUNC_17 (struct octeon_device*) ;
 int FUNC_18 (struct octeon_device*) ;
 int FUNC_19 (int) ;
 int FUNC_20 (struct octeon_device*) ;
 int FUNC_21 (struct octeon_device*,int) ;
 int FUNC_22 (struct octeon_device*,int) ;
 int FUNC_23 (struct octeon_device*) ;
 int FUNC_24 (struct octeon_device*) ;
 int FUNC_25 (struct octeon_device*) ;
 int FUNC_26 (struct octeon_device*) ;
 int FUNC_27 (struct octeon_device*) ;
 int FUNC_28 (struct octeon_device*) ;
 int FUNC_29 (struct octeon_device*) ;
 int FUNC_30 (struct octeon_device*) ;
 int FUNC_31 (struct octeon_device*,int) ;
 int FUNC_32 (TYPE_6__*) ;
 int FUNC_33 (TYPE_6__*) ;
 int FUNC_34 (TYPE_6__*) ;
 int FUNC_35 (TYPE_6__*) ;
 int FUNC_36 (TYPE_6__*) ;
 int FUNC_37 (int) ;
 int FUNC_38 (int *) ;
 int FUNC_39 (int *) ;
 int FUNC_40 (struct octeon_device*) ;
 int FUNC_41 (struct octeon_device*,int ) ;
 int FUNC_42 (struct octeon_device*) ;
 int FUNC_43 (struct octeon_device*) ;
 int FUNC_44 (int *) ;
 int FUNC_45 (struct octeon_device*) ;

__attribute__((used)) static void FUNC_46(struct octeon_device *VAR_7)
{
 int VAR_8, VAR_9;
 struct msix_entry *VAR_10;
 struct octeon_device_priv *VAR_11 =
  (struct octeon_device_priv *)VAR_7->priv;

 struct handshake *VAR_12;

 switch (FUNC_5(&VAR_7->status)) {
 case 129:
 case 142:


  FUNC_6(&VAR_7->status, 136);

  VAR_7->app_mode = VAR_0;
  FUNC_9(&VAR_7->pci_dev->dev, "Device state is now %s\n",
   FUNC_14(&VAR_7->status));

  FUNC_37(VAR_2 / 10);


 case 139:


 case 143:

  FUNC_30(VAR_7);


 case 135:
  if (FUNC_17(VAR_7))
   FUNC_10(&VAR_7->pci_dev->dev, "IQ had pending instructions\n");

  if (FUNC_45(VAR_7))
   FUNC_10(&VAR_7->pci_dev->dev, "There were pending requests\n");





  VAR_7->fn_list.disable_io_queues(VAR_7);

  if (FUNC_18(VAR_7))
   FUNC_10(&VAR_7->pci_dev->dev, "OQ had pending packets\n");




  for (VAR_8 = 0; VAR_8 < FUNC_1(VAR_7); VAR_8++) {
   struct octeon_instr_queue *VAR_13;

   if (!(VAR_7->io_qmask.iq & FUNC_0(VAR_8)))
    continue;
   VAR_13 = VAR_7->instr_queue[VAR_8];

   if (FUNC_5(&VAR_13->instr_pending)) {
    FUNC_38(&VAR_13->lock);
    VAR_13->fill_cnt = 0;
    VAR_13->octeon_read_index = VAR_13->host_write_index;
    VAR_13->stats.instr_processed +=
     FUNC_5(&VAR_13->instr_pending);
    FUNC_15(VAR_7, VAR_13, 0);
    FUNC_39(&VAR_13->lock);
   }
  }

  FUNC_16(VAR_7, 1);
  FUNC_27(VAR_7);
  FUNC_28(VAR_7);


 case 137:

  VAR_7->fn_list.disable_interrupt(VAR_7, VAR_5);

  if (VAR_7->msix_on) {
   VAR_10 = (struct msix_entry *)VAR_7->msix_entries;
   for (VAR_8 = 0; VAR_8 < VAR_7->num_msix_irqs - 1; VAR_8++) {
    if (VAR_7->ioq_vector[VAR_8].vector) {

     FUNC_12(
       VAR_10[VAR_8].vector,
       ((void*)0));
     FUNC_11(VAR_10[VAR_8].vector,
       &VAR_7->ioq_vector[VAR_8]);
     VAR_7->ioq_vector[VAR_8].vector = 0;
    }
   }

   FUNC_11(VAR_10[VAR_8].vector, VAR_7);

   FUNC_35(VAR_7->pci_dev);
   FUNC_13(VAR_7->msix_entries);
   VAR_7->msix_entries = ((void*)0);
  } else {

   FUNC_11(VAR_7->pci_dev->irq, VAR_7);

   if (VAR_7->flags & VAR_3)
    FUNC_34(VAR_7->pci_dev);
  }

  FUNC_13(VAR_7->irq_name_storage);
  VAR_7->irq_name_storage = ((void*)0);


 case 133:
  if (FUNC_3(VAR_7))
   FUNC_25(VAR_7);


 case 134:
  if (FUNC_3(VAR_7))
   VAR_7->fn_list.free_mbox(VAR_7);


 case 136:
 case 140:

  FUNC_19(100);
  for (VAR_8 = 0; VAR_8 < FUNC_2(VAR_7); VAR_8++) {
   if (!(VAR_7->io_qmask.oq & FUNC_0(VAR_8)))
    continue;
   FUNC_21(VAR_7, VAR_8);
  }


  for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
   VAR_12 = &VAR_6[VAR_8];

   if (VAR_12->pci_dev) {
    VAR_6[VAR_7->octeon_id].init_ok = 0;
    FUNC_8(&VAR_6[VAR_7->octeon_id].init);
    VAR_6[VAR_7->octeon_id].started_ok = 0;
    FUNC_8(&VAR_6[VAR_7->octeon_id].started);
   }
  }


 case 130:
  FUNC_23(VAR_7);


 case 138:
  for (VAR_8 = 0; VAR_8 < FUNC_1(VAR_7); VAR_8++) {
   if (!(VAR_7->io_qmask.iq & FUNC_0(VAR_8)))
    continue;
   FUNC_22(VAR_7, VAR_8);
  }





 case 128:
  FUNC_26(VAR_7);


 case 141:
  FUNC_20(VAR_7);
  FUNC_7(&VAR_7->nic_poll_work.work);


 case 131:
  VAR_9 = FUNC_24(VAR_7);







  if (FUNC_5(VAR_7->adapter_fw_state) == VAR_1)
   FUNC_29(VAR_7);
  else if (FUNC_4(VAR_7) || !VAR_9)
   VAR_7->fn_list.soft_reset(VAR_7);

  FUNC_31(VAR_7, 0);
  FUNC_31(VAR_7, 1);


 case 132:
  FUNC_32(VAR_7->pci_dev);

  FUNC_33(VAR_7->pci_dev);


 case 144:

  break;
 }

 FUNC_44(&VAR_11->droq_tasklet);
}
