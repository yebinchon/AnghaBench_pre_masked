
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mwl8k_rxd_ap {int rx_ctrl; int rate; int channel; int rx_status; int pkt_len; int qos_control; int noise_floor; int rssi; } ;
struct ieee80211_rx_status {scalar_t__ encoding; int rate_idx; int flag; int band; int freq; int bw; int signal; } ;
typedef int s8 ;
typedef int __le16 ;
struct TYPE_3__ {int hw_value; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ieee80211_rx_status*,int ,int) ;
 TYPE_1__* VAR_12 ;
 int FUNC_5 () ;

__attribute__((used)) static int
FUNC_6(void *VAR_13, struct ieee80211_rx_status *VAR_14,
       __le16 *VAR_15, s8 *VAR_16)
{
 struct mwl8k_rxd_ap *VAR_17 = VAR_13;

 if (!(VAR_17->rx_ctrl & VAR_5))
  return -1;
 FUNC_5();

 FUNC_4(VAR_14, 0, sizeof(*VAR_14));

 VAR_14->signal = -VAR_17->rssi;
 *VAR_16 = -VAR_17->noise_floor;

 if (VAR_17->rate & VAR_1) {
  VAR_14->encoding = VAR_10;
  if (VAR_17->rate & VAR_0)
   VAR_14->bw = VAR_9;
  VAR_14->rate_idx = FUNC_1(VAR_17->rate);
 } else {
  int VAR_18;

  for (VAR_18 = 0; VAR_18 < FUNC_0(VAR_12); VAR_18++) {
   if (VAR_12[VAR_18].hw_value == VAR_17->rate) {
    VAR_14->rate_idx = VAR_18;
    break;
   }
  }
 }

 if (VAR_17->channel > 14) {
  VAR_14->band = VAR_8;
  if (!(VAR_14->encoding == VAR_10) &&
      VAR_14->rate_idx >= VAR_6)
   VAR_14->rate_idx -= VAR_6;
 } else {
  VAR_14->band = VAR_7;
 }
 VAR_14->freq = FUNC_2(VAR_17->channel,
            VAR_14->band);

 *VAR_15 = VAR_17->qos_control;

 if ((VAR_17->rx_status != VAR_3) &&
     (VAR_17->rx_status & VAR_2) &&
     (VAR_17->rx_status & VAR_4))
  VAR_14->flag |= VAR_11;

 return FUNC_3(VAR_17->pkt_len);
}
