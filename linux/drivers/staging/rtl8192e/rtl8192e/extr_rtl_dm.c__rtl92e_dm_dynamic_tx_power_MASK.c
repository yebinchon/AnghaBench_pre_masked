
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct r8192_priv {int bDynamicTxHighPower; int bDynamicTxLowPower; unsigned int undecorated_smoothed_pwdb; int bLastDTPFlag_High; int bLastDTPFlag_Low; TYPE_3__* rtllib; } ;
struct net_device {int dummy; } ;
struct TYPE_5__ {unsigned int channel; } ;
struct TYPE_6__ {int bdynamic_txpower_enable; scalar_t__ mode; scalar_t__ state; TYPE_2__ current_network; TYPE_1__* pHTInfo; } ;
struct TYPE_4__ {scalar_t__ IOTPeer; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_1 (struct net_device*,unsigned int) ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_8)
{
 struct r8192_priv *VAR_9 = FUNC_2(VAR_8);
 unsigned int VAR_10 = 0;
 unsigned int VAR_11 = 0;

 if (VAR_9->rtllib->bdynamic_txpower_enable != 1) {
  VAR_9->bDynamicTxHighPower = 0;
  VAR_9->bDynamicTxLowPower = 0;
  return;
 }
 if ((VAR_9->rtllib->pHTInfo->IOTPeer == VAR_1) &&
     (VAR_9->rtllib->mode == VAR_2)) {
  VAR_10 = VAR_4;
  VAR_11 = VAR_5;
 } else {
  VAR_10 = VAR_6;
  VAR_11 = VAR_7;
 }

 FUNC_0(VAR_0, "priv->undecorated_smoothed_pwdb = %ld\n",
   VAR_9->undecorated_smoothed_pwdb);

 if (VAR_9->rtllib->state == VAR_3) {
  if (VAR_9->undecorated_smoothed_pwdb >= VAR_10) {
   VAR_9->bDynamicTxHighPower = 1;
   VAR_9->bDynamicTxLowPower = 0;
  } else {
   if (VAR_9->undecorated_smoothed_pwdb <
       VAR_11 && VAR_9->bDynamicTxHighPower)
    VAR_9->bDynamicTxHighPower = 0;
   if (VAR_9->undecorated_smoothed_pwdb < 35)
    VAR_9->bDynamicTxLowPower = 1;
   else if (VAR_9->undecorated_smoothed_pwdb >= 40)
    VAR_9->bDynamicTxLowPower = 0;
  }
 } else {
  VAR_9->bDynamicTxHighPower = 0;
  VAR_9->bDynamicTxLowPower = 0;
 }

 if ((VAR_9->bDynamicTxHighPower != VAR_9->bLastDTPFlag_High) ||
     (VAR_9->bDynamicTxLowPower != VAR_9->bLastDTPFlag_Low)) {
  FUNC_0(VAR_0, "SetTxPowerLevel8190()  channel = %d\n",
    VAR_9->rtllib->current_network.channel);

  FUNC_1(VAR_8, VAR_9->rtllib->current_network.channel);
 }
 VAR_9->bLastDTPFlag_High = VAR_9->bDynamicTxHighPower;
 VAR_9->bLastDTPFlag_Low = VAR_9->bDynamicTxLowPower;

}
