
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct be_resources {void* max_vfs; int member_0; } ;
struct be_adapter {int num_vfs; TYPE_1__* pdev; struct be_resources pool_res; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct be_adapter*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct be_adapter*) ;
 int FUNC_2 (struct be_adapter*,struct be_resources*,int *,int ,int ,int ) ;
 int FUNC_3 (struct be_adapter*) ;
 scalar_t__ FUNC_4 (struct be_adapter*) ;
 int FUNC_5 (int *,char*,int) ;
 void* FUNC_6 (int ,int) ;
 int FUNC_7 (TYPE_1__*) ;
 void* FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (struct be_adapter*) ;

__attribute__((used)) static int FUNC_10(struct be_adapter *VAR_3)
{
 struct be_resources VAR_4 = {0};
 int VAR_5, VAR_6;

 FUNC_2(VAR_3, &VAR_4, ((void*)0), VAR_0,
      VAR_2, 0);


 if (FUNC_0(VAR_3) && !VAR_4.max_vfs) {
  VAR_5 = FUNC_8(VAR_3->pdev);
  VAR_4.max_vfs = VAR_5 > 0 ? FUNC_6(VAR_1, VAR_5) : 0;
 }

 VAR_3->pool_res = VAR_4;





 VAR_6 = FUNC_7(VAR_3->pdev);
 if (VAR_6) {
  FUNC_5(&VAR_3->pdev->dev, "%d VFs are already enabled\n",
    VAR_6);

  VAR_3->pool_res.max_vfs =
   FUNC_8(VAR_3->pdev);
  VAR_3->num_vfs = VAR_6;
 }

 if (FUNC_9(VAR_3) && FUNC_4(VAR_3) && !VAR_6) {
  FUNC_1(VAR_3);
  FUNC_5(&VAR_3->pdev->dev,
    "RSS can be enabled for all VFs if num_vfs <= %d\n",
    FUNC_3(VAR_3));
 }
 return 0;
}
