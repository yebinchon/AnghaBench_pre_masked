
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct scsi_sense_hdr {scalar_t__ sense_key; int asc; int ascq; } ;
struct scsi_cmnd {int underflow; scalar_t__ result; int sense_buffer; TYPE_2__* device; } ;
struct pqi_scsi_dev {int lun; int target; int bus; } ;
struct pqi_raid_error_info {scalar_t__ status; int data_out_result; int data; int response_data_length; int sense_data_length; int data_out_transferred; } ;
struct pqi_io_request {struct pqi_raid_error_info* error_info; struct scsi_cmnd* scmd; } ;
struct pqi_ctrl_info {TYPE_1__* scsi_host; } ;
struct TYPE_4__ {struct pqi_scsi_dev* hostdata; int host; } ;
struct TYPE_3__ {int host_no; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 size_t VAR_9 ;
 size_t FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,size_t) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,struct scsi_cmnd*,char*,int,int ,int ,int ,...) ;
 int FUNC_6 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_7 (int ,size_t,struct scsi_sense_hdr*) ;
 int FUNC_8 (struct scsi_cmnd*,int) ;
 int FUNC_9 (struct scsi_cmnd*,scalar_t__) ;
 struct pqi_ctrl_info* FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(struct pqi_io_request *VAR_10)
{
 u8 VAR_11;
 u8 VAR_12;
 struct scsi_cmnd *VAR_13;
 struct pqi_raid_error_info *VAR_14;
 size_t VAR_15;
 int VAR_16;
 int VAR_17;
 struct scsi_sense_hdr VAR_18;

 VAR_13 = VAR_10->scmd;
 if (!VAR_13)
  return;

 VAR_14 = VAR_10->error_info;
 VAR_11 = VAR_14->status;
 VAR_12 = VAR_3;

 switch (VAR_14->data_out_result) {
 case 142:
  break;
 case 129:
  VAR_17 =
   FUNC_1(&VAR_14->data_out_transferred);
  VAR_16 = FUNC_6(VAR_13) - VAR_17;
  FUNC_8(VAR_13, VAR_16);
  if (VAR_17 < VAR_13->underflow)
   VAR_12 = VAR_4;
  break;
 case 128:
 case 148:
  VAR_12 = VAR_0;
  break;
 case 130:
  VAR_12 = VAR_5;
  break;
 case 146:
 case 131:
 case 147:
 case 144:
 case 145:
 case 143:
 case 141:
 case 136:
 case 138:
 case 139:
 case 132:
 case 137:
 case 133:
 case 140:
 case 134:
 case 135:
 default:
  VAR_12 = VAR_1;
  break;
 }

 VAR_15 = FUNC_0(&VAR_14->sense_data_length);
 if (VAR_15 == 0)
  VAR_15 =
   FUNC_0(&VAR_14->response_data_length);
 if (VAR_15) {
  if (VAR_15 > sizeof(VAR_14->data))
   VAR_15 = sizeof(VAR_14->data);

  if (VAR_11 == VAR_8 &&
   FUNC_7(VAR_14->data,
    VAR_15, &VAR_18) &&
    VAR_18.sense_key == VAR_6 &&
    VAR_18.asc == 0x3e) {
   struct pqi_ctrl_info *VAR_19 = FUNC_10(VAR_13->device->host);
   struct pqi_scsi_dev *VAR_20 = VAR_13->device->hostdata;

   switch (VAR_18.ascq) {
   case 0x1:
    if (FUNC_4())
     FUNC_5(VAR_7, VAR_13, "received 'logical unit failure' from controller for scsi %d:%d:%d:%d\n",
      VAR_19->scsi_host->host_no, VAR_20->bus, VAR_20->target, VAR_20->lun);
    FUNC_3(VAR_13->device, "RAID");
    VAR_12 = VAR_2;
    break;

   default:
    if (FUNC_4())
     FUNC_5(VAR_7, VAR_13, "received unhandled error %d from controller for scsi %d:%d:%d:%d\n",
      VAR_18.ascq, VAR_19->scsi_host->host_no, VAR_20->bus, VAR_20->target, VAR_20->lun);
    break;
   }
  }

  if (VAR_15 > VAR_9)
   VAR_15 = VAR_9;
  FUNC_2(VAR_13->sense_buffer, VAR_14->data,
   VAR_15);
 }

 VAR_13->result = VAR_11;
 FUNC_9(VAR_13, VAR_12);
}
