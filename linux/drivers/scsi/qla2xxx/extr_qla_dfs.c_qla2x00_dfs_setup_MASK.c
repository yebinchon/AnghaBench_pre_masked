
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* dfs_naqp; void* dfs_tgt_sess; void* dfs_tgt_port_database; } ;
struct qla_hw_data {void* dfs_dir; TYPE_1__ tgt; void* dfs_fce; void* dfs_tgt_counters; void* dfs_fw_resource_cnt; int fce_mutex; int fce; } ;
struct TYPE_6__ {int host_str; struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;


 int FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 scalar_t__ FUNC_2 (struct qla_hw_data*) ;
 int FUNC_3 (struct qla_hw_data*) ;
 scalar_t__ FUNC_4 (struct qla_hw_data*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 void* FUNC_7 (int ,int *) ;
 void* FUNC_8 (char*,int,void*,TYPE_2__*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (int *) ;
 int * VAR_8 ;
 int VAR_9 ;

int
FUNC_10(scsi_qla_host_t *VAR_10)
{
 struct qla_hw_data *VAR_11 = VAR_10->hw;

 if (!FUNC_0(VAR_11) && !FUNC_3(VAR_11) && !FUNC_4(VAR_11) &&
     !FUNC_1(VAR_11) && !FUNC_2(VAR_11))
  goto out;
 if (!VAR_11->fce)
  goto out;

 if (VAR_8)
  goto create_dir;

 FUNC_6(&VAR_9, 0);
 VAR_8 = FUNC_7(VAR_0, ((void*)0));

create_dir:
 if (VAR_11->dfs_dir)
  goto create_nodes;

 FUNC_9(&VAR_11->fce_mutex);
 VAR_11->dfs_dir = FUNC_7(VAR_10->host_str, VAR_8);

 FUNC_5(&VAR_9);

create_nodes:
 VAR_11->dfs_fw_resource_cnt = FUNC_8("fw_resource_count",
     VAR_1, VAR_11->dfs_dir, VAR_10, &VAR_3);

 VAR_11->dfs_tgt_counters = FUNC_8("tgt_counters", VAR_1,
     VAR_11->dfs_dir, VAR_10, &VAR_5);

 VAR_11->tgt.dfs_tgt_port_database = FUNC_8("tgt_port_database",
     VAR_1, VAR_11->dfs_dir, VAR_10, &VAR_6);

 VAR_11->dfs_fce = FUNC_8("fce", VAR_1, VAR_11->dfs_dir, VAR_10,
     &VAR_2);

 VAR_11->tgt.dfs_tgt_sess = FUNC_8("tgt_sess",
  VAR_1, VAR_11->dfs_dir, VAR_10, &VAR_7);

 if (FUNC_1(VAR_11) || FUNC_4(VAR_11) || FUNC_2(VAR_11))
  VAR_11->tgt.dfs_naqp = FUNC_8("naqp",
      0400, VAR_11->dfs_dir, VAR_10, &VAR_4);
out:
 return 0;
}
