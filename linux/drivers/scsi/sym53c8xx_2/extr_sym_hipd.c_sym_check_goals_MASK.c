
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sym_trans {int width; int dt; scalar_t__ offset; scalar_t__ period; scalar_t__ qas; scalar_t__ iu; } ;
struct sym_hcb {scalar_t__ scsi_mode; int features; scalar_t__ maxoffs_dt; scalar_t__ minsync_dt; scalar_t__ maxsync_dt; scalar_t__ maxoffs; scalar_t__ minsync; scalar_t__ maxsync; } ;
struct scsi_target {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct scsi_target*) ;
 scalar_t__ FUNC_1 (struct scsi_target*) ;
 int FUNC_2 (struct scsi_target*) ;
 int FUNC_3 (struct scsi_target*) ;

__attribute__((used)) static void FUNC_4(struct sym_hcb *VAR_2, struct scsi_target *VAR_3,
  struct sym_trans *VAR_4)
{
 if (!FUNC_3(VAR_3))
  VAR_4->width = 0;

 if (!FUNC_2(VAR_3)) {
  VAR_4->iu = 0;
  VAR_4->dt = 0;
  VAR_4->qas = 0;
  VAR_4->offset = 0;
  return;
 }

 if (FUNC_0(VAR_3)) {
  if (FUNC_1(VAR_3))
   VAR_4->dt = 1;

  if (VAR_4->offset == 0)
   VAR_4->dt = 0;
 } else {
  VAR_4->dt = 0;
 }


 if ((VAR_2->scsi_mode != VAR_1) || !(VAR_2->features & VAR_0))
  VAR_4->dt = 0;

 if (VAR_4->dt) {

  VAR_4->width = 1;
  if (VAR_4->offset > VAR_2->maxoffs_dt)
   VAR_4->offset = VAR_2->maxoffs_dt;
  if (VAR_4->period < VAR_2->minsync_dt)
   VAR_4->period = VAR_2->minsync_dt;
  if (VAR_4->period > VAR_2->maxsync_dt)
   VAR_4->period = VAR_2->maxsync_dt;
 } else {
  VAR_4->iu = VAR_4->qas = 0;
  if (VAR_4->offset > VAR_2->maxoffs)
   VAR_4->offset = VAR_2->maxoffs;
  if (VAR_4->period < VAR_2->minsync)
   VAR_4->period = VAR_2->minsync;
  if (VAR_4->period > VAR_2->maxsync)
   VAR_4->period = VAR_2->maxsync;
 }
}
