
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sense_iu {int status; void* len; void* tag; int iu_id; } ;
struct se_cmd {scalar_t__ scsi_sense_length; int scsi_status; } ;
struct usbg_cmd {scalar_t__ tag; int state; struct uas_stream* stream; struct sense_iu sense_iu; struct se_cmd se_cmd; } ;
struct uas_stream {TYPE_1__* req_status; } ;
struct TYPE_2__ {int complete; struct sense_iu* buf; scalar_t__ length; struct usbg_cmd* context; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (scalar_t__) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(struct usbg_cmd *VAR_3)
{
 struct se_cmd *VAR_4 = &VAR_3->se_cmd;
 struct sense_iu *VAR_5 = &VAR_3->sense_iu;
 struct uas_stream *VAR_6 = VAR_3->stream;

 VAR_3->state = VAR_1;
 VAR_5->iu_id = VAR_0;
 VAR_5->tag = FUNC_0(VAR_3->tag);




 VAR_5->len = FUNC_0(VAR_4->scsi_sense_length);
 VAR_5->status = VAR_4->scsi_status;
 VAR_6->req_status->context = VAR_3;
 VAR_6->req_status->length = VAR_4->scsi_sense_length + 16;
 VAR_6->req_status->buf = VAR_5;
 VAR_6->req_status->complete = VAR_2;
}
