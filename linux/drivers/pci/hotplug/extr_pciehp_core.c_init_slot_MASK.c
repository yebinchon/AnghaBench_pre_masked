
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hotplug_slot_ops {int set_attention_status; int get_attention_status; int get_latch_status; int reset_slot; int get_adapter_status; int get_power_status; int disable_slot; int enable_slot; } ;
struct TYPE_6__ {struct hotplug_slot_ops* ops; } ;
struct controller {TYPE_2__* pcie; TYPE_3__ hotplug_slot; } ;
struct TYPE_5__ {TYPE_1__* port; } ;
struct TYPE_4__ {int subordinate; scalar_t__ hotplug_user_indicators; } ;


 scalar_t__ FUNC_0 (struct controller*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct controller*) ;
 int FUNC_2 (struct controller*) ;
 int VAR_2 ;
 int FUNC_3 (struct controller*,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct hotplug_slot_ops*) ;
 struct hotplug_slot_ops* FUNC_5 (int,int ) ;
 int FUNC_6 (TYPE_3__*,int ,int ,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_7 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_8(struct controller *VAR_13)
{
 struct hotplug_slot_ops *VAR_14;
 char VAR_15[VAR_2];
 int VAR_16;


 VAR_14 = FUNC_5(sizeof(*VAR_14), VAR_1);
 if (!VAR_14)
  return -VAR_0;

 VAR_14->enable_slot = VAR_11;
 VAR_14->disable_slot = VAR_10;
 VAR_14->get_power_status = VAR_5;
 VAR_14->get_adapter_status = VAR_3;
 VAR_14->reset_slot = VAR_8;
 if (FUNC_1(VAR_13))
  VAR_14->get_latch_status = VAR_4;
 if (FUNC_0(VAR_13)) {
  VAR_14->get_attention_status = VAR_6;
  VAR_14->set_attention_status = VAR_12;
 } else if (VAR_13->pcie->port->hotplug_user_indicators) {
  VAR_14->get_attention_status = VAR_7;
  VAR_14->set_attention_status = VAR_9;
 }


 VAR_13->hotplug_slot.ops = VAR_14;
 FUNC_7(VAR_15, VAR_2, "%u", FUNC_2(VAR_13));

 VAR_16 = FUNC_6(&VAR_13->hotplug_slot,
       VAR_13->pcie->port->subordinate, 0, VAR_15);
 if (VAR_16) {
  FUNC_3(VAR_13, "pci_hp_initialize failed: error %d\n", VAR_16);
  FUNC_4(VAR_14);
 }
 return VAR_16;
}
