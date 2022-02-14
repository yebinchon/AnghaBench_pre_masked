
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct be_adapter {TYPE_1__* pdev; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*) ;
 scalar_t__ FUNC_2 (struct be_adapter*) ;
 int FUNC_3 (struct be_adapter*,int) ;
 int FUNC_4 (struct be_adapter*) ;

int FUNC_5(struct be_adapter *VAR_4)
{
 struct device *VAR_5 = &VAR_4->pdev->dev;
 int VAR_6;

 if (FUNC_2(VAR_4)) {
  FUNC_1(VAR_5, "Previous dump not cleared, not forcing dump\n");
  return -VAR_0;
 }


 VAR_6 = FUNC_3(VAR_4, VAR_3 |
         VAR_2);
 if (VAR_6 < 0) {
  FUNC_0(VAR_5, "FW reset failed\n");
  return VAR_6;
 }

 VAR_6 = FUNC_4(VAR_4);
 if (VAR_6)
  return VAR_6;

 if (!FUNC_2(VAR_4)) {
  FUNC_0(VAR_5, "FW dump not generated\n");
  return -VAR_1;
 }

 return 0;
}
