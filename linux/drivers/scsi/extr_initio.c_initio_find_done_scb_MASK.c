
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_ctrl_blk {struct scsi_ctrl_blk* next; } ;
struct initio_host {int * last_done; struct scsi_ctrl_blk* first_done; } ;


 int FUNC_0 (char*,struct scsi_ctrl_blk*) ;

struct scsi_ctrl_blk *FUNC_1(struct initio_host * VAR_0)
{
 struct scsi_ctrl_blk *VAR_1;

 if ((VAR_1 = VAR_0->first_done) != ((void*)0)) {
  if ((VAR_0->first_done = VAR_1->next) == ((void*)0))
   VAR_0->last_done = ((void*)0);
  VAR_1->next = ((void*)0);
 }



 return VAR_1;
}
