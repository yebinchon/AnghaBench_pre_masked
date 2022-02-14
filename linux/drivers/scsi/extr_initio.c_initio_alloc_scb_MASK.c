
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_ctrl_blk {int status; struct scsi_ctrl_blk* next; } ;
struct initio_host {int avail_lock; int * last_avail; struct scsi_ctrl_blk* first_avail; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct scsi_ctrl_blk*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static struct scsi_ctrl_blk *FUNC_3(struct initio_host *VAR_1)
{
 struct scsi_ctrl_blk *VAR_2;
 unsigned long VAR_3;

 FUNC_1(&VAR_1->avail_lock, VAR_3);
 if ((VAR_2 = VAR_1->first_avail) != ((void*)0)) {



  if ((VAR_1->first_avail = VAR_2->next) == ((void*)0))
   VAR_1->last_avail = ((void*)0);
  VAR_2->next = ((void*)0);
  VAR_2->status = VAR_0;
 }
 FUNC_2(&VAR_1->avail_lock, VAR_3);
 return VAR_2;
}
