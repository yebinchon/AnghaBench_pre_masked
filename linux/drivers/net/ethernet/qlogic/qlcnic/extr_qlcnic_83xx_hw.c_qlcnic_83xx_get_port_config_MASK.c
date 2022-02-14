
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int * arg; } ;
struct qlcnic_cmd_args {TYPE_3__ rsp; } ;
struct qlcnic_adapter {TYPE_2__* ahw; TYPE_1__* pdev; } ;
struct TYPE_5__ {int port_config; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_2 (struct qlcnic_cmd_args*) ;
 int FUNC_3 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;

__attribute__((used)) static int FUNC_4(struct qlcnic_adapter *VAR_1)
{
 struct qlcnic_cmd_args VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(&VAR_2, VAR_1, VAR_0);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_3(VAR_1, &VAR_2);
 if (VAR_3)
  FUNC_0(&VAR_1->pdev->dev, "Get Port config failed\n");
 else
  VAR_1->ahw->port_config = VAR_2.rsp.arg[1];
 FUNC_2(&VAR_2);
 return VAR_3;
}
