
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlcnic_host_tx_ring {int ctx_id; } ;
struct TYPE_3__ {int * arg; } ;
struct qlcnic_cmd_args {TYPE_1__ req; } ;
struct qlcnic_adapter {TYPE_2__* pdev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_2 (struct qlcnic_cmd_args*) ;
 scalar_t__ FUNC_3 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;

void FUNC_4(struct qlcnic_adapter *VAR_1,
       struct qlcnic_host_tx_ring *VAR_2)
{
 struct qlcnic_cmd_args VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(&VAR_3, VAR_1, VAR_0);
 if (VAR_4)
  return;

 VAR_3.req.arg[1] = VAR_2->ctx_id;
 if (FUNC_3(VAR_1, &VAR_3))
  FUNC_0(&VAR_1->pdev->dev,
   "Failed to destroy tx ctx in firmware\n");
 FUNC_2(&VAR_3);
}
