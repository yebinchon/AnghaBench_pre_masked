
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;
struct wl1251_rx_descriptor {int snr; int flags; int rate; int mod_pre; int channel; scalar_t__ rssi; int timestamp; } ;
struct wl1251 {scalar_t__ bss_type; int monitor_present; scalar_t__ noise; } ;
struct ieee80211_rx_status {int flag; int rate_idx; int enc_flags; int band; int freq; scalar_t__ signal; int mactime; } ;


 scalar_t__ VAR_0 ;
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
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct ieee80211_rx_status*,int ,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct wl1251*,int *) ;

__attribute__((used)) static void FUNC_5(struct wl1251 *VAR_16,
        struct wl1251_rx_descriptor *VAR_17,
        struct ieee80211_rx_status *VAR_18,
        u8 VAR_19)
{
 u64 VAR_20;
 int VAR_21;

 FUNC_2(VAR_18, 0, sizeof(struct ieee80211_rx_status));

 VAR_18->band = VAR_1;
 VAR_18->mactime = VAR_17->timestamp;
 if ((VAR_16->bss_type == VAR_0) && VAR_19) {
  VAR_21 = FUNC_4(VAR_16, &VAR_20);
  if (VAR_21 == 0)
   VAR_18->mactime = VAR_20;
 }

 VAR_18->signal = VAR_17->rssi;





 VAR_16->noise = VAR_17->rssi - VAR_17->snr / 2;

 VAR_18->freq = FUNC_0(VAR_17->channel,
            VAR_18->band);

 VAR_18->flag |= VAR_12;

 if (!VAR_16->monitor_present && (VAR_17->flags & VAR_5)) {
  VAR_18->flag |= VAR_11 | VAR_14;

  if (FUNC_1(!(VAR_17->flags & VAR_4)))
   VAR_18->flag |= VAR_9;

  if (FUNC_3(VAR_17->flags & VAR_6))
   VAR_18->flag |= VAR_13;
 }

 if (FUNC_3(!(VAR_17->flags & VAR_7)))
  VAR_18->flag |= VAR_10;

 switch (VAR_17->rate) {

 case 134:
  VAR_18->rate_idx = 1;
  break;
 case 130:
  VAR_18->rate_idx = 2;
  break;
 case 137:
  VAR_18->rate_idx = 3;
  break;
 case 129:
  VAR_18->rate_idx = 4;
  break;
 case 128:
  VAR_18->rate_idx = 5;
  break;
 case 136:
  VAR_18->rate_idx = 7;
  break;
 case 135:
  VAR_18->rate_idx = 8;
  break;
 case 133:
  VAR_18->rate_idx = 9;
  break;
 case 132:
  VAR_18->rate_idx = 10;
  break;
 case 131:
  VAR_18->rate_idx = 11;
  break;
 }


 if (VAR_17->rate == VAR_3) {
  if (!(VAR_17->mod_pre & VAR_2))

   VAR_18->rate_idx = 0;
  else

   VAR_18->rate_idx = 6;
 }

 if (VAR_17->mod_pre & VAR_15)
  VAR_18->enc_flags |= VAR_8;
}
