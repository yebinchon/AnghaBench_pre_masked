
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct hv_vmbus_device_id {int dummy; } ;
struct TYPE_5__ {int domain; int fwnode; } ;
struct hv_pcibus_device {TYPE_2__ sysdata; int wq; int cfg_addr; int irq_domain; int state; TYPE_1__* mem_config; int remove_event; int retarget_msi_interrupt_lock; int device_list_lock; int config_lock; int resources_for_children; int dr_list; int children; int remove_lock; struct hv_device* hdev; } ;
struct TYPE_6__ {int* b; } ;
struct hv_device {int channel; TYPE_3__ dev_instance; int device; } ;
struct TYPE_4__ {int start; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (struct hv_pcibus_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,char*,...) ;
 int FUNC_6 (int *,char*,int,int) ;
 int FUNC_7 (unsigned long) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct hv_pcibus_device*) ;
 int FUNC_10 (struct hv_pcibus_device*) ;
 int FUNC_11 (int) ;
 int FUNC_12 (struct hv_pcibus_device*) ;
 int FUNC_13 (struct hv_device*) ;
 int FUNC_14 (struct hv_pcibus_device*) ;
 int VAR_6 ;
 int FUNC_15 (struct hv_device*) ;
 int FUNC_16 (struct hv_device*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_17 (struct hv_pcibus_device*) ;
 int FUNC_18 (int) ;
 int FUNC_19 (struct hv_device*) ;
 int FUNC_20 (struct hv_device*,struct hv_pcibus_device*) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (char*) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (int ) ;
 char* FUNC_27 (int ,char*,TYPE_3__*) ;
 int FUNC_28 (char*) ;
 int VAR_9 ;
 int FUNC_29 (struct hv_pcibus_device*) ;
 int FUNC_30 (int *,int) ;
 int FUNC_31 (int *) ;
 int FUNC_32 (int ) ;
 int FUNC_33 (int ,int ,int ,int *,int ,int ,struct hv_pcibus_device*) ;

__attribute__((used)) static int FUNC_34(struct hv_device *VAR_10,
   const struct hv_vmbus_device_id *VAR_11)
{
 struct hv_pcibus_device *VAR_12;
 u16 VAR_13, VAR_14;
 char *VAR_15;
 int VAR_16;





 FUNC_0(sizeof(*VAR_12) > VAR_4);

 VAR_12 = (struct hv_pcibus_device *)FUNC_8(VAR_2);
 if (!VAR_12)
  return -VAR_1;
 VAR_12->state = VAR_7;
 VAR_13 = VAR_10->dev_instance.b[5] << 8 | VAR_10->dev_instance.b[4];
 VAR_14 = FUNC_11(VAR_13);

 if (VAR_14 == VAR_3) {
  FUNC_5(&VAR_10->device,
   "Unable to use dom# 0x%hx or other numbers", VAR_13);
  VAR_16 = -VAR_0;
  goto free_bus;
 }

 if (VAR_14 != VAR_13)
  FUNC_6(&VAR_10->device,
    "PCI dom# 0x%hx has collision, using 0x%hx",
    VAR_13, VAR_14);

 VAR_12->sysdata.domain = VAR_14;

 VAR_12->hdev = VAR_10;
 FUNC_30(&VAR_12->remove_lock, 1);
 FUNC_1(&VAR_12->children);
 FUNC_1(&VAR_12->dr_list);
 FUNC_1(&VAR_12->resources_for_children);
 FUNC_31(&VAR_12->config_lock);
 FUNC_31(&VAR_12->device_list_lock);
 FUNC_31(&VAR_12->retarget_msi_interrupt_lock);
 FUNC_21(&VAR_12->remove_event);
 VAR_12->wq = FUNC_2("hv_pci_%x", 0,
        VAR_12->sysdata.domain);
 if (!VAR_12->wq) {
  VAR_16 = -VAR_1;
  goto free_dom;
 }

 VAR_16 = FUNC_33(VAR_10->channel, VAR_9, VAR_9, ((void*)0), 0,
    VAR_6, VAR_12);
 if (VAR_16)
  goto destroy_wq;

 FUNC_20(VAR_10, VAR_12);

 VAR_16 = FUNC_15(VAR_10);
 if (VAR_16)
  goto close;

 VAR_16 = FUNC_9(VAR_12);
 if (VAR_16)
  goto close;

 VAR_12->cfg_addr = FUNC_22(VAR_12->mem_config->start,
     VAR_5);
 if (!VAR_12->cfg_addr) {
  FUNC_5(&VAR_10->device,
   "Unable to map a virtual address for config space\n");
  VAR_16 = -VAR_1;
  goto free_config;
 }

 VAR_15 = FUNC_27(VAR_2, "%pUL", &VAR_10->dev_instance);
 if (!VAR_15) {
  VAR_16 = -VAR_1;
  goto unmap;
 }

 VAR_12->sysdata.fwnode = FUNC_24(VAR_15);
 FUNC_28(VAR_15);
 if (!VAR_12->sysdata.fwnode) {
  VAR_16 = -VAR_1;
  goto unmap;
 }

 VAR_16 = FUNC_17(VAR_12);
 if (VAR_16)
  goto free_fwnode;

 VAR_16 = FUNC_16(VAR_10);
 if (VAR_16)
  goto free_irq_domain;

 VAR_16 = FUNC_13(VAR_10);
 if (VAR_16)
  goto free_irq_domain;

 VAR_16 = FUNC_12(VAR_12);
 if (VAR_16)
  goto free_irq_domain;

 VAR_16 = FUNC_19(VAR_10);
 if (VAR_16)
  goto free_windows;

 FUNC_29(VAR_12);

 VAR_12->state = VAR_8;

 VAR_16 = FUNC_3(VAR_12);
 if (VAR_16)
  goto free_windows;

 return 0;

free_windows:
 FUNC_14(VAR_12);
free_irq_domain:
 FUNC_26(VAR_12->irq_domain);
free_fwnode:
 FUNC_25(VAR_12->sysdata.fwnode);
unmap:
 FUNC_23(VAR_12->cfg_addr);
free_config:
 FUNC_10(VAR_12);
close:
 FUNC_32(VAR_10->channel);
destroy_wq:
 FUNC_4(VAR_12->wq);
free_dom:
 FUNC_18(VAR_12->sysdata.domain);
free_bus:
 FUNC_7((unsigned long)VAR_12);
 return VAR_16;
}
