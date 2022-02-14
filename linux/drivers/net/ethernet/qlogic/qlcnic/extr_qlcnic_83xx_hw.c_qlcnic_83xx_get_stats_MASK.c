
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_8__ {int num; int arg; } ;
struct TYPE_6__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_4__ rsp; TYPE_2__ req; } ;
struct qlcnic_adapter {int portnum; TYPE_3__* recv_ctx; TYPE_1__* tx_ring; struct net_device* netdev; } ;
struct net_device {int dummy; } ;
struct TYPE_7__ {int context_id; } ;
struct TYPE_5__ {int ctx_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct net_device*,char*) ;
 int * FUNC_2 (struct qlcnic_adapter*,struct qlcnic_cmd_args*,int *,int ,int*) ;
 int FUNC_3 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_4 (struct qlcnic_cmd_args*) ;

void FUNC_5(struct qlcnic_adapter *VAR_9, u64 *VAR_10)
{
 struct qlcnic_cmd_args VAR_11;
 struct net_device *VAR_12 = VAR_9->netdev;
 int VAR_13 = 0;

 VAR_13 = FUNC_3(&VAR_11, VAR_9, VAR_2);
 if (VAR_13)
  return;

 VAR_11.req.arg[1] = VAR_0 | (VAR_9->tx_ring->ctx_id << 16);
 VAR_11.rsp.num = VAR_8;
 VAR_10 = FUNC_2(VAR_9, &VAR_11, VAR_10,
          VAR_7, &VAR_13);
 if (VAR_13) {
  FUNC_1(VAR_12, "Error getting Tx stats\n");
  goto out;
 }

 VAR_11.req.arg[1] = VAR_1 | (VAR_9->portnum << 16);
 VAR_11.rsp.num = VAR_3;
 FUNC_0(VAR_11.rsp.arg, 0, sizeof(u32) * VAR_11.rsp.num);
 VAR_10 = FUNC_2(VAR_9, &VAR_11, VAR_10,
          VAR_5, &VAR_13);
 if (VAR_13) {
  FUNC_1(VAR_12, "Error getting MAC stats\n");
  goto out;
 }

 VAR_11.req.arg[1] = VAR_9->recv_ctx->context_id << 16;
 VAR_11.rsp.num = VAR_4;
 FUNC_0(VAR_11.rsp.arg, 0, sizeof(u32) * VAR_11.rsp.num);
 VAR_10 = FUNC_2(VAR_9, &VAR_11, VAR_10,
          VAR_6, &VAR_13);
 if (VAR_13)
  FUNC_1(VAR_12, "Error getting Rx stats\n");
out:
 FUNC_4(&VAR_11);
}
