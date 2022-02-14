
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_ctrl_blk {size_t target; scalar_t__ tagmsg; struct scsi_ctrl_blk* next; } ;
struct initio_host {TYPE_1__* targets; int * act_tags; int * last_busy; struct scsi_ctrl_blk* first_busy; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct scsi_ctrl_blk*) ;

__attribute__((used)) static struct scsi_ctrl_blk *FUNC_1(struct initio_host * VAR_1)
{
 struct scsi_ctrl_blk *VAR_2;


 if ((VAR_2 = VAR_1->first_busy) != ((void*)0)) {
  if ((VAR_1->first_busy = VAR_2->next) == ((void*)0))
   VAR_1->last_busy = ((void*)0);
  VAR_2->next = ((void*)0);
  if (VAR_2->tagmsg)
   VAR_1->act_tags[VAR_2->target]--;
  else
   VAR_1->targets[VAR_2->target].flags &= ~VAR_0;
 }



 return VAR_2;
}
