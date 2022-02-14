
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct status_msg {scalar_t__ scsi_status; int * variable; } ;
struct st_hba {int dummy; } ;
struct st_ccb {TYPE_1__* cmd; } ;
typedef int __le32 ;
struct TYPE_3__ {scalar_t__* cmnd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct st_hba *VAR_2,
 struct st_ccb *VAR_3, struct status_msg *VAR_4)
{
 if (VAR_3->cmd->cmnd[0] == VAR_0 &&
  VAR_4->scsi_status != VAR_1)
  FUNC_2(VAR_3->cmd, FUNC_1(VAR_3->cmd) -
   FUNC_0(*(__le32 *)&VAR_4->variable[0]));
}
