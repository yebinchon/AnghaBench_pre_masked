
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int num; int * arg; } ;
struct TYPE_4__ {int num; int * arg; } ;
struct qlcnic_cmd_args {scalar_t__ op_type; TYPE_3__ rsp; TYPE_1__ req; } ;
struct qlcnic_adapter {TYPE_2__* pdev; } ;
struct TYPE_5__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (char*,...) ;

void FUNC_2(struct qlcnic_adapter *VAR_1,
       struct qlcnic_cmd_args *VAR_2)
{
 int VAR_3;

 if (VAR_2->op_type == VAR_0)
  return;

 FUNC_0(&VAR_1->pdev->dev,
   "Host MBX regs(%d)\n", VAR_2->req.num);
 for (VAR_3 = 0; VAR_3 < VAR_2->req.num; VAR_3++) {
  if (VAR_3 && !(VAR_3 % 8))
   FUNC_1("\n");
  FUNC_1("%08x ", VAR_2->req.arg[VAR_3]);
 }
 FUNC_1("\n");
 FUNC_0(&VAR_1->pdev->dev,
   "FW MBX regs(%d)\n", VAR_2->rsp.num);
 for (VAR_3 = 0; VAR_3 < VAR_2->rsp.num; VAR_3++) {
  if (VAR_3 && !(VAR_3 % 8))
   FUNC_1("\n");
  FUNC_1("%08x ", VAR_2->rsp.arg[VAR_3]);
 }
 FUNC_1("\n");
}
