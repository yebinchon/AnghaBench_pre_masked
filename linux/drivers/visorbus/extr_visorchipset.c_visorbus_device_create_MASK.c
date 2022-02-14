
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* u32 ;
struct visorchannel {int dummy; } ;
struct TYPE_10__ {struct TYPE_10__* parent; } ;
struct TYPE_9__ {scalar_t__ created; } ;
struct visor_device {struct controlvm_message_header* pending_msg_hdr; int channel_type_guid; struct visorchannel* visorchannel; TYPE_2__ device; int inst; void* chipset_dev_no; void* chipset_bus_no; TYPE_1__ state; } ;
struct TYPE_12__ {int data_type_guid; int channel_addr; int dev_inst_guid; void* dev_no; void* bus_no; } ;
struct controlvm_message_packet {TYPE_4__ create_device; } ;
struct controlvm_message_header {int dummy; } ;
struct TYPE_13__ {int response_expected; } ;
struct TYPE_14__ {int id; TYPE_5__ flags; } ;
struct controlvm_message {TYPE_6__ hdr; struct controlvm_message_packet cmd; } ;
struct TYPE_15__ {TYPE_3__* acpi_device; } ;
struct TYPE_11__ {int dev; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_8__* VAR_7 ;
 int FUNC_0 (int ,TYPE_6__*,int) ;
 int FUNC_1 (struct visor_device*) ;
 int FUNC_2 (int *,char*,void*,...) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int FUNC_5 (struct visor_device*) ;
 void* FUNC_6 (int,int ) ;
 int FUNC_7 (struct controlvm_message_header*,TYPE_6__*,int) ;
 int FUNC_8 (struct controlvm_message*,int ) ;
 int VAR_8 ;
 struct visor_device* FUNC_9 (void*,void*,int *) ;
 struct visorchannel* FUNC_10 (int ,int ,int *,int) ;
 int FUNC_11 (struct visorchannel*) ;

__attribute__((used)) static int FUNC_12(struct controlvm_message *VAR_9)
{
 struct controlvm_message_packet *VAR_10 = &VAR_9->cmd;
 struct controlvm_message_header *VAR_11;
 u32 VAR_12 = VAR_10->create_device.bus_no;
 u32 VAR_13 = VAR_10->create_device.dev_no;
 struct visor_device *VAR_14;
 struct visor_device *VAR_15;
 struct visorchannel *VAR_16;
 int VAR_17;

 VAR_15 = FUNC_9(VAR_12, VAR_0, ((void*)0));
 if (!VAR_15) {
  FUNC_2(&VAR_7->acpi_device->dev,
   "failed to get bus by id: %d\n", VAR_12);
  VAR_17 = -VAR_4;
  goto err_respond;
 }
 if (VAR_15->state.created == 0) {
  FUNC_2(&VAR_7->acpi_device->dev,
   "bus not created, id: %d\n", VAR_12);
  VAR_17 = -VAR_3;
  goto err_respond;
 }
 VAR_14 = FUNC_9(VAR_12, VAR_13, ((void*)0));
 if (VAR_14 && VAR_14->state.created == 1) {
  FUNC_2(&VAR_7->acpi_device->dev,
   "failed to get bus by id: %d/%d\n", VAR_12, VAR_13);
  VAR_17 = -VAR_2;
  goto err_respond;
 }

 VAR_14 = FUNC_6(sizeof(*VAR_14), VAR_6);
 if (!VAR_14) {
  VAR_17 = -VAR_5;
  goto err_respond;
 }
 VAR_14->chipset_bus_no = VAR_12;
 VAR_14->chipset_dev_no = VAR_13;
 FUNC_3(&VAR_14->inst, &VAR_10->create_device.dev_inst_guid);
 VAR_14->device.parent = &VAR_15->device;
 VAR_16 = FUNC_10(VAR_10->create_device.channel_addr,
        VAR_6,
        &VAR_10->create_device.data_type_guid,
        1);
 if (!VAR_16) {
  FUNC_2(&VAR_7->acpi_device->dev,
   "failed to create visorchannel: %d/%d\n",
   VAR_12, VAR_13);
  VAR_17 = -VAR_5;
  goto err_free_dev_info;
 }
 VAR_14->visorchannel = VAR_16;
 FUNC_3(&VAR_14->channel_type_guid,
    &VAR_10->create_device.data_type_guid);
 if (FUNC_4(&VAR_10->create_device.data_type_guid,
         &VAR_8)) {
  VAR_17 = FUNC_8(VAR_9, VAR_1);
  if (VAR_17)
   goto err_destroy_visorchannel;
 }
 if (VAR_9->hdr.flags.response_expected == 1) {
  VAR_11 = FUNC_6(sizeof(*VAR_11), VAR_6);
  if (!VAR_11) {
   VAR_17 = -VAR_5;
   goto err_destroy_visorchannel;
  }
  FUNC_7(VAR_11, &VAR_9->hdr,
         sizeof(struct controlvm_message_header));
  VAR_14->pending_msg_hdr = VAR_11;
 }

 VAR_17 = FUNC_1(VAR_14);
 if (VAR_17)
  goto err_destroy_visorchannel;

 return 0;

err_destroy_visorchannel:
 FUNC_11(VAR_16);

err_free_dev_info:
 FUNC_5(VAR_14);

err_respond:
 if (VAR_9->hdr.flags.response_expected == 1)
  FUNC_0(VAR_9->hdr.id, &VAR_9->hdr, VAR_17);
 return VAR_17;
}
