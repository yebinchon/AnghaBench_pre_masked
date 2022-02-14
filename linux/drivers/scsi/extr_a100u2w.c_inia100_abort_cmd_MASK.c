
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct scsi_cmnd {int dummy; } ;
struct orc_scb {scalar_t__ tag_msg; scalar_t__ status; struct orc_extended_scb* escb; } ;
struct orc_host {int allocation_lock; struct orc_scb* scb_virt; } ;
struct orc_extended_scb {struct scsi_cmnd* srb; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct orc_host*,struct orc_scb*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct orc_host * VAR_3, struct scsi_cmnd *VAR_4)
{
 struct orc_extended_scb *VAR_5;
 struct orc_scb *VAR_6;
 u8 VAR_7;
 unsigned long VAR_8;

 FUNC_1(&(VAR_3->allocation_lock), VAR_8);

 VAR_6 = VAR_3->scb_virt;





 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++, VAR_6++) {
  VAR_5 = VAR_6->escb;
  if (VAR_6->status && VAR_5->srb == VAR_4) {
   if (VAR_6->tag_msg == 0) {
    goto out;
   } else {

    if (FUNC_0(VAR_3, VAR_6)) {
     VAR_5->srb = ((void*)0);
     FUNC_2(&VAR_3->allocation_lock, VAR_8);
     return VAR_2;
    } else
     goto out;
   }
  }
 }
out:
 FUNC_2(&VAR_3->allocation_lock, VAR_8);
 return VAR_0;
}
