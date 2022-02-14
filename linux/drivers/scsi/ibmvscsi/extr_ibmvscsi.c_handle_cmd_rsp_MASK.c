
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct srp_rsp {scalar_t__ opcode; int status; int flags; int data_in_res_cnt; int data_out_res_cnt; int sense_data_len; int data; } ;
struct TYPE_8__ {int cmd; } ;
struct TYPE_9__ {TYPE_3__ srp; } ;
struct srp_event_struct {int (* cmnd_done ) (struct scsi_cmnd*) ;TYPE_5__* hostdata; TYPE_4__ iu; struct scsi_cmnd* cmnd; TYPE_2__* xfer_iu; } ;
struct scsi_cmnd {int result; int sense_buffer; } ;
struct TYPE_10__ {int dev; } ;
struct TYPE_6__ {struct srp_rsp rsp; } ;
struct TYPE_7__ {TYPE_1__ srp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (struct scsi_cmnd*,int ) ;
 int FUNC_5 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int *,struct srp_event_struct*,int ) ;

__attribute__((used)) static void FUNC_8(struct srp_event_struct *VAR_4)
{
 struct srp_rsp *VAR_5 = &VAR_4->xfer_iu->srp.rsp;
 struct scsi_cmnd *VAR_6 = VAR_4->cmnd;

 if (FUNC_6(VAR_5->opcode != VAR_1)) {
  if (FUNC_3())
   FUNC_1(VAR_4->hostdata->dev,
     "bad SRP RSP type %#02x\n", VAR_5->opcode);
 }

 if (VAR_6) {
  VAR_6->result |= VAR_5->status;
  if (((VAR_6->result >> 1) & 0x1f) == VAR_0)
   FUNC_2(VAR_6->sense_buffer,
          VAR_5->data,
          FUNC_0(VAR_5->sense_data_len));
  FUNC_7(&VAR_4->iu.srp.cmd,
          VAR_4,
          VAR_4->hostdata->dev);

  if (VAR_5->flags & VAR_3)
   FUNC_4(VAR_6,
           FUNC_0(VAR_5->data_out_res_cnt));
  else if (VAR_5->flags & VAR_2)
   FUNC_4(VAR_6, FUNC_0(VAR_5->data_in_res_cnt));
 }

 if (VAR_4->cmnd_done)
  VAR_4->cmnd_done(VAR_6);
}
