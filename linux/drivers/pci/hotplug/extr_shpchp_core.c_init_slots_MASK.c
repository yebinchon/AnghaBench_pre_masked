
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hotplug_slot {int * ops; } ;
struct slot {int hp_slot; int number; int wq; int slot_list; int presence_save; int latch_save; int attention_save; int pwr_save; scalar_t__ device; int bus; int work; int lock; int hpc_ops; struct controller* ctrl; struct hotplug_slot hotplug_slot; } ;
struct controller {int num_slots; int first_slot; int slot_num_inc; int slot_list; TYPE_1__* pci_dev; int slot_device_offset; int hpc_ops; } ;
struct TYPE_5__ {int number; } ;
struct TYPE_4__ {TYPE_2__* subordinate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int FUNC_1 (char*,int ,int ,int) ;
 int FUNC_2 (struct controller*,char*,int ,int ,scalar_t__,int,int,int ) ;
 int FUNC_3 (struct controller*,char*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct hotplug_slot*,int *) ;
 int FUNC_6 (struct hotplug_slot*,int *) ;
 int FUNC_7 (struct hotplug_slot*,int *) ;
 int FUNC_8 (struct hotplug_slot*,int *) ;
 int FUNC_9 (struct slot*) ;
 struct slot* FUNC_10 (int,int ) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (struct hotplug_slot*,TYPE_2__*,scalar_t__,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_15 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_16(struct controller *VAR_5)
{
 struct slot *VAR_6;
 struct hotplug_slot *VAR_7;
 char VAR_8[VAR_2];
 int VAR_9;
 int VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_5->num_slots; VAR_10++) {
  VAR_6 = FUNC_10(sizeof(*VAR_6), VAR_1);
  if (!VAR_6) {
   VAR_9 = -VAR_0;
   goto error;
  }

  VAR_7 = &VAR_6->hotplug_slot;

  VAR_6->hp_slot = VAR_10;
  VAR_6->ctrl = VAR_5;
  VAR_6->bus = VAR_5->pci_dev->subordinate->number;
  VAR_6->device = VAR_5->slot_device_offset + VAR_10;
  VAR_6->hpc_ops = VAR_5->hpc_ops;
  VAR_6->number = VAR_5->first_slot + (VAR_5->slot_num_inc * VAR_10);

  VAR_6->wq = FUNC_1("shpchp-%d", 0, 0, VAR_6->number);
  if (!VAR_6->wq) {
   VAR_9 = -VAR_0;
   goto error_slot;
  }

  FUNC_12(&VAR_6->lock);
  FUNC_0(&VAR_6->work, VAR_4);


  FUNC_15(VAR_8, VAR_2, "%d", VAR_6->number);
  VAR_7->ops = &VAR_3;

  FUNC_2(VAR_5, "Registering domain:bus:dev=%04x:%02x:%02x hp_slot=%x sun=%x slot_device_offset=%x\n",
    FUNC_13(VAR_5->pci_dev->subordinate),
    VAR_6->bus, VAR_6->device, VAR_6->hp_slot, VAR_6->number,
    VAR_5->slot_device_offset);
  VAR_9 = FUNC_14(VAR_7,
    VAR_5->pci_dev->subordinate, VAR_6->device, VAR_8);
  if (VAR_9) {
   FUNC_3(VAR_5, "pci_hp_register failed with error %d\n",
     VAR_9);
   goto error_slotwq;
  }

  FUNC_8(VAR_7, &VAR_6->pwr_save);
  FUNC_6(VAR_7, &VAR_6->attention_save);
  FUNC_7(VAR_7, &VAR_6->latch_save);
  FUNC_5(VAR_7, &VAR_6->presence_save);

  FUNC_11(&VAR_6->slot_list, &VAR_5->slot_list);
 }

 return 0;
error_slotwq:
 FUNC_4(VAR_6->wq);
error_slot:
 FUNC_9(VAR_6);
error:
 return VAR_9;
}
