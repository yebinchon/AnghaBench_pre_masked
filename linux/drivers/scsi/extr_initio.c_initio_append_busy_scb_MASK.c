
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_ctrl_blk {size_t target; struct scsi_ctrl_blk* next; int status; scalar_t__ tagmsg; } ;
struct initio_host {struct scsi_ctrl_blk* last_busy; struct scsi_ctrl_blk* first_busy; TYPE_1__* targets; int * act_tags; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,struct scsi_ctrl_blk*) ;

__attribute__((used)) static void FUNC_1(struct initio_host * VAR_2, struct scsi_ctrl_blk * VAR_3)
{




 if (VAR_3->tagmsg)
  VAR_2->act_tags[VAR_3->target]++;
 else
  VAR_2->targets[VAR_3->target].flags |= VAR_1;
 VAR_3->status = VAR_0;
 VAR_3->next = ((void*)0);
 if (VAR_2->last_busy != ((void*)0)) {
  VAR_2->last_busy->next = VAR_3;
  VAR_2->last_busy = VAR_3;
 } else {
  VAR_2->first_busy = VAR_3;
  VAR_2->last_busy = VAR_3;
 }
}
