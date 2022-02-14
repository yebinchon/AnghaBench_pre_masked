
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlcnic_recv_context {scalar_t__ state; int context_id; } ;
struct TYPE_3__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_1__ req; } ;
struct qlcnic_adapter {TYPE_2__* pdev; struct qlcnic_recv_context* recv_ctx; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_2 (struct qlcnic_cmd_args*) ;
 int FUNC_3 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;

int
FUNC_4(struct qlcnic_adapter *VAR_3, int VAR_4)
{
 int VAR_5 = 0;
 struct qlcnic_cmd_args VAR_6;
 struct qlcnic_recv_context *VAR_7 = VAR_3->recv_ctx;

 if (VAR_7->state != VAR_2)
  return VAR_5;
 VAR_5 = FUNC_1(&VAR_6, VAR_3, VAR_1);
 if (VAR_5)
  return VAR_5;

 VAR_6.req.arg[1] = VAR_7->context_id;
 VAR_6.req.arg[2] = VAR_4;

 VAR_5 = FUNC_3(VAR_3, &VAR_6);
 if (VAR_5) {
  FUNC_0(&VAR_3->pdev->dev, "Failed to set mtu\n");
  VAR_5 = -VAR_0;
 }
 FUNC_2(&VAR_6);
 return VAR_5;
}
