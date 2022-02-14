
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u32 ;
struct visor_segment_state {scalar_t__ alive; scalar_t__ operating; } ;
struct TYPE_11__ {scalar_t__ created; } ;
struct visor_device {struct controlvm_message_header* pending_msg_hdr; TYPE_2__ state; } ;
struct TYPE_10__ {struct visor_segment_state state; int dev_no; int bus_no; } ;
struct controlvm_message_packet {TYPE_1__ device_change_state; } ;
struct controlvm_message_header {int dummy; } ;
struct TYPE_13__ {int response_expected; } ;
struct TYPE_16__ {int id; TYPE_4__ flags; } ;
struct controlvm_message {TYPE_7__ hdr; struct controlvm_message_packet cmd; } ;
struct TYPE_17__ {TYPE_3__* acpi_device; } ;
struct TYPE_15__ {scalar_t__ alive; scalar_t__ operating; } ;
struct TYPE_14__ {scalar_t__ alive; scalar_t__ operating; } ;
struct TYPE_12__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_9__* VAR_5 ;
 int FUNC_0 (int ,TYPE_7__*,int) ;
 int FUNC_1 (int *,char*,int) ;
 struct controlvm_message_header* FUNC_2 (int,int ) ;
 int FUNC_3 (struct controlvm_message_header*,TYPE_7__*,int) ;
 TYPE_6__ VAR_6 ;
 TYPE_5__ VAR_7 ;
 struct visor_device* FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (struct visor_device*) ;
 int FUNC_6 (struct visor_device*) ;

__attribute__((used)) static int FUNC_7(struct controlvm_message *VAR_8)
{
 struct controlvm_message_packet *VAR_9 = &VAR_8->cmd;
 struct controlvm_message_header *VAR_10;
 u32 VAR_11 = VAR_9->device_change_state.bus_no;
 u32 VAR_12 = VAR_9->device_change_state.dev_no;
 struct visor_segment_state VAR_13 = VAR_9->device_change_state.state;
 struct visor_device *VAR_14;
 int VAR_15 = 0;

 VAR_14 = FUNC_4(VAR_11, VAR_12, ((void*)0));
 if (!VAR_14) {
  VAR_15 = -VAR_2;
  goto err_respond;
 }
 if (VAR_14->state.created == 0) {
  VAR_15 = -VAR_0;
  goto err_respond;
 }
 if (VAR_14->pending_msg_hdr) {

  VAR_15 = -VAR_1;
  goto err_respond;
 }

 if (VAR_8->hdr.flags.response_expected == 1) {
  VAR_10 = FUNC_2(sizeof(*VAR_10), VAR_4);
  if (!VAR_10) {
   VAR_15 = -VAR_3;
   goto err_respond;
  }
  FUNC_3(VAR_10, &VAR_8->hdr,
         sizeof(struct controlvm_message_header));
  VAR_14->pending_msg_hdr = VAR_10;
 }
 if (VAR_13.alive == VAR_6.alive &&
     VAR_13.operating == VAR_6.operating)

  VAR_15 = FUNC_6(VAR_14);

 else if (VAR_13.alive == VAR_7.alive &&
   VAR_13.operating == VAR_7.operating)




  VAR_15 = FUNC_5(VAR_14);
 if (VAR_15)
  goto err_respond;
 return 0;

err_respond:
 FUNC_1(&VAR_5->acpi_device->dev, "failed: %d\n", VAR_15);
 if (VAR_8->hdr.flags.response_expected == 1)
  FUNC_0(VAR_8->hdr.id, &VAR_8->hdr, VAR_15);
 return VAR_15;
}
