
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int used; } ;
struct be_mcc_obj {TYPE_2__ q; } ;
struct be_adapter {TYPE_1__* pdev; struct be_mcc_obj mcc_obj; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct be_adapter*,int ) ;
 int FUNC_2 (struct be_adapter*) ;
 int FUNC_3 (struct be_adapter*,int ) ;
 int FUNC_4 (int *,char*) ;
 int VAR_3 ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct be_adapter *VAR_4)
{

 int VAR_5, VAR_6 = 0;
 struct be_mcc_obj *VAR_7 = &VAR_4->mcc_obj;

 for (VAR_5 = 0; VAR_5 < 12000; VAR_5++) {
  if (FUNC_1(VAR_4, VAR_0))
   return -VAR_2;

  VAR_6 = FUNC_2(VAR_4);

  if (FUNC_0(&VAR_7->q.used) == 0)
   break;
  FUNC_5(500, 1000);
 }
 if (VAR_5 == 12000) {
  FUNC_4(&VAR_4->pdev->dev, "FW not responding\n");
  FUNC_3(VAR_4, VAR_1);
  return -VAR_2;
 }
 return VAR_6;
}
