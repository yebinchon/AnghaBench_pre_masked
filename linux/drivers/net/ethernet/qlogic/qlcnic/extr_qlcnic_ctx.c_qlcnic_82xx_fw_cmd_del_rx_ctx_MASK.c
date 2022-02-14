
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlcnic_recv_context {int state; int context_id; } ;
struct TYPE_4__ {int * arg; } ;
struct qlcnic_cmd_args {TYPE_2__ req; } ;
struct qlcnic_adapter {TYPE_1__* pdev; struct qlcnic_recv_context* recv_ctx; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_2 (struct qlcnic_cmd_args*) ;
 int FUNC_3 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;

void FUNC_4(struct qlcnic_adapter *VAR_2)
{
 int VAR_3;
 struct qlcnic_cmd_args VAR_4;
 struct qlcnic_recv_context *VAR_5 = VAR_2->recv_ctx;

 VAR_3 = FUNC_1(&VAR_4, VAR_2, VAR_0);
 if (VAR_3)
  return;

 VAR_4.req.arg[1] = VAR_5->context_id;
 VAR_3 = FUNC_3(VAR_2, &VAR_4);
 if (VAR_3)
  FUNC_0(&VAR_2->pdev->dev,
   "Failed to destroy rx ctx in firmware\n");

 VAR_5->state = VAR_1;
 FUNC_2(&VAR_4);
}
