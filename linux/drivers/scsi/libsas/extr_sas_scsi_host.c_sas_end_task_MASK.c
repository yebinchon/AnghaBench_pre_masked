
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct task_status_struct {scalar_t__ resp; int stat; int buf_valid_size; int buf; int open_rej_reason; int residual; } ;
struct scsi_cmnd {int result; int sense_buffer; scalar_t__ underflow; } ;
struct sas_task {TYPE_3__* dev; struct task_status_struct task_status; } ;
struct TYPE_6__ {TYPE_2__* port; } ;
struct TYPE_5__ {TYPE_1__* ha; } ;
struct TYPE_4__ {int sas_ha_name; } ;


 int FUNC_0 (struct scsi_cmnd*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (struct sas_task*) ;
 scalar_t__ FUNC_5 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_6 (struct scsi_cmnd*) ;
 int FUNC_7 (struct scsi_cmnd*,int ) ;

__attribute__((used)) static void FUNC_8(struct scsi_cmnd *VAR_9, struct sas_task *VAR_10)
{
 struct task_status_struct *VAR_11 = &VAR_10->task_status;
 int VAR_12 = 0, VAR_13 = 0;

 if (VAR_11->resp == VAR_7) {

  VAR_12 = VAR_3;
 } else {

  switch (VAR_11->stat) {
  case 136:
  case 135:
  case 131:
  case 134:
  case 132:
   VAR_12 = VAR_3;
   break;
  case 138:
   FUNC_7(VAR_9, VAR_11->residual);
   if (FUNC_5(VAR_9) - FUNC_6(VAR_9) < VAR_9->underflow)
    VAR_12 = VAR_2;
   break;
  case 139:
   VAR_12 = VAR_2;
   break;
  case 129:
   VAR_12 = VAR_5;
   break;
  case 137:
   VAR_12 = VAR_1;
   break;
  case 128:
   VAR_12 = VAR_4;
   break;
  case 133:
   if (VAR_11->open_rej_reason == VAR_6)
    VAR_12 = VAR_5;
   else
    VAR_12 = VAR_2;
   break;
  case 130:
   FUNC_3("LLDD:%s sent SAS_PROTO_RESP for an SSP task; please report this\n",
      VAR_10->dev->port->ha->sas_ha_name);
   break;
  case 140:
   VAR_12 = VAR_0;
   break;
  case 141:
   FUNC_1(VAR_9->sense_buffer, VAR_11->buf,
          FUNC_2(VAR_8, VAR_11->buf_valid_size));
   VAR_13 = 141;
   break;
  default:
   VAR_13 = VAR_11->stat;
   break;
  }
 }

 VAR_9->result = (VAR_12 << 16) | VAR_13;
 FUNC_0(VAR_9, ((void*)0));
 FUNC_4(VAR_10);
}
