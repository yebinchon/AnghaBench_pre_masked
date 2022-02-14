
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct iscsi_stats_info {int qos_priority; scalar_t__ mac_local; } ;
struct bnx2x_dcbx_app_params {int * traffic_type_priority; } ;
struct TYPE_8__ {int iscsi_mac; } ;
struct TYPE_5__ {struct bnx2x_dcbx_app_params app; } ;
struct bnx2x {TYPE_4__ cnic_eth_dev; TYPE_3__* slowpath; TYPE_1__ dcbx_port_params; } ;
struct TYPE_6__ {struct iscsi_stats_info iscsi_stat; } ;
struct TYPE_7__ {TYPE_2__ drv_info_to_mcp; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnx2x*) ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct bnx2x*,int ) ;
 int FUNC_2 (scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct bnx2x *VAR_4)
{
 struct bnx2x_dcbx_app_params *VAR_5 = &VAR_4->dcbx_port_params.app;
 struct iscsi_stats_info *VAR_6 =
  &VAR_4->slowpath->drv_info_to_mcp.iscsi_stat;

 if (!FUNC_0(VAR_4))
  return;

 FUNC_2(VAR_6->mac_local + VAR_3, VAR_4->cnic_eth_dev.iscsi_mac,
        VAR_1);

 VAR_6->qos_priority =
  VAR_5->traffic_type_priority[VAR_2];


 FUNC_1(VAR_4, VAR_0);
}
