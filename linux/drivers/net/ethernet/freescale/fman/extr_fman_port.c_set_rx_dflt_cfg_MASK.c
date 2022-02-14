
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int pcd_fqs_count; int pcd_base_fqid; int dflt_fqid; int err_fqid; int ext_buf_pools; } ;
struct TYPE_6__ {TYPE_2__ rx_params; } ;
struct fman_port_params {TYPE_3__ specific_params; } ;
struct fman_port {TYPE_1__* cfg; } ;
struct fman_ext_pools {int dummy; } ;
struct TYPE_4__ {int pcd_fqs_count; int pcd_base_fqid; int dflt_fqid; int err_fqid; int ext_buf_pools; int discard_mask; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static void FUNC_1(struct fman_port *VAR_1,
       struct fman_port_params *VAR_2)
{
 VAR_1->cfg->discard_mask = VAR_0;

 FUNC_0(&VAR_1->cfg->ext_buf_pools,
        &VAR_2->specific_params.rx_params.ext_buf_pools,
        sizeof(struct fman_ext_pools));
 VAR_1->cfg->err_fqid =
  VAR_2->specific_params.rx_params.err_fqid;
 VAR_1->cfg->dflt_fqid =
  VAR_2->specific_params.rx_params.dflt_fqid;
 VAR_1->cfg->pcd_base_fqid =
  VAR_2->specific_params.rx_params.pcd_base_fqid;
 VAR_1->cfg->pcd_fqs_count =
  VAR_2->specific_params.rx_params.pcd_fqs_count;
}
