
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scsi_lun {int dummy; } ;
struct bfa_tskim_s {int tm_cmnd; int qe; int notify; int tsecs; struct scsi_lun lun; struct bfa_itnim_s* itnim; } ;
struct bfa_itnim_s {int tsk_q; } ;
typedef enum fcp_tm_cmnd { ____Placeholder_fcp_tm_cmnd } fcp_tm_cmnd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bfa_tskim_s*,int ) ;
 int FUNC_1 (struct bfa_itnim_s*,int ) ;
 int FUNC_2 (int *,int *) ;
 int VAR_2 ;

void
FUNC_3(struct bfa_tskim_s *VAR_3, struct bfa_itnim_s *VAR_4,
   struct scsi_lun VAR_5,
   enum fcp_tm_cmnd VAR_6, u8 VAR_7)
{
 VAR_3->itnim = VAR_4;
 VAR_3->lun = VAR_5;
 VAR_3->tm_cmnd = VAR_6;
 VAR_3->tsecs = VAR_7;
 VAR_3->notify = VAR_0;
 FUNC_1(VAR_4, VAR_2);

 FUNC_2(&VAR_3->qe, &VAR_4->tsk_q);
 FUNC_0(VAR_3, VAR_1);
}
