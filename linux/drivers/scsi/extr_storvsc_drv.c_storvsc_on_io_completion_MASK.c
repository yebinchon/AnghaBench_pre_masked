
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* cdb; int scsi_status; int srb_status; int data_transfer_length; int sense_info_length; int sense_data; } ;
struct vstor_packet {TYPE_2__ vm_srb; } ;
struct storvsc_device {int waiting_to_drain; scalar_t__ drain_notify; int num_outstanding_req; struct hv_device* device; } ;
struct storvsc_cmd_request {TYPE_1__* cmd; struct vstor_packet vstor_packet; } ;
struct hv_device {int dummy; } ;
struct TYPE_3__ {int sense_buffer; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct storvsc_cmd_request*,struct storvsc_device*) ;
 int FUNC_3 (struct hv_device*,int ,char*,struct storvsc_cmd_request*,int,...) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct storvsc_device *VAR_5,
      struct vstor_packet *VAR_6,
      struct storvsc_cmd_request *VAR_7)
{
 struct vstor_packet *VAR_8;
 struct hv_device *VAR_9 = VAR_5->device;

 VAR_8 = &VAR_7->vstor_packet;
 if ((VAR_8->vm_srb.cdb[0] == VAR_0) ||
    (VAR_8->vm_srb.cdb[0] == VAR_1)) {
  VAR_6->vm_srb.scsi_status = 0;
  VAR_6->vm_srb.srb_status = VAR_3;
 }



 VAR_8->vm_srb.scsi_status = VAR_6->vm_srb.scsi_status;
 VAR_8->vm_srb.srb_status = VAR_6->vm_srb.srb_status;
 VAR_8->vm_srb.sense_info_length =
 VAR_6->vm_srb.sense_info_length;

 if (VAR_6->vm_srb.scsi_status != 0 ||
     VAR_6->vm_srb.srb_status != VAR_3)
  FUNC_3(VAR_9, VAR_4,
   "cmd 0x%x scsi status 0x%x srb status 0x%x\n",
   VAR_8->vm_srb.cdb[0],
   VAR_6->vm_srb.scsi_status,
   VAR_6->vm_srb.srb_status);

 if ((VAR_6->vm_srb.scsi_status & 0xFF) == 0x02) {

  if (VAR_6->vm_srb.srb_status &
   VAR_2) {


   FUNC_3(VAR_9, VAR_4,
    "stor pkt %p autosense data valid - len %d\n",
    VAR_7, VAR_6->vm_srb.sense_info_length);

   FUNC_1(VAR_7->cmd->sense_buffer,
          VAR_6->vm_srb.sense_data,
          VAR_6->vm_srb.sense_info_length);

  }
 }

 VAR_8->vm_srb.data_transfer_length =
 VAR_6->vm_srb.data_transfer_length;

 FUNC_2(VAR_7, VAR_5);

 if (FUNC_0(&VAR_5->num_outstanding_req) &&
  VAR_5->drain_notify)
  FUNC_4(&VAR_5->waiting_to_drain);


}
