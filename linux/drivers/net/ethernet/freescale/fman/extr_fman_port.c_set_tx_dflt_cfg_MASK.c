
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_6__ {int dflt_fqid; int err_fqid; } ;
struct TYPE_7__ {TYPE_2__ non_rx_params; } ;
struct fman_port_params {TYPE_3__ specific_params; } ;
struct fman_port_dts_params {int qman_channel_id; } ;
struct TYPE_5__ {int major; } ;
struct fman_port {TYPE_4__* cfg; int port_speed; int port_type; TYPE_1__ rev_info; } ;
struct TYPE_8__ {int deq_high_priority; int dflt_fqid; scalar_t__ deq_sp; int err_fqid; int tx_fifo_deq_pipeline_depth; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct fman_port *VAR_1,
       struct fman_port_params *VAR_2,
       struct fman_port_dts_params *VAR_3)
{
 VAR_1->cfg->tx_fifo_deq_pipeline_depth =
  FUNC_0(VAR_1->rev_info.major,
       VAR_1->port_type,
       VAR_1->port_speed);
 VAR_1->cfg->err_fqid =
  VAR_2->specific_params.non_rx_params.err_fqid;
 VAR_1->cfg->deq_sp =
  (u8)(VAR_3->qman_channel_id & VAR_0);
 VAR_1->cfg->dflt_fqid =
  VAR_2->specific_params.non_rx_params.dflt_fqid;
 VAR_1->cfg->deq_high_priority = 1;
}
