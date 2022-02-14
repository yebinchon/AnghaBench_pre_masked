
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r8192_priv {int btxpower_tracking; int btxpower_trackingInit; scalar_t__ txpower_count; TYPE_1__* ieee80211; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ FwRWRF; } ;


 struct r8192_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0)
{
 struct r8192_priv *VAR_1 = FUNC_0(VAR_0);





 if (VAR_1->ieee80211->FwRWRF)
  VAR_1->btxpower_tracking = 1;
 else
  VAR_1->btxpower_tracking = 0;
 VAR_1->txpower_count = 0;
 VAR_1->btxpower_trackingInit = 0;
}
