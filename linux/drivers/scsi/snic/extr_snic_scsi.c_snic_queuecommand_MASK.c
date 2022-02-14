
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snic_tgt {int id; } ;
struct TYPE_4__ {int tgt_not_rdy; } ;
struct TYPE_5__ {TYPE_1__ misc; } ;
struct snic {int ios_inflight; TYPE_2__ s_stats; } ;
struct scsi_cmnd {int result; TYPE_3__* device; int * cmnd; int (* scsi_done ) (struct scsi_cmnd*) ;} ;
struct Scsi_Host {int dummy; } ;
struct TYPE_6__ {int lun; } ;


 int VAR_0 ;
 int FUNC_0 (struct Scsi_Host*,char*,...) ;
 size_t VAR_1 ;
 int FUNC_1 (struct Scsi_Host*,char*,struct scsi_cmnd*,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*) ;
 struct snic* FUNC_6 (struct Scsi_Host*) ;
 int FUNC_7 (struct scsi_cmnd*) ;
 size_t FUNC_8 (struct snic*) ;
 int FUNC_9 (struct snic*,struct snic_tgt*,struct scsi_cmnd*) ;
 int* VAR_2 ;
 int FUNC_10 (struct snic_tgt*) ;
 struct snic_tgt* FUNC_11 (int ) ;
 int FUNC_12 (struct scsi_cmnd*) ;

int
FUNC_13(struct Scsi_Host *VAR_3, struct scsi_cmnd *VAR_4)
{
 struct snic_tgt *VAR_5 = ((void*)0);
 struct snic *VAR_6 = FUNC_6(VAR_3);
 int VAR_7;

 VAR_5 = FUNC_11(FUNC_5(VAR_4->device));
 VAR_7 = FUNC_10(VAR_5);
 if (VAR_7) {
  FUNC_0(VAR_3, "Tgt %p id %d Not Ready.\n", VAR_5, VAR_5->id);
  FUNC_2(&VAR_6->s_stats.misc.tgt_not_rdy);
  VAR_4->result = VAR_7;
  VAR_4->scsi_done(VAR_4);

  return 0;
 }

 if (FUNC_8(VAR_6) != VAR_1) {
  FUNC_0(VAR_3, "snic state is %s\n",
         VAR_2[FUNC_8(VAR_6)]);

  return VAR_0;
 }
 FUNC_4(&VAR_6->ios_inflight);

 FUNC_1(VAR_3, "sc %p Tag %d (sc %0x) lun %lld in snic_qcmd\n",
        VAR_4, FUNC_7(VAR_4), VAR_4->cmnd[0], VAR_4->device->lun);

 VAR_7 = FUNC_9(VAR_6, VAR_5, VAR_4);
 if (VAR_7) {
  FUNC_0(VAR_3, "Failed to Q, Scsi Req w/ err %d.\n", VAR_7);
  VAR_7 = VAR_0;
 }

 FUNC_3(&VAR_6->ios_inflight);

 return VAR_7;
}
