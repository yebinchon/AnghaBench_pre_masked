
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * dfs_tgt_port_database; int * dfs_tgt_sess; int * dfs_naqp; } ;
struct qla_hw_data {int * dfs_dir; int * dfs_fce; int * dfs_tgt_counters; int * dfs_fw_resource_cnt; TYPE_1__ tgt; } ;
struct TYPE_5__ {struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * VAR_0 ;
 int VAR_1 ;

int
FUNC_3(scsi_qla_host_t *VAR_2)
{
 struct qla_hw_data *VAR_3 = VAR_2->hw;

 if (VAR_3->tgt.dfs_naqp) {
  FUNC_2(VAR_3->tgt.dfs_naqp);
  VAR_3->tgt.dfs_naqp = ((void*)0);
 }

 if (VAR_3->tgt.dfs_tgt_sess) {
  FUNC_2(VAR_3->tgt.dfs_tgt_sess);
  VAR_3->tgt.dfs_tgt_sess = ((void*)0);
 }

 if (VAR_3->tgt.dfs_tgt_port_database) {
  FUNC_2(VAR_3->tgt.dfs_tgt_port_database);
  VAR_3->tgt.dfs_tgt_port_database = ((void*)0);
 }

 if (VAR_3->dfs_fw_resource_cnt) {
  FUNC_2(VAR_3->dfs_fw_resource_cnt);
  VAR_3->dfs_fw_resource_cnt = ((void*)0);
 }

 if (VAR_3->dfs_tgt_counters) {
  FUNC_2(VAR_3->dfs_tgt_counters);
  VAR_3->dfs_tgt_counters = ((void*)0);
 }

 if (VAR_3->dfs_fce) {
  FUNC_2(VAR_3->dfs_fce);
  VAR_3->dfs_fce = ((void*)0);
 }

 if (VAR_3->dfs_dir) {
  FUNC_2(VAR_3->dfs_dir);
  VAR_3->dfs_dir = ((void*)0);
  FUNC_0(&VAR_1);
 }

 if (FUNC_1(&VAR_1) == 0 &&
     VAR_0) {
  FUNC_2(VAR_0);
  VAR_0 = ((void*)0);
 }

 return 0;
}
