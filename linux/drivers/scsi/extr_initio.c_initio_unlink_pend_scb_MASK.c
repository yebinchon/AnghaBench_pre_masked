
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_ctrl_blk {struct scsi_ctrl_blk* next; } ;
struct initio_host {struct scsi_ctrl_blk* last_pending; struct scsi_ctrl_blk* first_pending; } ;


 int FUNC_0 (char*,struct scsi_ctrl_blk*) ;

__attribute__((used)) static void FUNC_1(struct initio_host * VAR_0, struct scsi_ctrl_blk * VAR_1)
{
 struct scsi_ctrl_blk *VAR_2, *VAR_3;





 VAR_3 = VAR_2 = VAR_0->first_pending;
 while (VAR_2 != ((void*)0)) {
  if (VAR_1 == VAR_2) {
   if (VAR_2 == VAR_0->first_pending) {
    if ((VAR_0->first_pending = VAR_2->next) == ((void*)0))
     VAR_0->last_pending = ((void*)0);
   } else {
    VAR_3->next = VAR_2->next;
    if (VAR_2 == VAR_0->last_pending)
     VAR_0->last_pending = VAR_3;
   }
   VAR_2->next = ((void*)0);
   break;
  }
  VAR_3 = VAR_2;
  VAR_2 = VAR_2->next;
 }
}
