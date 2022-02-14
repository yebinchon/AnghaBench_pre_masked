
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {int result; int (* scsi_done ) (struct scsi_cmnd*) ;} ;
struct ipr_cmnd {TYPE_1__* hrrq; int queue; scalar_t__ eh_comp; struct scsi_cmnd* scsi_cmd; } ;
struct TYPE_2__ {int hrrq_free_q; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct scsi_cmnd*) ;
 int FUNC_3 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_4(struct ipr_cmnd *VAR_1)
{
 struct scsi_cmnd *VAR_2 = VAR_1->scsi_cmd;

 VAR_2->result |= (VAR_0 << 16);

 FUNC_2(VAR_1->scsi_cmd);
 VAR_2->scsi_done(VAR_2);
 if (VAR_1->eh_comp)
  FUNC_0(VAR_1->eh_comp);
 FUNC_1(&VAR_1->queue, &VAR_1->hrrq->hrrq_free_q);
}
