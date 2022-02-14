
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {void* pm_frame_timeout; } ;
struct TYPE_3__ {int life_time; } ;
struct il_tx_cmd {int tx_flags; int sta_id; int tid_tspec; scalar_t__ next_frame_len; scalar_t__ driver_txop; TYPE_2__ timeout; TYPE_1__ stop_time; } ;
struct il_priv {int dummy; } ;
struct ieee80211_tx_info {int flags; } ;
struct ieee80211_hdr {int seq_ctrl; int frame_control; } ;
typedef int __le32 ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int) ;
 int* FUNC_1 (struct ieee80211_hdr*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct il_priv*,struct ieee80211_tx_info*,int ,int*) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void
FUNC_11(struct il_priv *VAR_8, struct sk_buff *VAR_9,
     struct il_tx_cmd *VAR_10,
     struct ieee80211_tx_info *VAR_11,
     struct ieee80211_hdr *VAR_12, u8 VAR_13)
{
 __le16 VAR_14 = VAR_12->frame_control;
 __le32 VAR_15 = VAR_10->tx_flags;

 VAR_10->stop_time.life_time = VAR_7;
 if (!(VAR_11->flags & VAR_0)) {
  VAR_15 |= VAR_1;
  if (FUNC_6(VAR_14))
   VAR_15 |= VAR_5;
  if (FUNC_7(VAR_14) &&
      !(FUNC_10(VAR_12->seq_ctrl) & 0xf))
   VAR_15 |= VAR_6;
 } else {
  VAR_15 &= (~VAR_1);
  VAR_15 |= VAR_5;
 }

 if (FUNC_4(VAR_14))
  VAR_15 |= VAR_1 | VAR_3;

 VAR_10->sta_id = VAR_13;
 if (FUNC_2(VAR_14))
  VAR_15 |= VAR_4;

 if (FUNC_5(VAR_14)) {
  u8 *VAR_16 = FUNC_1(VAR_12);
  VAR_10->tid_tspec = VAR_16[0] & 0xf;
  VAR_15 &= ~VAR_5;
 } else {
  VAR_15 |= VAR_5;
 }

 FUNC_9(VAR_8, VAR_11, VAR_14, &VAR_15);

 VAR_15 &= ~(VAR_2);
 if (FUNC_6(VAR_14)) {
  if (FUNC_3(VAR_14) || FUNC_8(VAR_14))
   VAR_10->timeout.pm_frame_timeout = FUNC_0(3);
  else
   VAR_10->timeout.pm_frame_timeout = FUNC_0(2);
 } else {
  VAR_10->timeout.pm_frame_timeout = 0;
 }

 VAR_10->driver_txop = 0;
 VAR_10->tx_flags = VAR_15;
 VAR_10->next_frame_len = 0;
}
