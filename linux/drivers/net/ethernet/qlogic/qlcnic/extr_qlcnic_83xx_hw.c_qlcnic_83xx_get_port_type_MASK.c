
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_hardware_context {int port_type; } ;
struct TYPE_3__ {int * arg; } ;
struct qlcnic_cmd_args {TYPE_1__ rsp; } ;
struct qlcnic_adapter {TYPE_2__* pdev; struct qlcnic_hardware_context* ahw; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_3 (struct qlcnic_cmd_args*) ;
 int FUNC_4 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;

void FUNC_5(struct qlcnic_adapter *VAR_3)
{
 struct qlcnic_hardware_context *VAR_4 = VAR_3->ahw;
 struct qlcnic_cmd_args VAR_5;
 u32 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(&VAR_5, VAR_3, VAR_0);
 if (VAR_7)
  return;

 VAR_7 = FUNC_4(VAR_3, &VAR_5);
 if (VAR_7) {
  FUNC_1(&VAR_3->pdev->dev,
    "Get Link Status Command failed: 0x%x\n", VAR_7);
  goto out;
 } else {
  VAR_6 = VAR_5.rsp.arg[3];

  switch (FUNC_0(VAR_6)) {
  case 129:
  case 130:
  case 131:
  case 128:
   VAR_4->port_type = VAR_1;
   break;
  default:
   VAR_4->port_type = VAR_2;
  }
 }
out:
 FUNC_3(&VAR_5);
}
