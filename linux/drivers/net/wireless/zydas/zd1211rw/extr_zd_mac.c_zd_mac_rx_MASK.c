
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_5__ {int n_bitrates; TYPE_1__* bitrates; } ;
struct zd_mac {int pass_ctrl; TYPE_2__ band; int chip; scalar_t__ pass_failed_fcs; } ;
struct sk_buff {int dummy; } ;
struct rx_status {int frame_status; int signal_strength; } ;
struct ieee80211_rx_status {int rate_idx; int signal; int band; int freq; int flag; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_hdr {int dummy; } ;
typedef int stats ;
typedef int __le16 ;
struct TYPE_6__ {int center_freq; } ;
struct TYPE_4__ {scalar_t__ hw_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 struct sk_buff* FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (struct ieee80211_hw*,struct ieee80211_hdr*,struct ieee80211_rx_status*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct ieee80211_hw*,struct sk_buff*) ;
 int FUNC_8 (int ,struct ieee80211_rx_status*,int) ;
 int FUNC_9 (struct ieee80211_rx_status*,int ,int) ;
 int FUNC_10 (struct sk_buff*,scalar_t__ const*,unsigned int) ;
 int FUNC_11 (struct sk_buff*,int) ;
 TYPE_3__* VAR_8 ;
 int FUNC_12 (struct ieee80211_hw*,int ) ;
 struct zd_mac* FUNC_13 (struct ieee80211_hw*) ;
 scalar_t__ FUNC_14 (scalar_t__ const*,struct rx_status const*) ;

int FUNC_15(struct ieee80211_hw *VAR_9, const u8 *VAR_10, unsigned int VAR_11)
{
 struct zd_mac *VAR_12 = FUNC_13(VAR_9);
 struct ieee80211_rx_status VAR_13;
 const struct rx_status *VAR_14;
 struct sk_buff *VAR_15;
 int VAR_16 = 0;
 __le16 VAR_17;
 int VAR_18;
 int VAR_19;
 u8 VAR_20;

 if (VAR_11 < VAR_5 + 10 +
              VAR_2 + sizeof(struct rx_status))
  return -VAR_0;

 FUNC_9(&VAR_13, 0, sizeof(VAR_13));
 VAR_14 = (struct rx_status *)
  (VAR_10 + (VAR_11 - sizeof(struct rx_status)));
 if (VAR_14->frame_status & VAR_7) {
  if (VAR_12->pass_failed_fcs &&
    (VAR_14->frame_status & VAR_6)) {
   VAR_13.flag |= VAR_4;
   VAR_16 = 1;
  } else {
   return -VAR_0;
  }
 }

 VAR_13.freq = VAR_8[FUNC_1(&VAR_12->chip) - 1].center_freq;
 VAR_13.band = VAR_3;
 VAR_13.signal = FUNC_12(VAR_9, VAR_14->signal_strength);

 VAR_20 = FUNC_14(VAR_10, VAR_14);


 for (VAR_19 = 0; VAR_19 < VAR_12->band.n_bitrates; VAR_19++)
  if (VAR_20 == VAR_12->band.bitrates[VAR_19].hw_value)
   VAR_13.rate_idx = VAR_19;

 VAR_11 -= VAR_5 + sizeof(struct rx_status);
 VAR_10 += VAR_5;






 if (!VAR_16 &&
   FUNC_3(VAR_9, (struct ieee80211_hdr *)VAR_10, &VAR_13)
   && !VAR_12->pass_ctrl)
  return 0;

 VAR_17 = FUNC_4((__le16*)VAR_10);
 VAR_18 = FUNC_6(VAR_17) ^ FUNC_5(VAR_17);

 VAR_15 = FUNC_2(VAR_11 + (VAR_18 ? 2 : 0));
 if (VAR_15 == ((void*)0))
  return -VAR_1;
 if (VAR_18) {

  FUNC_11(VAR_15, 2);
 }


 FUNC_10(VAR_15, VAR_10, VAR_11);

 FUNC_8(FUNC_0(VAR_15), &VAR_13, sizeof(VAR_13));
 FUNC_7(VAR_9, VAR_15);
 return 0;
}
