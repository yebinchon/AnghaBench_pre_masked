
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_13__ ;
typedef struct TYPE_24__ TYPE_12__ ;
typedef struct TYPE_23__ TYPE_11__ ;
typedef struct TYPE_22__ TYPE_10__ ;


typedef int uint32_t ;
struct TYPE_31__ {void* buffer_addr; int command_id; } ;
struct TYPE_25__ {TYPE_6__ flashfw; } ;
struct TYPE_28__ {int list; } ;
struct TYPE_33__ {TYPE_7__* scsi_cmd; scalar_t__ timeout; scalar_t__ data_busaddr; TYPE_13__ cmd; int flags; scalar_t__ data_len; int callback; scalar_t__ op_code; scalar_t__ sg_len; int lun; int target_id; int bus; int scb_busaddr; TYPE_3__ sg_list; } ;
typedef TYPE_8__ ips_scb_t ;
struct TYPE_26__ {scalar_t__ type; scalar_t__ direction; void* count; int op_code; } ;
struct TYPE_24__ {TYPE_1__ flashfw; } ;
struct TYPE_27__ {TYPE_12__ cmd; } ;
struct TYPE_34__ {int BasicStatus; int ExtendedStatus; scalar_t__ TimeOut; TYPE_2__ CoppCP; } ;
typedef TYPE_9__ ips_passthru_t ;
struct TYPE_22__ {int flash_data; TYPE_5__* pcidev; scalar_t__ flash_datasize; } ;
typedef TYPE_10__ ips_ha_t ;
struct TYPE_32__ {int result; TYPE_4__* device; } ;
struct TYPE_30__ {int dev; } ;
struct TYPE_29__ {int lun; int id; int channel; } ;
struct TYPE_23__ {int list; } ;
typedef TYPE_11__ IPS_SG_LIST ;
typedef int IPS_IOCTL_CMD ;
typedef int IPS_HOST_COMMAND ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_10__*,TYPE_8__*) ;
 int FUNC_1 (TYPE_8__*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 void* FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int *,int ,scalar_t__,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (TYPE_10__*) ;
 int VAR_8 ;
 int FUNC_5 (TYPE_13__*,TYPE_12__*,int) ;
 int FUNC_6 (TYPE_12__*,int ,int) ;

__attribute__((used)) static int
FUNC_7(ips_ha_t * VAR_9, ips_passthru_t * VAR_10, ips_scb_t * VAR_11)
{
 IPS_SG_LIST VAR_12;
 uint32_t VAR_13;

 if (VAR_10->CoppCP.cmd.flashfw.type == VAR_3 &&
     VAR_10->CoppCP.cmd.flashfw.direction == VAR_6) {
  FUNC_6(&VAR_10->CoppCP.cmd, 0, sizeof (IPS_HOST_COMMAND));
  VAR_10->CoppCP.cmd.flashfw.op_code = VAR_1;
  VAR_10->CoppCP.cmd.flashfw.count = FUNC_2(VAR_9->flash_datasize);
 } else {
  VAR_10->BasicStatus = 0x0B;
  VAR_10->ExtendedStatus = 0x00;
  FUNC_4(VAR_9);
  return VAR_2;
 }

 VAR_12.list = VAR_11->sg_list.list;
 VAR_13 = VAR_11->scb_busaddr;

 FUNC_5(&VAR_11->cmd, &VAR_10->CoppCP.cmd, sizeof (IPS_IOCTL_CMD));

 VAR_11->sg_list.list = VAR_12.list;
 VAR_11->scb_busaddr = VAR_13;
 VAR_11->bus = VAR_11->scsi_cmd->device->channel;
 VAR_11->target_id = VAR_11->scsi_cmd->device->id;
 VAR_11->lun = VAR_11->scsi_cmd->device->lun;
 VAR_11->sg_len = 0;
 VAR_11->data_len = 0;
 VAR_11->flags = 0;
 VAR_11->op_code = 0;
 VAR_11->callback = VAR_8;
 VAR_11->timeout = VAR_7;

 VAR_11->data_len = VAR_9->flash_datasize;
 VAR_11->data_busaddr =
     FUNC_3(&VAR_9->pcidev->dev, VAR_9->flash_data, VAR_11->data_len,
      FUNC_1(VAR_11));
 VAR_11->flags |= VAR_4;
 VAR_11->cmd.flashfw.command_id = FUNC_0(VAR_9, VAR_11);
 VAR_11->cmd.flashfw.buffer_addr = FUNC_2(VAR_11->data_busaddr);
 if (VAR_10->TimeOut)
  VAR_11->timeout = VAR_10->TimeOut;
 VAR_11->scsi_cmd->result = VAR_0 << 16;
 return VAR_5;
}
