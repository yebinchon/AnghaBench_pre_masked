
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mwl8k_priv {scalar_t__ pending_tx_pkts; scalar_t__ radio_on; int fw_mutex; int * hostcmd_wait; scalar_t__ regs; int watchdog_ba_handle; int watchdog_event_pending; int poll_rx_task; int poll_tx_task; } ;
struct ieee80211_hw {struct mwl8k_priv* priv; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ieee80211_hw*,int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct mwl8k_priv*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_9, void *VAR_10)
{
 struct ieee80211_hw *VAR_11 = VAR_10;
 struct mwl8k_priv *VAR_12 = VAR_11->priv;
 u32 VAR_13;

 VAR_13 = FUNC_3(VAR_12->regs + VAR_7);
 if (!VAR_13)
  return VAR_1;

 if (VAR_13 & VAR_6) {
  VAR_13 &= ~VAR_6;
  FUNC_7(&VAR_12->poll_tx_task);
 }

 if (VAR_13 & VAR_5) {
  VAR_13 &= ~VAR_5;
  FUNC_7(&VAR_12->poll_rx_task);
 }

 if (VAR_13 & VAR_2) {
  FUNC_4(~VAR_2,
     VAR_12->regs + VAR_8);

  FUNC_0(&VAR_12->watchdog_event_pending);
  VAR_13 &= ~VAR_2;
  FUNC_2(VAR_11, &VAR_12->watchdog_ba_handle);
 }

 if (VAR_13)
  FUNC_4(~VAR_13, VAR_12->regs + VAR_7);

 if (VAR_13 & VAR_3) {
  if (VAR_12->hostcmd_wait != ((void*)0))
   FUNC_1(VAR_12->hostcmd_wait);
 }

 if (VAR_13 & VAR_4) {
  if (!FUNC_5(&VAR_12->fw_mutex) &&
      VAR_12->radio_on && VAR_12->pending_tx_pkts)
   FUNC_6(VAR_12);
 }

 return VAR_0;
}
