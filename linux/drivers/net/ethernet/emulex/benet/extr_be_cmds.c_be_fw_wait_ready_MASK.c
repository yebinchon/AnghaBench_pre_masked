
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct device {int dummy; } ;
struct be_adapter {TYPE_1__* pdev; } ;
struct TYPE_2__ {struct device dev; } ;


 scalar_t__ FUNC_0 (struct be_adapter*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct be_adapter*) ;
 scalar_t__ FUNC_2 (struct be_adapter*) ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct device*,char*,int) ;
 scalar_t__ FUNC_5 (struct be_adapter*) ;
 int FUNC_6 (struct be_adapter*) ;
 scalar_t__ FUNC_7 (int) ;

int FUNC_8(struct be_adapter *VAR_3)
{
 u16 VAR_4;
 int VAR_5, VAR_6 = 0;
 struct device *VAR_7 = &VAR_3->pdev->dev;

 if (FUNC_5(VAR_3)) {
  VAR_5 = FUNC_6(VAR_3);
  if (VAR_5) {
   VAR_4 = VAR_5;
   goto err;
  }
  return 0;
 }

 do {

  if (FUNC_0(VAR_3) && FUNC_2(VAR_3))
   return 0;

  VAR_4 = FUNC_1(VAR_3);
  if (VAR_4 == VAR_2)
   return 0;

  FUNC_4(VAR_7, "Waiting for POST, %ds elapsed\n", VAR_6);
  if (FUNC_7(2000)) {
   FUNC_3(VAR_7, "Waiting for POST aborted\n");
   return -VAR_0;
  }
  VAR_6 += 2;
 } while (VAR_6 < 60);

err:
 FUNC_3(VAR_7, "POST timeout; stage=%#x\n", VAR_4);
 return -VAR_1;
}
