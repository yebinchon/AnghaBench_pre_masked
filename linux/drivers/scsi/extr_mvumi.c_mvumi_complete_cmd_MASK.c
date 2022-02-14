
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * ptr; } ;
struct scsi_cmnd {int result; int (* scsi_done ) (struct scsi_cmnd*) ;int sc_data_direction; int sense_buffer; TYPE_1__ SCp; } ;
struct mvumi_sense_data {int dummy; } ;
struct mvumi_rsp_frame {int req_status; int rsp_flag; int payload; } ;
struct mvumi_hba {TYPE_2__* pdev; } ;
struct mvumi_cmd {struct scsi_cmnd* scmd; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct mvumi_hba*,struct mvumi_cmd*) ;
 scalar_t__ FUNC_3 (struct scsi_cmnd*) ;
 int FUNC_4 (struct scsi_cmnd*) ;
 int FUNC_5 (struct scsi_cmnd*) ;
 int FUNC_6 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_7(struct mvumi_hba *VAR_6, struct mvumi_cmd *VAR_7,
     struct mvumi_rsp_frame *VAR_8)
{
 struct scsi_cmnd *VAR_9 = VAR_7->scmd;

 VAR_7->scmd->SCp.ptr = ((void*)0);
 VAR_9->result = VAR_8->req_status;

 switch (VAR_8->req_status) {
 case 128:
  VAR_9->result |= VAR_3 << 16;
  break;
 case 130:
  VAR_9->result |= VAR_2 << 16;
  break;
 case 129:
  VAR_9->result |= (VAR_3 << 16);
  if (VAR_8->rsp_flag & VAR_0) {
   FUNC_1(VAR_7->scmd->sense_buffer, VAR_8->payload,
    sizeof(struct mvumi_sense_data));
   VAR_9->result |= (VAR_5 << 24);
  }
  break;
 default:
  VAR_9->result |= (VAR_4 << 24) | (VAR_1 << 16);
  break;
 }

 if (FUNC_3(VAR_9))
  FUNC_0(&VAR_6->pdev->dev, FUNC_5(VAR_9),
        FUNC_4(VAR_9),
        VAR_9->sc_data_direction);
 VAR_7->scmd->scsi_done(VAR_9);
 FUNC_2(VAR_6, VAR_7);
}
