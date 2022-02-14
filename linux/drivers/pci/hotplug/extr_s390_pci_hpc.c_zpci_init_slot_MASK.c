
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zpci_dev {int fid; int bus; } ;
struct TYPE_2__ {int * ops; } ;
struct slot {int slot_list; TYPE_1__ hotplug_slot; struct zpci_dev* zdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct slot*) ;
 struct slot* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (TYPE_1__*,int ,int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (char*,int,char*,int) ;

int FUNC_5(struct zpci_dev *VAR_6)
{
 char VAR_7[VAR_2];
 struct slot *VAR_8;
 int VAR_9;

 if (!VAR_6)
  return 0;

 VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  goto error;

 VAR_8->zdev = VAR_6;
 VAR_8->hotplug_slot.ops = &VAR_5;

 FUNC_4(VAR_7, VAR_2, "%08x", VAR_6->fid);
 VAR_9 = FUNC_3(&VAR_8->hotplug_slot, VAR_6->bus,
        VAR_3, VAR_7);
 if (VAR_9)
  goto error_reg;

 FUNC_2(&VAR_8->slot_list, &VAR_4);
 return 0;

error_reg:
 FUNC_0(VAR_8);
error:
 return -VAR_0;
}
