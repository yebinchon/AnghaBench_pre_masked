
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {TYPE_1__* request; int result; } ;
struct TYPE_2__ {int cmd_flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

int FUNC_4(struct scsi_cmnd *VAR_6)
{
 switch (FUNC_1(VAR_6->result)) {
 case 131:
  break;
 case 128:
  goto check_type;
 case 133:
  return (VAR_6->request->cmd_flags & VAR_4);
 case 130:
  return (VAR_6->request->cmd_flags & VAR_2);
 case 132:
  if (FUNC_2(VAR_6->result) == VAR_1 &&
      FUNC_3(VAR_6->result) == VAR_5)
   return 0;

 case 129:
  return (VAR_6->request->cmd_flags & VAR_3);
 }

 if (FUNC_3(VAR_6->result) != VAR_0)
  return 0;

check_type:




 if (VAR_6->request->cmd_flags & VAR_2 ||
     FUNC_0(VAR_6->request))
  return 1;
 else
  return 0;
}
