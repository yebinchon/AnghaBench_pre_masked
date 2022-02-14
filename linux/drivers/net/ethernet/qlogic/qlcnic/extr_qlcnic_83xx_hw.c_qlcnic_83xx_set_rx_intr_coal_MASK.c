
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct qlcnic_nic_intr_coalesce {int rx_time_us; int rx_packets; int flag; } ;
struct TYPE_6__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_3__ req; } ;
struct qlcnic_adapter {int netdev; TYPE_2__* recv_ctx; TYPE_1__* ahw; } ;
struct TYPE_5__ {int context_id; } ;
struct TYPE_4__ {struct qlcnic_nic_intr_coalesce coal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_2 (struct qlcnic_cmd_args*) ;
 int FUNC_3 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;

__attribute__((used)) static int FUNC_4(struct qlcnic_adapter *VAR_3)
{
 struct qlcnic_nic_intr_coalesce *VAR_4 = &VAR_3->ahw->coal;
 struct qlcnic_cmd_args VAR_5;
 u16 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(&VAR_5, VAR_3, VAR_0);
 if (VAR_7)
  return VAR_7;

 VAR_6 = VAR_3->recv_ctx->context_id;
 VAR_5.req.arg[1] = VAR_1 | VAR_6 << 16;
 VAR_6 = VAR_4->rx_time_us;
 VAR_5.req.arg[2] = VAR_4->rx_packets | VAR_6 << 16;
 VAR_5.req.arg[3] = VAR_4->flag;

 VAR_7 = FUNC_3(VAR_3, &VAR_5);
 if (VAR_7 != VAR_2)
  FUNC_0(VAR_3->netdev,
      "failed to set interrupt coalescing parameters\n");

 FUNC_2(&VAR_5);

 return VAR_7;
}
