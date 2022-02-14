
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_2__ req; } ;
struct qlcnic_adapter {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_2 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;

int FUNC_3(struct qlcnic_adapter *VAR_4)
{
 struct qlcnic_cmd_args VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(&VAR_5, VAR_4,
        VAR_3);
 if (VAR_6)
  return VAR_6;

 VAR_5.req.arg[1] = (VAR_0 | VAR_1);
 VAR_5.req.arg[2] = VAR_2;
 VAR_5.req.arg[3] = VAR_2;

 VAR_6 = FUNC_2(VAR_4, &VAR_5);
 if (VAR_6)
  FUNC_0(&VAR_4->pdev->dev,
   "failed to issue extend iSCSI minidump capability\n");

 return VAR_6;
}
