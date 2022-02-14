
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_3__ req; } ;
struct qlcnic_adapter {TYPE_1__* pdev; TYPE_2__* recv_ctx; } ;
struct TYPE_5__ {int context_id; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_2 (struct qlcnic_cmd_args*) ;
 int FUNC_3 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;

int FUNC_4(struct qlcnic_adapter *VAR_2, int VAR_3)
{
 int VAR_4;
 u32 VAR_5;
 struct qlcnic_cmd_args VAR_6;

 VAR_4 = FUNC_1(&VAR_6, VAR_2, VAR_1);
 if (VAR_4)
  return VAR_4;

 VAR_5 = VAR_2->recv_ctx->context_id << 16;
 VAR_6.req.arg[1] = (VAR_3 ? 1 : 0) | VAR_0 | VAR_5;
 VAR_4 = FUNC_3(VAR_2, &VAR_6);
 if (VAR_4)
  FUNC_0(&VAR_2->pdev->dev,
    "Setup linkevent mailbox failed\n");
 FUNC_2(&VAR_6);
 return VAR_4;
}
