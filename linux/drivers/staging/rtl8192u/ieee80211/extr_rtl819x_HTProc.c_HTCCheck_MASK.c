
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_device {TYPE_1__* pHTInfo; } ;
struct TYPE_2__ {scalar_t__ bCurrentHTSupport; } ;


 scalar_t__ FUNC_0 (int*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int*) ;

u8 FUNC_3(struct ieee80211_device *VAR_1, u8 *VAR_2)
{
 if (VAR_1->pHTInfo->bCurrentHTSupport) {
  if ((FUNC_2(VAR_2) && FUNC_0(VAR_2)) == 1) {
   FUNC_1(VAR_0, "HT CONTROL FILED EXIST!!\n");
   return 1;
  }
 }
 return 0;
}
