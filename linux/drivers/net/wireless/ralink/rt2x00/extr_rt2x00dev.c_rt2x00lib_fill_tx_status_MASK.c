
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct txdone_entry_desc {int retry; int flags; } ;
struct skb_frame_desc {int tx_rate_idx; int tx_rate_flags; } ;
struct TYPE_5__ {int dot11RTSFailureCount; int dot11RTSSuccessCount; int dot11ACKFailureCount; } ;
struct rt2x00_dev {TYPE_2__ low_level_stats; } ;
struct TYPE_6__ {int ampdu_len; int ampdu_ack_len; TYPE_1__* rates; scalar_t__ ack_signal; } ;
struct ieee80211_tx_info {int flags; TYPE_3__ status; } ;
struct TYPE_4__ {int idx; int flags; int count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_3__*,int ,int) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct rt2x00_dev *VAR_9,
         struct ieee80211_tx_info *VAR_10,
         struct skb_frame_desc *VAR_11,
         struct txdone_entry_desc *VAR_12,
         bool VAR_13)
{
 u8 VAR_14, VAR_15, VAR_16;
 int VAR_17;

 VAR_14 = VAR_11->tx_rate_idx;
 VAR_15 = VAR_11->tx_rate_flags;
 VAR_16 = FUNC_1(VAR_7, &VAR_12->flags) ?
     (VAR_12->retry + 1) : 1;




 FUNC_0(&VAR_10->status, 0, sizeof(VAR_10->status));
 VAR_10->status.ack_signal = 0;







 for (VAR_17 = 0; VAR_17 < VAR_16 && VAR_17 < VAR_2; VAR_17++) {
  VAR_10->status.rates[VAR_17].idx = VAR_14 - VAR_17;
  VAR_10->status.rates[VAR_17].flags = VAR_15;

  if (VAR_14 - VAR_17 == 0) {




   VAR_10->status.rates[VAR_17].count = VAR_16 - VAR_17;
   VAR_17++;
   break;
  }
  VAR_10->status.rates[VAR_17].count = 1;
 }
 if (VAR_17 < (VAR_2 - 1))
  VAR_10->status.rates[VAR_17].idx = -1;

 if (FUNC_1(VAR_8, &VAR_12->flags))
  VAR_10->flags |= VAR_1;

 if (!(VAR_10->flags & VAR_1)) {
  if (VAR_13)
   VAR_10->flags |= VAR_4;
  else
   VAR_9->low_level_stats.dot11ACKFailureCount++;
 }
 if (FUNC_1(VAR_6, &VAR_12->flags) ||
     VAR_10->flags & VAR_0) {
  VAR_10->flags |= VAR_5 |
      VAR_0;
  VAR_10->status.ampdu_len = 1;
  VAR_10->status.ampdu_ack_len = VAR_13 ? 1 : 0;
 }

 if (VAR_15 & VAR_3) {
  if (VAR_13)
   VAR_9->low_level_stats.dot11RTSSuccessCount++;
  else
   VAR_9->low_level_stats.dot11RTSFailureCount++;
 }
}
