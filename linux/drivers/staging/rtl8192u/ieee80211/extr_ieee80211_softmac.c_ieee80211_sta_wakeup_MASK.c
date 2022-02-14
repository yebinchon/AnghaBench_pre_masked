
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_device {int sta_sleep; int dev; int (* ps_request_tx_ack ) (int ) ;int (* sta_wake_up ) (int ) ;} ;


 int FUNC_0 (struct ieee80211_device*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct ieee80211_device *VAR_0, short VAR_1)
{
 if (VAR_0->sta_sleep == 0) {
  if (VAR_1) {
   FUNC_1("Warning: driver is probably failing to report TX ps error\n");
   VAR_0->ps_request_tx_ack(VAR_0->dev);
   FUNC_0(VAR_0, 0);
  }
  return;
 }

 if (VAR_0->sta_sleep == 1)
  VAR_0->sta_wake_up(VAR_0->dev);

 VAR_0->sta_sleep = 0;

 if (VAR_1) {
  VAR_0->ps_request_tx_ack(VAR_0->dev);
  FUNC_0(VAR_0, 0);
 }
}
