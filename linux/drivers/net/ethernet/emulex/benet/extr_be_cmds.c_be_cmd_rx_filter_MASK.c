
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct device {int dummy; } ;
struct be_adapter {TYPE_1__* pdev; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct be_adapter*,int,int) ;
 int FUNC_1 (struct be_adapter*) ;
 int FUNC_2 (struct device*,char*,int) ;

int FUNC_3(struct be_adapter *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct device *VAR_4 = &VAR_1->pdev->dev;

 if ((VAR_2 & FUNC_1(VAR_1)) != VAR_2) {
  FUNC_2(VAR_4, "Cannot set rx filter flags 0x%x\n", VAR_2);
  FUNC_2(VAR_4, "Interface is capable of 0x%x flags only\n",
    FUNC_1(VAR_1));
 }
 VAR_2 &= FUNC_1(VAR_1);
 if (!VAR_2)
  return -VAR_0;

 return FUNC_0(VAR_1, VAR_2, VAR_3);
}
