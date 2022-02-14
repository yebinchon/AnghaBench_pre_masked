
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtllib_device {int dev; TYPE_1__* pHTInfo; } ;
struct TYPE_2__ {scalar_t__ bCurrentHTSupport; } ;


 scalar_t__ FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (int*) ;
 int FUNC_2 (int ,char*) ;

u8 FUNC_3(struct rtllib_device *VAR_0, u8 *VAR_1)
{
 if (VAR_0->pHTInfo->bCurrentHTSupport) {
  if ((FUNC_1(VAR_1) && FUNC_0(VAR_1)) == 1) {
   FUNC_2(VAR_0->dev, "HT CONTROL FILED EXIST!!\n");
   return 1;
  }
 }
 return 0;
}
