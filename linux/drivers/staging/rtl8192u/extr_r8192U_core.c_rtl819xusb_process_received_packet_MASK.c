
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_8__ {int rxframgment; } ;
struct r8192_priv {TYPE_2__ stats; } ;
struct net_device {int dummy; } ;
struct ieee80211_rx_stats {int virtual_address; } ;
struct TYPE_7__ {int (* GetHwRegHandler ) (TYPE_3__*,int ,int *) ;} ;
struct TYPE_9__ {TYPE_1__ HalFunc; int bInHctTest; } ;
typedef scalar_t__ RT_RF_POWER_STATE ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (struct ieee80211_rx_stats*) ;
 struct r8192_priv* FUNC_4 (struct net_device*) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (struct net_device*,struct ieee80211_rx_stats*) ;
 int FUNC_6 (TYPE_3__*,int ,int *) ;

__attribute__((used)) static void FUNC_7(
  struct net_device *VAR_4,
  struct ieee80211_rx_stats *VAR_5)
{
 struct r8192_priv *VAR_6 = FUNC_4(VAR_4);


 VAR_5->virtual_address += FUNC_3(VAR_5);
 VAR_6->stats.rxframgment++;





 if (FUNC_5(VAR_4, VAR_5))
  return;






}
