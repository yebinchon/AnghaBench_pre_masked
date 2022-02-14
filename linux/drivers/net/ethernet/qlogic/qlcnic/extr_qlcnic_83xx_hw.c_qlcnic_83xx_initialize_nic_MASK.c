
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_1__ req; } ;
struct qlcnic_adapter {TYPE_2__* pdev; scalar_t__ dcb; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_2 (struct qlcnic_cmd_args*) ;
 int FUNC_3 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;
 scalar_t__ FUNC_4 (struct qlcnic_adapter*) ;

void FUNC_5(struct qlcnic_adapter *VAR_5, int VAR_6)
{
 struct qlcnic_cmd_args VAR_7;
 int VAR_8;

 if (FUNC_4(VAR_5))
  return;

 if (VAR_6)
  VAR_8 = FUNC_1(&VAR_7, VAR_5,
            VAR_0);
 else
  VAR_8 = FUNC_1(&VAR_7, VAR_5,
            VAR_1);

 if (VAR_8)
  return;

 VAR_7.req.arg[1] = VAR_4 | VAR_2;

 if (VAR_5->dcb)
  VAR_7.req.arg[1] |= VAR_3;

 VAR_8 = FUNC_3(VAR_5, &VAR_7);
 if (VAR_8)
  FUNC_0(&VAR_5->pdev->dev,
   "Failed to %s in NIC IDC function event.\n",
   (VAR_6 ? "register" : "unregister"));

 FUNC_2(&VAR_7);
}
