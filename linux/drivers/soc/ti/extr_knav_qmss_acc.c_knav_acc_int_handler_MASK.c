
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct knav_acc_info {int list_size; struct knav_pdsp_info* pdsp; } ;
struct knav_range_info {int queue_base; int flags; int num_irqs; int num_queues; TYPE_1__* irqs; struct knav_acc_channel* acc; struct knav_acc_info acc_info; struct knav_device* kdev; } ;
struct knav_queue_inst {int* descs; int notify_needed; int desc_tail; int desc_count; } ;
struct knav_pdsp_info {scalar_t__ intd; } ;
struct knav_device {int base_id; int dev; } ;
struct knav_acc_channel {int channel; size_t list_index; int** list_cpu; int retrigger_count; int * list_dma; } ;
typedef int irqreturn_t ;
typedef int dma_addr_t ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct knav_range_info*,struct knav_acc_channel*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ,char*,int,...) ;
 int FUNC_7 (int ,char*,int,...) ;
 int FUNC_8 (int ,int ,int,int ) ;
 int FUNC_9 (int ,int ,int,int ) ;
 struct knav_queue_inst* FUNC_10 (struct knav_device*,struct knav_range_info*,int) ;
 int FUNC_11 (int*,int ,int) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_14(int VAR_11, void *VAR_12)
{
 struct knav_acc_channel *VAR_13;
 struct knav_queue_inst *VAR_14 = ((void*)0);
 struct knav_range_info *VAR_15;
 struct knav_pdsp_info *VAR_16;
 struct knav_acc_info *VAR_17;
 struct knav_device *VAR_18;

 u32 *VAR_19, *VAR_20, VAR_21, VAR_22, VAR_23;
 int VAR_24, VAR_25, VAR_26 = 0;
 dma_addr_t VAR_27;

 VAR_15 = VAR_12;
 VAR_17 = &VAR_15->acc_info;
 VAR_18 = VAR_15->kdev;
 VAR_16 = VAR_15->acc_info.pdsp;
 VAR_13 = VAR_15->acc;

 VAR_24 = VAR_18->base_id + VAR_15->queue_base;
 if ((VAR_15->flags & VAR_10) == 0) {
  for (VAR_26 = 0; VAR_26 < VAR_15->num_irqs; VAR_26++)
   if (VAR_15->irqs[VAR_26].irq == VAR_11)
    break;
  VAR_14 = FUNC_10(VAR_18, VAR_15, VAR_26);
  VAR_13 += VAR_26;
 }

 VAR_25 = VAR_13->channel;
 VAR_27 = VAR_13->list_dma[VAR_13->list_index];
 VAR_20 = VAR_13->list_cpu[VAR_13->list_index];
 FUNC_6(VAR_18->dev, "acc-irq: channel %d, list %d, virt %p, dma %pad\n",
  VAR_25, VAR_13->list_index, VAR_20, &VAR_27);
 if (FUNC_5(&VAR_13->retrigger_count)) {
  FUNC_3(&VAR_13->retrigger_count);
  FUNC_2(VAR_15, VAR_13);
  FUNC_13(1, VAR_16->intd + FUNC_0(VAR_25));

  FUNC_13(VAR_0 + VAR_25,
          VAR_16->intd + VAR_3);

  return VAR_9;
 }

 VAR_23 = FUNC_12(VAR_16->intd + FUNC_0(VAR_25));
 FUNC_1(!VAR_23);
 FUNC_8(VAR_18->dev, VAR_27, VAR_17->list_size,
    VAR_7);

 for (VAR_19 = VAR_20; VAR_19 < VAR_20 + (VAR_17->list_size / sizeof(u32));
      VAR_19 += VAR_6) {
  if (VAR_6 == 1) {
   FUNC_6(VAR_18->dev,
    "acc-irq: list %d, entry @%p, %08x\n",
    VAR_13->list_index, VAR_19, VAR_19[0]);
  } else if (VAR_6 == 2) {
   FUNC_6(VAR_18->dev,
    "acc-irq: list %d, entry @%p, %08x %08x\n",
    VAR_13->list_index, VAR_19, VAR_19[0], VAR_19[1]);
  } else if (VAR_6 == 4) {
   FUNC_6(VAR_18->dev,
    "acc-irq: list %d, entry @%p, %08x %08x %08x %08x\n",
    VAR_13->list_index, VAR_19, VAR_19[0], VAR_19[1],
    VAR_19[2], VAR_19[3]);
  }

  VAR_21 = VAR_19[VAR_4];
  if (!VAR_21)
   break;

  if (VAR_15->flags & VAR_10) {
   VAR_26 = VAR_19[VAR_5] >> 16;
   if (VAR_26 < VAR_24 ||
       VAR_26 >= VAR_24 + VAR_15->num_queues) {
    FUNC_7(VAR_18->dev,
     "bad queue %d, expecting %d-%d\n",
     VAR_26, VAR_24,
     VAR_24 + VAR_15->num_queues);
    break;
   }
   VAR_26 -= VAR_24;
   VAR_14 = FUNC_10(VAR_18, VAR_15,
        VAR_26);
  }

  if (FUNC_4(&VAR_14->desc_count) >= VAR_2) {
   FUNC_3(&VAR_14->desc_count);
   FUNC_7(VAR_18->dev,
    "acc-irq: queue %d full, entry dropped\n",
    VAR_26 + VAR_24);
   continue;
  }

  VAR_22 = FUNC_4(&VAR_14->desc_tail) & VAR_1;
  VAR_14->descs[VAR_22] = VAR_21;
  VAR_14->notify_needed = 1;
  FUNC_6(VAR_18->dev, "acc-irq: enqueue %08x at %d, queue %d\n",
   VAR_21, VAR_22, VAR_26 + VAR_24);
 }

 FUNC_2(VAR_15, VAR_13);
 FUNC_11(VAR_20, 0, VAR_17->list_size);
 FUNC_9(VAR_18->dev, VAR_27, VAR_17->list_size,
       VAR_8);


 VAR_13->list_index ^= 1;


 FUNC_13(1, VAR_16->intd + FUNC_0(VAR_25));


 FUNC_13(VAR_0 + VAR_25,
         VAR_16->intd + VAR_3);

 return VAR_9;
}
