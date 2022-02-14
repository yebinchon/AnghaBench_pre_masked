
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wl1271_rx_descriptor {int flags; scalar_t__ rate; int rssi; int snr; int status; scalar_t__ channel; } ;
struct wl1271 {scalar_t__ hw_min_ht_rate; int noise; } ;
struct ieee80211_rx_status {int signal; int antenna; int flag; int band; int boottime_ns; int freq; int encoding; int rate_idx; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct ieee80211_rx_status*,int ,int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (struct wl1271*,scalar_t__,int ) ;
 int FUNC_7 (struct wl1271*,int ,int ) ;

__attribute__((used)) static void FUNC_8(struct wl1271 *VAR_14,
        struct wl1271_rx_descriptor *VAR_15,
        struct ieee80211_rx_status *VAR_16,
        u8 VAR_17, u8 VAR_18)
{
 FUNC_3(VAR_16, 0, sizeof(struct ieee80211_rx_status));

 if ((VAR_15->flags & VAR_10) == VAR_9)
  VAR_16->band = VAR_1;
 else
  VAR_16->band = VAR_2;

 VAR_16->rate_idx = FUNC_6(VAR_14, VAR_15->rate, VAR_16->band);


 if (VAR_15->rate <= VAR_14->hw_min_ht_rate)
  VAR_16->encoding = VAR_4;







 VAR_16->signal = ((VAR_15->rssi & VAR_3) | FUNC_0(7));
 VAR_16->antenna = ((VAR_15->rssi & VAR_0) >> 7);






 VAR_14->noise = VAR_15->rssi - (VAR_15->snr >> 1);

 VAR_16->freq = FUNC_1(VAR_15->channel,
            VAR_16->band);

 if (VAR_15->flags & VAR_11) {
  u8 VAR_19 = VAR_15->status & VAR_13;

  VAR_16->flag |= VAR_6 | VAR_8 |
    VAR_5;

  if (FUNC_4(VAR_19 & VAR_12)) {
   VAR_16->flag |= VAR_7;
   FUNC_5("Michael MIC error. Desc: 0x%x",
           VAR_19);
  }
 }

 if (VAR_17 || VAR_18)
  VAR_16->boottime_ns = FUNC_2();

 if (VAR_17)
  FUNC_7(VAR_14, (u16)VAR_15->channel,
      VAR_16->band);
}
