
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int sent_command; } ;
struct TYPE_10__ {int phase; TYPE_1__ SCp; } ;
struct TYPE_12__ {TYPE_2__ scsi; TYPE_3__* SCpnt; } ;
struct TYPE_11__ {int cmd_len; int * cmnd; } ;
typedef TYPE_4__ FAS216_Info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,int) ;
 int FUNC_2 (TYPE_4__*,int ,int ) ;

__attribute__((used)) static void FUNC_3(FAS216_Info *VAR_6)
{
 int VAR_7;

 FUNC_0(VAR_6);

 FUNC_1(VAR_6, VAR_1|VAR_3);
 FUNC_1(VAR_6, VAR_0);


 for (VAR_7 = VAR_6->scsi.SCp.sent_command; VAR_7 < VAR_6->SCpnt->cmd_len; VAR_7++)
  FUNC_2(VAR_6, VAR_5, VAR_6->SCpnt->cmnd[VAR_7]);

 FUNC_1(VAR_6, VAR_2);

 VAR_6->scsi.phase = VAR_4;
}
