
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct be_resources {int member_0; } ;
struct be_adapter {TYPE_1__* pdev; int pool_res; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (struct be_adapter*,int ,struct be_resources*) ;
 int FUNC_1 (struct be_adapter*,int ,int ,struct be_resources*) ;
 int FUNC_2 (struct be_adapter*) ;
 scalar_t__ FUNC_3 (struct be_adapter*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_7 (struct be_adapter*) ;

__attribute__((used)) static void FUNC_8(struct be_adapter *VAR_0)
{
 int VAR_1 = FUNC_5(VAR_0->pdev);
 struct be_resources VAR_2 = {0};
 int VAR_3;

 FUNC_2(VAR_0);

 if (!VAR_1)
  FUNC_6(VAR_0->pdev, FUNC_3(VAR_0));






 if (FUNC_7(VAR_0) && FUNC_3(VAR_0) && !VAR_1) {
  FUNC_0(VAR_0, 0, &VAR_2);
  VAR_3 = FUNC_1(VAR_0, VAR_0->pool_res, 0,
       &VAR_2);
  if (VAR_3)
   FUNC_4(&VAR_0->pdev->dev,
    "Failed to optimize SRIOV resources\n");
 }
}
