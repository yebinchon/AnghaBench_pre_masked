
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_cmd {scalar_t__ t_state; int se_cmd_flags; int data_direction; int se_dev; TYPE_1__* se_tfo; scalar_t__ scsi_status; } ;
struct TYPE_2__ {int (* queue_data_in ) (struct se_cmd*) ;int (* queue_status ) (struct se_cmd*) ;} ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct se_cmd*) ;
 int FUNC_1 (struct se_cmd*) ;
 int FUNC_2 (struct se_cmd*) ;
 int FUNC_3 (struct se_cmd*) ;
 int FUNC_4 (struct se_cmd*,int ) ;
 int FUNC_5 (struct se_cmd*) ;
 int FUNC_6 (struct se_cmd*) ;
 int FUNC_7 (struct se_cmd*,int ,int,int) ;

__attribute__((used)) static void FUNC_8(struct se_cmd *VAR_5)
{
 int VAR_6 = 0;

 FUNC_6(VAR_5);
 if (VAR_5->t_state == VAR_4) {
  if (VAR_5->scsi_status)
   goto queue_status;

  FUNC_4(VAR_5, VAR_3);
  goto queue_status;
 }
 if (!(VAR_5->se_cmd_flags & VAR_2) &&
     VAR_5->se_cmd_flags & VAR_1)
  goto queue_status;

 switch (VAR_5->data_direction) {
 case 130:

  if (VAR_5->scsi_status &&
      !(VAR_5->se_cmd_flags & VAR_2))
   goto queue_status;

  FUNC_3(VAR_5);
  VAR_6 = VAR_5->se_tfo->queue_data_in(VAR_5);
  break;
 case 128:
  if (VAR_5->se_cmd_flags & VAR_0) {
   VAR_6 = VAR_5->se_tfo->queue_data_in(VAR_5);
   break;
  }

 case 129:
queue_status:
  FUNC_3(VAR_5);
  VAR_6 = VAR_5->se_tfo->queue_status(VAR_5);
  break;
 default:
  break;
 }

 if (VAR_6 < 0) {
  FUNC_7(VAR_5, VAR_5->se_dev, VAR_6, 0);
  return;
 }
 FUNC_5(VAR_5);
}
