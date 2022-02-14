
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fnic {int fnic_stats_debugfs_host; void* fnic_reset_debugfs_file; void* fnic_stats_debugfs_file; TYPE_2__* lport; } ;
typedef int name ;
struct TYPE_4__ {TYPE_1__* host; } ;
struct TYPE_3__ {int host_no; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 void* FUNC_1 (char*,int,int ,struct fnic*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*,int,char*,int) ;

void FUNC_3(struct fnic *VAR_6)
{
 char VAR_7[16];

 FUNC_2(VAR_7, sizeof(VAR_7), "host%d", VAR_6->lport->host->host_no);

 VAR_6->fnic_stats_debugfs_host = FUNC_0(VAR_7,
      VAR_5);

 VAR_6->fnic_stats_debugfs_file = FUNC_1("stats",
      VAR_0|VAR_1|VAR_2,
      VAR_6->fnic_stats_debugfs_host,
      VAR_6,
      &VAR_4);

 VAR_6->fnic_reset_debugfs_file = FUNC_1("reset_stats",
      VAR_0|VAR_1|VAR_2,
      VAR_6->fnic_stats_debugfs_host,
      VAR_6,
      &VAR_3);
}
