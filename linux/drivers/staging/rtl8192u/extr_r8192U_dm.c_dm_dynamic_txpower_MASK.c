
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct r8192_priv {int bDynamicTxHighPower; int bDynamicTxLowPower; unsigned int undecorated_smoothed_pwdb; int bLastDTPFlag_High; int bLastDTPFlag_Low; TYPE_2__* ieee80211; } ;
struct net_device {int dummy; } ;
struct TYPE_6__ {int CurrentChannel; } ;
struct TYPE_4__ {unsigned int channel; scalar_t__ atheros_cap_exist; } ;
struct TYPE_5__ {int bdynamic_txpower_enable; scalar_t__ mode; scalar_t__ state; TYPE_1__ current_network; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (int ,int ) ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;
 TYPE_3__* VAR_8 ;
 int FUNC_3 (struct net_device*,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_9)
{
 struct r8192_priv *VAR_10 = FUNC_2(VAR_9);
 unsigned int VAR_11 = 0;
 unsigned int VAR_12 = 0;

 if (VAR_10->ieee80211->bdynamic_txpower_enable != 1) {
  VAR_10->bDynamicTxHighPower = 0;
  VAR_10->bDynamicTxLowPower = 0;
  return;
 }

 if ((VAR_10->ieee80211->current_network.atheros_cap_exist) && (VAR_10->ieee80211->mode == VAR_3)) {
  VAR_11 = VAR_4;
  VAR_12 = VAR_5;
 } else {
  VAR_11 = VAR_6;
  VAR_12 = VAR_7;
 }


 FUNC_0(VAR_1, "priv->undecorated_smoothed_pwdb = %ld\n", VAR_10->undecorated_smoothed_pwdb);

 if (VAR_10->ieee80211->state == VAR_2) {
  if (VAR_10->undecorated_smoothed_pwdb >= VAR_11) {
   VAR_10->bDynamicTxHighPower = 1;
   VAR_10->bDynamicTxLowPower = 0;
  } else {

   if (VAR_10->undecorated_smoothed_pwdb < VAR_12 && VAR_10->bDynamicTxHighPower)
    VAR_10->bDynamicTxHighPower = 0;


   if (VAR_10->undecorated_smoothed_pwdb < 35)
    VAR_10->bDynamicTxLowPower = 1;
   else if (VAR_10->undecorated_smoothed_pwdb >= 40)
    VAR_10->bDynamicTxLowPower = 0;
  }
 } else {

  VAR_10->bDynamicTxHighPower = 0;
  VAR_10->bDynamicTxLowPower = 0;
 }

 if ((VAR_10->bDynamicTxHighPower != VAR_10->bLastDTPFlag_High) ||
  (VAR_10->bDynamicTxLowPower != VAR_10->bLastDTPFlag_Low)) {
  FUNC_0(VAR_1, "SetTxPowerLevel8190()  channel = %d\n", VAR_10->ieee80211->current_network.channel);





  FUNC_3(VAR_9, VAR_10->ieee80211->current_network.channel);

 }
 VAR_10->bLastDTPFlag_High = VAR_10->bDynamicTxHighPower;
 VAR_10->bLastDTPFlag_Low = VAR_10->bDynamicTxLowPower;

}
