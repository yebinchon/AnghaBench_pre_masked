
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fnic {int stats_reset_time; TYPE_1__* lport; int fnic_lock; int vdev; } ;
struct fc_lport {int dummy; } ;
struct fc_host_statistics {int dummy; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_2__ {int host; } ;


 int FUNC_0 (int ,int ,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct Scsi_Host*,struct fc_host_statistics*) ;
 struct fc_host_statistics* FUNC_2 (struct Scsi_Host*) ;
 int VAR_1 ;
 struct fnic* FUNC_3 (struct fc_lport*) ;
 int FUNC_4 (struct fc_host_statistics*,int ,int) ;
 struct fc_lport* FUNC_5 (struct Scsi_Host*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct Scsi_Host *VAR_2)
{
 int VAR_3;
 struct fc_lport *VAR_4 = FUNC_5(VAR_2);
 struct fnic *VAR_5 = FUNC_3(VAR_4);
 struct fc_host_statistics *VAR_6;
 unsigned long VAR_7;


 VAR_6 = FUNC_2(VAR_2);
 FUNC_1(VAR_2, VAR_6);

 FUNC_6(&VAR_5->fnic_lock, VAR_7);
 VAR_3 = FUNC_8(VAR_5->vdev);
 FUNC_7(&VAR_5->fnic_lock, VAR_7);

 if (VAR_3) {
  FUNC_0(VAR_0, VAR_5->lport->host,
    "fnic: Reset vnic stats failed"
    " 0x%x", VAR_3);
  return;
 }
 VAR_5->stats_reset_time = VAR_1;
 FUNC_4(VAR_6, 0, sizeof(*VAR_6));

 return;
}
