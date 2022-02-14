
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r8192_priv {int btxpower_tracking; int btxpower_trackingInit; scalar_t__ txpower_count; TYPE_1__* rtllib; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ FwRWRF; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_1)
{
 struct r8192_priv *VAR_2 = FUNC_1(VAR_1);


 if (VAR_2->rtllib->FwRWRF)
  VAR_2->btxpower_tracking = 1;
 else
  VAR_2->btxpower_tracking = 0;
 VAR_2->txpower_count = 0;
 VAR_2->btxpower_trackingInit = 0;
 FUNC_0(VAR_0, "pMgntInfo->bTXPowerTracking = %d\n",
   VAR_2->btxpower_tracking);
}
