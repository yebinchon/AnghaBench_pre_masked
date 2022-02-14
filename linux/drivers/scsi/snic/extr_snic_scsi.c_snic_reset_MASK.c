
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hba_reset_fail; } ;
struct TYPE_4__ {TYPE_1__ reset; } ;
struct snic {TYPE_2__ s_stats; int snic_lock; int ios_inflight; } ;
struct scsi_cmnd {int dummy; } ;
struct Scsi_Host {int dummy; } ;
typedef enum snic_state { ____Placeholder_snic_state } snic_state ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct Scsi_Host*,char*,int) ;
 int FUNC_1 (struct Scsi_Host*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 struct snic* FUNC_7 (struct Scsi_Host*) ;
 scalar_t__ FUNC_8 (struct snic*) ;
 int FUNC_9 (struct snic*,struct scsi_cmnd*) ;
 int FUNC_10 (struct snic*,int) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;

int
FUNC_13(struct Scsi_Host *VAR_4, struct scsi_cmnd *VAR_5)
{
 struct snic *VAR_6 = FUNC_7(VAR_4);
 enum snic_state VAR_7;
 unsigned long VAR_8;
 int VAR_9 = VAR_0;


 VAR_7 = FUNC_8(VAR_6);

 FUNC_11(&VAR_6->snic_lock, VAR_8);
 if (FUNC_8(VAR_6) == VAR_1) {
  FUNC_12(&VAR_6->snic_lock, VAR_8);
  FUNC_1(VAR_4, "reset:prev reset is in progres\n");

  FUNC_5(VAR_2);
  VAR_9 = VAR_3;

  goto reset_end;
 }

 FUNC_10(VAR_6, VAR_1);
 FUNC_12(&VAR_6->snic_lock, VAR_8);



 while (FUNC_3(&VAR_6->ios_inflight))
  FUNC_6(FUNC_4(1));

 VAR_9 = FUNC_9(VAR_6, VAR_5);
 if (VAR_9) {
  FUNC_0(VAR_4,
         "reset:Host Reset Failed w/ err %d.\n",
         VAR_9);
  FUNC_11(&VAR_6->snic_lock, VAR_8);
  FUNC_10(VAR_6, VAR_7);
  FUNC_12(&VAR_6->snic_lock, VAR_8);
  FUNC_2(&VAR_6->s_stats.reset.hba_reset_fail);
  VAR_9 = VAR_0;

  goto reset_end;
 }

 VAR_9 = VAR_3;

reset_end:
 return VAR_9;
}
