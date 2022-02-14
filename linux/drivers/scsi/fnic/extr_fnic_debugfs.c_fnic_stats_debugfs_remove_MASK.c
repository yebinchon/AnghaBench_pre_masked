
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fnic {int * fnic_stats_debugfs_host; int * fnic_reset_debugfs_file; int * fnic_stats_debugfs_file; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct fnic *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_0(VAR_0->fnic_stats_debugfs_file);
 VAR_0->fnic_stats_debugfs_file = ((void*)0);

 FUNC_0(VAR_0->fnic_reset_debugfs_file);
 VAR_0->fnic_reset_debugfs_file = ((void*)0);

 FUNC_0(VAR_0->fnic_stats_debugfs_host);
 VAR_0->fnic_stats_debugfs_host = ((void*)0);
}
