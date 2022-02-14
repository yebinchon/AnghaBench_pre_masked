
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_dcb {struct qlcnic_adapter* adapter; } ;
struct TYPE_3__ {int * arg; } ;
struct qlcnic_cmd_args {TYPE_1__ rsp; } ;
struct qlcnic_adapter {TYPE_2__* pdev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (char*,int *,int) ;
 int FUNC_2 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_3 (struct qlcnic_cmd_args*) ;
 int FUNC_4 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;

__attribute__((used)) static int FUNC_5(struct qlcnic_dcb *VAR_1, char *VAR_2)
{
 struct qlcnic_adapter *VAR_3 = VAR_1->adapter;
 struct qlcnic_cmd_args VAR_4;
 u32 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(&VAR_4, VAR_3, VAR_0);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_4(VAR_3, &VAR_4);
 if (VAR_6) {
  FUNC_0(&VAR_3->pdev->dev,
   "Failed to query DCBX capability, err %d\n", VAR_6);
 } else {
  VAR_5 = VAR_4.rsp.arg[1];
  if (VAR_2)
   FUNC_1(VAR_2, &VAR_5, sizeof(u32));
 }

 FUNC_3(&VAR_4);

 return VAR_6;
}
