
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct reset_stats {int fnic_reset_failures; int fnic_reset_completions; int fnic_resets; } ;
struct TYPE_3__ {struct reset_stats reset_stats; } ;
struct fnic {TYPE_2__* lport; TYPE_1__ fnic_stats; } ;
struct fc_lport {int dummy; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_4__ {int host; } ;


 int FUNC_0 (int ,int ,char*,...) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fc_lport*) ;
 struct fnic* FUNC_3 (struct fc_lport*) ;
 struct fc_lport* FUNC_4 (struct Scsi_Host*) ;

int FUNC_5(struct Scsi_Host *VAR_1)
{
 struct fc_lport *VAR_2;
 struct fnic *VAR_3;
 int VAR_4 = 0;
 struct reset_stats *VAR_5;

 VAR_2 = FUNC_4(VAR_1);
 VAR_3 = FUNC_3(VAR_2);
 VAR_5 = &VAR_3->fnic_stats.reset_stats;

 FUNC_0(VAR_0, VAR_3->lport->host,
        "fnic_reset called\n");

 FUNC_1(&VAR_5->fnic_resets);





 VAR_4 = FUNC_2(VAR_2);

 FUNC_0(VAR_0, VAR_3->lport->host,
        "Returning from fnic reset %s\n",
        (VAR_4 == 0) ?
        "SUCCESS" : "FAILED");

 if (VAR_4 == 0)
  FUNC_1(&VAR_5->fnic_reset_completions);
 else
  FUNC_1(&VAR_5->fnic_reset_failures);

 return VAR_4;
}
