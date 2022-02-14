
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_ctrl_blk {size_t target; struct scsi_ctrl_blk* next; scalar_t__ tagmsg; } ;
struct initio_host {TYPE_1__* targets; int * act_tags; struct scsi_ctrl_blk* last_busy; struct scsi_ctrl_blk* first_busy; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct scsi_ctrl_blk*) ;

__attribute__((used)) static void FUNC_1(struct initio_host * VAR_1, struct scsi_ctrl_blk * VAR_2)
{
 struct scsi_ctrl_blk *VAR_3, *VAR_4;





 VAR_4 = VAR_3 = VAR_1->first_busy;
 while (VAR_3 != ((void*)0)) {
  if (VAR_2 == VAR_3) {
   if (VAR_3 == VAR_1->first_busy) {
    if ((VAR_1->first_busy = VAR_3->next) == ((void*)0))
     VAR_1->last_busy = ((void*)0);
   } else {
    VAR_4->next = VAR_3->next;
    if (VAR_3 == VAR_1->last_busy)
     VAR_1->last_busy = VAR_4;
   }
   VAR_3->next = ((void*)0);
   if (VAR_3->tagmsg)
    VAR_1->act_tags[VAR_3->target]--;
   else
    VAR_1->targets[VAR_3->target].flags &= ~VAR_0;
   break;
  }
  VAR_4 = VAR_3;
  VAR_3 = VAR_3->next;
 }
 return;
}
