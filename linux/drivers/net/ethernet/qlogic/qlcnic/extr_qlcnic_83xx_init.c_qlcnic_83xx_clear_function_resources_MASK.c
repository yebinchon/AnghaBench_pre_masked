
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int * arg; } ;
struct qlcnic_cmd_args {TYPE_1__ req; } ;
struct qlcnic_adapter {TYPE_2__* pdev; int ahw; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct qlcnic_adapter*,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_4 (struct qlcnic_cmd_args*) ;
 int FUNC_5 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;

__attribute__((used)) static void FUNC_6(struct qlcnic_adapter *VAR_4)
{
 struct qlcnic_cmd_args VAR_5;
 u32 VAR_6, VAR_7;
 int VAR_8;

 VAR_6 = FUNC_1(VAR_4->ahw, VAR_3);
 VAR_7 = FUNC_1(VAR_4->ahw, VAR_2);

 if (FUNC_0(VAR_4, VAR_6, VAR_7)) {
  VAR_8 = FUNC_3(&VAR_5, VAR_4,
            VAR_1);
  if (VAR_8)
   return;

  VAR_5.req.arg[1] = VAR_0;
  VAR_8 = FUNC_5(VAR_4, &VAR_5);
  if (VAR_8)
   FUNC_2(&VAR_4->pdev->dev,
    "Failed to clean up the function resources\n");
  FUNC_4(&VAR_5);
 }
}
