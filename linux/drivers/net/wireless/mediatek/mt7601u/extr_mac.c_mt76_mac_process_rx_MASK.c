
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct mt7601u_rxwi {int rxinfo; int rate; int ctl; } ;
struct TYPE_4__ {TYPE_1__* chan; } ;
struct mt7601u_dev {int con_mon_lock; int avg_rssi; TYPE_2__ chandef; } ;
struct ieee80211_rx_status {int* chain_signal; int signal; int band; int freq; int chains; int flag; } ;
struct TYPE_3__ {int band; int center_freq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 struct ieee80211_rx_status* FUNC_2 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct mt7601u_dev*,struct mt7601u_rxwi*,int ) ;
 scalar_t__ FUNC_8 (struct mt7601u_dev*,int *) ;
 int FUNC_9 (struct mt7601u_dev*,struct mt7601u_rxwi*,int ,int) ;
 int FUNC_10 (struct ieee80211_rx_status*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

u32 FUNC_13(struct mt7601u_dev *VAR_9, struct sk_buff *VAR_10,
   u8 *VAR_11, void *VAR_12)
{
 struct ieee80211_rx_status *VAR_13 = FUNC_2(VAR_10);
 struct mt7601u_rxwi *VAR_14 = VAR_12;
 u32 VAR_15, VAR_16 = FUNC_6(VAR_14->ctl);
 u16 VAR_17 = FUNC_5(VAR_14->rate);
 int VAR_18;

 VAR_15 = FUNC_1(VAR_3, VAR_16);
 if (VAR_15 < 10)
  return 0;

 if (VAR_14->rxinfo & FUNC_3(VAR_0)) {
  VAR_13->flag |= VAR_4;
  VAR_13->flag |= VAR_8;
  VAR_13->flag |= VAR_7;
  VAR_13->flag |= VAR_5;
  VAR_13->flag |= VAR_6;
 }



 if (VAR_14->rxinfo & FUNC_3(VAR_1))
  VAR_13->flag &= ~VAR_6;

 VAR_13->chains = FUNC_0(0);
 VAR_18 = FUNC_7(VAR_9, VAR_14, VAR_17);
 VAR_13->chain_signal[0] = VAR_13->signal = VAR_18;
 VAR_13->freq = VAR_9->chandef.chan->center_freq;
 VAR_13->band = VAR_9->chandef.chan->band;

 FUNC_10(VAR_13, VAR_17);

 FUNC_11(&VAR_9->con_mon_lock);
 if (FUNC_8(VAR_9, VAR_11))
  FUNC_9(VAR_9, VAR_14, VAR_17, VAR_18);
 else if (VAR_14->rxinfo & FUNC_3(VAR_2))
  FUNC_4(&VAR_9->avg_rssi, -VAR_18);
 FUNC_12(&VAR_9->con_mon_lock);

 return VAR_15;
}
