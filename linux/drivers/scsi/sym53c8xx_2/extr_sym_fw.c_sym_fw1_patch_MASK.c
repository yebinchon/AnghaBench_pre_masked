
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sym_hcb {int features; int targtbl_ba; int dqueue_ba; int squeue_ba; scalar_t__ scriptb0; scalar_t__ scripta0; } ;
struct sym_fw1b_scr {void** targtbl; void** done_pos; void** startpos; } ;
struct sym_fw1a_scr {void** ungetjob; void** start; void** reselected; void** idle; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 struct sym_hcb* FUNC_1 (struct Scsi_Host*) ;

__attribute__((used)) static void
FUNC_2(struct Scsi_Host *VAR_3)
{
 struct sym_hcb *VAR_4 = FUNC_1(VAR_3);
 struct sym_fw1a_scr *VAR_5;
 struct sym_fw1b_scr *VAR_6;

 VAR_5 = (struct sym_fw1a_scr *) VAR_4->scripta0;
 VAR_6 = (struct sym_fw1b_scr *) VAR_4->scriptb0;




 if (!(VAR_4->features & VAR_0)) {
  VAR_5->idle[0] = FUNC_0(VAR_1);
  VAR_5->reselected[0] = FUNC_0(VAR_1);
  VAR_5->start[0] = FUNC_0(VAR_1);
 }
 VAR_6->startpos[0] = FUNC_0(VAR_4->squeue_ba);
 VAR_6->done_pos[0] = FUNC_0(VAR_4->dqueue_ba);
 VAR_6->targtbl[0] = FUNC_0(VAR_4->targtbl_ba);
}
