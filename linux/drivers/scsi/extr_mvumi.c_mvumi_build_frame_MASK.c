
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {int sc_data_direction; int result; int sense_buffer; int * cmnd; int cmd_len; TYPE_1__* device; } ;
struct mvumi_msg_frame {unsigned short device_id; scalar_t__ data_transfer_length; scalar_t__ sg_counts; int * payload; int req_function; int cdb_length; int cdb; scalar_t__ cmd_flag; } ;
struct mvumi_hba {TYPE_2__* pdev; } ;
struct mvumi_cmd {struct mvumi_msg_frame* frame; int cmd_status; struct scsi_cmnd* scmd; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {scalar_t__ lun; scalar_t__ id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;




 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*,int,int ) ;
 int FUNC_1 (int ,int *,int ) ;
 scalar_t__ FUNC_2 (struct mvumi_hba*,struct scsi_cmnd*,int *,scalar_t__*) ;
 scalar_t__ FUNC_3 (struct scsi_cmnd*) ;
 int FUNC_4 (int ,int ,int ,int,int ) ;

__attribute__((used)) static unsigned char FUNC_5(struct mvumi_hba *VAR_9,
    struct scsi_cmnd *VAR_10, struct mvumi_cmd *VAR_11)
{
 struct mvumi_msg_frame *VAR_12;

 VAR_11->scmd = VAR_10;
 VAR_11->cmd_status = VAR_7;
 VAR_12 = VAR_11->frame;
 VAR_12->device_id = ((unsigned short) VAR_10->device->id) |
    (((unsigned short) VAR_10->device->lun) << 8);
 VAR_12->cmd_flag = 0;

 switch (VAR_10->sc_data_direction) {
 case 129:
  VAR_12->cmd_flag |= VAR_3;
  break;
 case 130:
  VAR_12->cmd_flag |= VAR_1;
  break;
 case 128:
  VAR_12->cmd_flag |= VAR_2;
  break;
 case 131:
 default:
  FUNC_0(&VAR_9->pdev->dev, "unexpected data direction[%d] "
   "cmd[0x%x]\n", VAR_10->sc_data_direction, VAR_10->cmnd[0]);
  goto error;
 }

 VAR_12->cdb_length = VAR_10->cmd_len;
 FUNC_1(VAR_12->cdb, VAR_10->cmnd, VAR_12->cdb_length);
 VAR_12->req_function = VAR_0;
 if (FUNC_3(VAR_10)) {
  if (FUNC_2(VAR_9, VAR_10, &VAR_12->payload[0],
   &VAR_12->sg_counts))
   goto error;

  VAR_12->data_transfer_length = FUNC_3(VAR_10);
 } else {
  VAR_12->sg_counts = 0;
  VAR_12->data_transfer_length = 0;
 }
 return 0;

error:
 VAR_10->result = (VAR_4 << 16) | (VAR_5 << 24) |
  VAR_8;
 FUNC_4(0, VAR_10->sense_buffer, VAR_6, 0x24,
         0);
 return -1;
}
