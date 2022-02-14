
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct vmscsi_request {int data_transfer_length; scalar_t__ srb_status; scalar_t__ scsi_status; } ;
struct vmbus_channel_packet_multipage_buffer {int dummy; } ;
struct storvsc_device {struct Scsi_Host* host; } ;
struct TYPE_4__ {struct vmscsi_request vm_srb; } ;
struct storvsc_cmd_request {int payload_sz; TYPE_3__* payload; TYPE_1__ vstor_packet; struct scsi_cmnd* cmd; } ;
struct scsi_sense_hdr {scalar_t__ sense_key; int asc; int ascq; } ;
struct scsi_cmnd {int (* scsi_done ) (struct scsi_cmnd*) ;int device; int sense_buffer; scalar_t__ result; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_5__ {int len; } ;
struct TYPE_6__ {TYPE_2__ range; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (int ,int ,struct scsi_sense_hdr*) ;
 int FUNC_3 (int ,char*,struct scsi_sense_hdr*) ;
 int FUNC_4 (struct scsi_cmnd*,int) ;
 int FUNC_5 (struct vmscsi_request*,struct scsi_cmnd*,struct Scsi_Host*,int,int ) ;
 int FUNC_6 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_7(struct storvsc_cmd_request *VAR_5,
           struct storvsc_device *VAR_6)
{
 struct scsi_cmnd *VAR_7 = VAR_5->cmd;
 struct scsi_sense_hdr VAR_8;
 struct vmscsi_request *VAR_9;
 u32 VAR_10;
 struct Scsi_Host *VAR_11;
 u32 VAR_12 = VAR_5->payload_sz;
 void *VAR_13 = VAR_5->payload;

 VAR_11 = VAR_6->host;

 VAR_9 = &VAR_5->vstor_packet.vm_srb;
 VAR_10 = VAR_9->data_transfer_length;

 VAR_7->result = VAR_9->scsi_status;

 if (VAR_7->result) {
  if (FUNC_2(VAR_7->sense_buffer,
    VAR_1, &VAR_8) &&
      !(VAR_8.sense_key == VAR_0 &&
     VAR_8.asc == 0x03A) &&
      FUNC_0(VAR_4))
   FUNC_3(VAR_7->device, "storvsc",
          &VAR_8);
 }

 if (VAR_9->srb_status != VAR_3) {
  FUNC_5(VAR_9, VAR_7, VAR_11, VAR_8.asc,
      VAR_8.ascq);





  if (VAR_9->srb_status != VAR_2)
   VAR_10 = 0;
 }

 FUNC_4(VAR_7,
  VAR_5->payload->range.len - VAR_10);

 VAR_7->scsi_done(VAR_7);

 if (VAR_12 >
  sizeof(struct vmbus_channel_packet_multipage_buffer))
  FUNC_1(VAR_13);
}
