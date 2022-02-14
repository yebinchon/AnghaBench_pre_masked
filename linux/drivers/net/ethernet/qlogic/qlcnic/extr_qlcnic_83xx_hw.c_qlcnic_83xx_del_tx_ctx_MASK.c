
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_host_tx_ring {int ctx_id; } ;
struct TYPE_3__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_1__ req; } ;
struct qlcnic_adapter {TYPE_2__* pdev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_2 (struct qlcnic_cmd_args*) ;
 scalar_t__ FUNC_3 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;
 int FUNC_4 (struct qlcnic_adapter*,int*) ;
 scalar_t__ FUNC_5 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_6 (struct qlcnic_adapter*) ;

void FUNC_7(struct qlcnic_adapter *VAR_1,
       struct qlcnic_host_tx_ring *VAR_2)
{
 struct qlcnic_cmd_args VAR_3;
 u32 VAR_4 = 0;

 if (FUNC_1(&VAR_3, VAR_1, VAR_0))
  return;

 if (FUNC_5(VAR_1) || FUNC_6(VAR_1))
  VAR_3.req.arg[0] |= (0x3 << 29);

 if (FUNC_5(VAR_1))
  FUNC_4(VAR_1, &VAR_4);

 VAR_3.req.arg[1] = VAR_2->ctx_id | VAR_4;
 if (FUNC_3(VAR_1, &VAR_3))
  FUNC_0(&VAR_1->pdev->dev,
   "Failed to destroy tx ctx in firmware\n");
 FUNC_2(&VAR_3);
}
