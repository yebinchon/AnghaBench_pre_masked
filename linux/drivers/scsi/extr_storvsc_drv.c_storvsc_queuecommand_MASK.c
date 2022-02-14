
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_6__ {int time_out_value; int srb_flags; int queue_action; int queue_tag; } ;
struct vmscsi_request {int cdb_length; int cdb; int lun; int target_id; int path_id; int port_number; TYPE_2__ win8_extension; int data_in; } ;
struct TYPE_8__ {int len; int * pfn_array; int offset; } ;
struct vmbus_packet_mpb_array {TYPE_4__ range; } ;
struct TYPE_5__ {struct vmscsi_request vm_srb; } ;
struct storvsc_cmd_request {int payload_sz; struct vmbus_packet_mpb_array* payload; int mpb; TYPE_1__ vstor_packet; struct scsi_cmnd* cmd; } ;
struct scsi_cmnd {int sc_data_direction; int cmnd; int cmd_len; TYPE_3__* device; int (* scsi_done ) (struct scsi_cmnd*) ;} ;
struct scatterlist {int offset; } ;
struct hv_host_device {int port; struct hv_device* dev; } ;
struct hv_device {int dummy; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_7__ {int lun; int id; int channel; scalar_t__ tagged_supported; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (int,char*,int) ;
 int VAR_16 ;
 int FUNC_1 () ;
 int FUNC_2 (struct vmbus_packet_mpb_array*) ;
 struct vmbus_packet_mpb_array* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (struct scsi_cmnd*) ;
 struct storvsc_cmd_request* FUNC_8 (struct scsi_cmnd*) ;
 unsigned int FUNC_9 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_10 (struct scsi_cmnd*) ;
 struct scatterlist* FUNC_11 (struct scatterlist*) ;
 int FUNC_12 (struct scatterlist*) ;
 struct hv_host_device* FUNC_13 (struct Scsi_Host*) ;
 int FUNC_14 (struct hv_device*,struct storvsc_cmd_request*,int ) ;
 int FUNC_15 (struct scsi_cmnd*) ;
 int FUNC_16 (struct scsi_cmnd*) ;
 scalar_t__ VAR_17 ;

__attribute__((used)) static int FUNC_17(struct Scsi_Host *VAR_18, struct scsi_cmnd *VAR_19)
{
 int VAR_20;
 struct hv_host_device *VAR_21 = FUNC_13(VAR_18);
 struct hv_device *VAR_22 = VAR_21->dev;
 struct storvsc_cmd_request *VAR_23 = FUNC_8(VAR_19);
 int VAR_24;
 struct scatterlist *VAR_25;
 unsigned int VAR_26 = 0;
 struct vmscsi_request *VAR_27;
 struct scatterlist *VAR_28;
 struct vmbus_packet_mpb_array *VAR_29;
 u32 VAR_30;
 u32 VAR_31;

 if (VAR_17 <= VAR_15) {
  if (!FUNC_15(VAR_19)) {
   VAR_19->scsi_done(VAR_19);
   return 0;
  }
 }


 VAR_23->cmd = VAR_19;

 VAR_27 = &VAR_23->vstor_packet.vm_srb;
 VAR_27->win8_extension.time_out_value = 60;

 VAR_27->win8_extension.srb_flags |=
  VAR_9;

 if (VAR_19->device->tagged_supported) {
  VAR_27->win8_extension.srb_flags |=
  (VAR_12 | VAR_11);
  VAR_27->win8_extension.queue_tag = VAR_6;
  VAR_27->win8_extension.queue_action = VAR_13;
 }


 switch (VAR_19->sc_data_direction) {
 case 128:
  VAR_27->data_in = VAR_16;
  VAR_27->win8_extension.srb_flags |= VAR_8;
  break;
 case 130:
  VAR_27->data_in = VAR_4;
  VAR_27->win8_extension.srb_flags |= VAR_7;
  break;
 case 129:
  VAR_27->data_in = VAR_14;
  VAR_27->win8_extension.srb_flags |= VAR_10;
  break;
 default:




  FUNC_0(1, "Unexpected data direction: %d\n",
       VAR_19->sc_data_direction);
  return -VAR_1;
 }


 VAR_27->port_number = VAR_21->port;
 VAR_27->path_id = VAR_19->device->channel;
 VAR_27->target_id = VAR_19->device->id;
 VAR_27->lun = VAR_19->device->lun;

 VAR_27->cdb_length = VAR_19->cmd_len;

 FUNC_4(VAR_27->cdb, VAR_19->cmnd, VAR_27->cdb_length);

 VAR_25 = (struct scatterlist *)FUNC_10(VAR_19);
 VAR_26 = FUNC_9(VAR_19);

 VAR_31 = FUNC_7(VAR_19);
 VAR_29 = (struct vmbus_packet_mpb_array *)&VAR_23->mpb;
 VAR_30 = sizeof(VAR_23->mpb);

 if (VAR_26) {
  if (VAR_26 > VAR_3) {

   VAR_30 = (VAR_26 * sizeof(u64) +
          sizeof(struct vmbus_packet_mpb_array));
   VAR_29 = FUNC_3(VAR_30, VAR_2);
   if (!VAR_29)
    return VAR_5;
  }

  VAR_29->range.len = VAR_31;
  VAR_29->range.offset = VAR_25[0].offset;

  VAR_28 = VAR_25;
  for (VAR_24 = 0; VAR_24 < VAR_26; VAR_24++) {
   VAR_29->range.pfn_array[VAR_24] =
    FUNC_5(FUNC_12((VAR_28)));
   VAR_28 = FUNC_11(VAR_28);
  }
 }

 VAR_23->payload = VAR_29;
 VAR_23->payload_sz = VAR_30;


 VAR_20 = FUNC_14(VAR_22, VAR_23, FUNC_1());
 FUNC_6();

 if (VAR_20 == -VAR_0) {
  if (VAR_30 > sizeof(VAR_23->mpb))
   FUNC_2(VAR_29);

  return VAR_5;
 }

 return 0;
}
