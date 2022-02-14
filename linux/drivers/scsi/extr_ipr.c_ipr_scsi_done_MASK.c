
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct scsi_cmnd {int (* scsi_done ) (struct scsi_cmnd*) ;} ;
struct ipr_ioa_cfg {TYPE_5__* host; } ;
struct TYPE_6__ {int residual_data_len; int ioasc; } ;
struct TYPE_7__ {TYPE_1__ hdr; } ;
struct TYPE_8__ {TYPE_2__ ioasa; } ;
struct ipr_cmnd {TYPE_4__* hrrq; int queue; scalar_t__ eh_comp; TYPE_3__ s; struct scsi_cmnd* scsi_cmd; struct ipr_ioa_cfg* ioa_cfg; } ;
struct TYPE_10__ {int host_lock; } ;
struct TYPE_9__ {int _lock; int lock; int hrrq_free_q; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct ipr_ioa_cfg*,struct ipr_cmnd*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct scsi_cmnd*) ;
 int FUNC_7 (struct scsi_cmnd*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,unsigned long) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,unsigned long) ;
 int FUNC_12 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_13(struct ipr_cmnd *VAR_0)
{
 struct ipr_ioa_cfg *VAR_1 = VAR_0->ioa_cfg;
 struct scsi_cmnd *VAR_2 = VAR_0->scsi_cmd;
 u32 VAR_3 = FUNC_1(VAR_0->s.ioasa.hdr.ioasc);
 unsigned long VAR_4;

 FUNC_7(VAR_2, FUNC_1(VAR_0->s.ioasa.hdr.residual_data_len));

 if (FUNC_4(FUNC_0(VAR_3) == 0)) {
  FUNC_6(VAR_2);

  FUNC_9(VAR_0->hrrq->lock, VAR_4);
  VAR_2->scsi_done(VAR_2);
  if (VAR_0->eh_comp)
   FUNC_2(VAR_0->eh_comp);
  FUNC_5(&VAR_0->queue, &VAR_0->hrrq->hrrq_free_q);
  FUNC_11(VAR_0->hrrq->lock, VAR_4);
 } else {
  FUNC_9(VAR_1->host->host_lock, VAR_4);
  FUNC_8(&VAR_0->hrrq->_lock);
  FUNC_3(VAR_1, VAR_0);
  FUNC_10(&VAR_0->hrrq->_lock);
  FUNC_11(VAR_1->host->host_lock, VAR_4);
 }
}
