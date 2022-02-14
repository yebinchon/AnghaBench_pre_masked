
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u16 ;
struct st_hba {TYPE_1__* host; struct st_ccb* ccb; } ;
struct st_ccb {TYPE_2__* cmd; int * req; } ;
struct TYPE_5__ {int result; int (* scsi_done ) (TYPE_2__*) ;} ;
struct TYPE_4__ {size_t can_queue; int host_lock; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(struct st_hba *VAR_0, int VAR_1)
{
 struct st_ccb *VAR_2;
 unsigned long VAR_3;
 u16 VAR_4;

 FUNC_1(VAR_0->host->host_lock, VAR_3);
 for (VAR_4 = 0; VAR_4 < VAR_0->host->can_queue; VAR_4++) {
  VAR_2 = &VAR_0->ccb[VAR_4];
  if (VAR_2->req == ((void*)0))
   continue;
  VAR_2->req = ((void*)0);
  if (VAR_2->cmd) {
   FUNC_0(VAR_2->cmd);
   VAR_2->cmd->result = VAR_1 << 16;
   VAR_2->cmd->scsi_done(VAR_2->cmd);
   VAR_2->cmd = ((void*)0);
  }
 }
 FUNC_2(VAR_0->host->host_lock, VAR_3);
}
