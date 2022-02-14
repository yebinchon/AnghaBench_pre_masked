
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct scsi_ctrl_blk {int lun; int target; struct scsi_ctrl_blk* next; } ;
struct initio_host {struct scsi_ctrl_blk* first_busy; } ;


 int FUNC_0 (char*,struct scsi_ctrl_blk*) ;

struct scsi_ctrl_blk *FUNC_1(struct initio_host * VAR_0, u16 VAR_1)
{
 struct scsi_ctrl_blk *VAR_2, *VAR_3;
 u16 VAR_4;


 VAR_3 = VAR_2 = VAR_0->first_busy;
 while (VAR_2 != ((void*)0)) {
  VAR_4 = (VAR_2->lun << 8) | (VAR_2->target);
  if (VAR_4 == VAR_1) {
   break;
  }
  VAR_3 = VAR_2;
  VAR_2 = VAR_2->next;
 }



 return VAR_2;
}
