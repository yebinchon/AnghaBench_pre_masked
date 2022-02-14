
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct il_priv {int dummy; } ;
struct TYPE_4__ {scalar_t__ payload; } ;
struct il_device_cmd {TYPE_1__ cmd; } ;
struct TYPE_6__ {void* pm_frame_timeout; } ;
struct TYPE_5__ {int life_time; } ;
struct il3945_tx_cmd {int sta_id; int tid_tspec; scalar_t__ next_frame_len; int tx_flags; scalar_t__ driver_txop; TYPE_3__ timeout; TYPE_2__ stop_time; } ;
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
 void* FUNC_0 (int) ;
 int* FUNC_1 (struct ieee80211_hdr*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct il_priv*,struct ieee80211_tx_info*,int ,int *) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10(struct il_priv *VAR_7, struct il_device_cmd *VAR_8,
     struct ieee80211_tx_info *VAR_9,
     struct ieee80211_hdr *VAR_10, u8 VAR_11)
{
 struct il3945_tx_cmd *VAR_12 = (struct il3945_tx_cmd *)VAR_8->cmd.payload;
 __le32 VAR_13 = VAR_12->tx_flags;
 __le16 VAR_14 = VAR_10->frame_control;

 VAR_12->stop_time.life_time = VAR_6;
 if (!(VAR_9->flags & VAR_0)) {
  VAR_13 |= VAR_1;
  if (FUNC_5(VAR_14))
   VAR_13 |= VAR_4;
  if (FUNC_6(VAR_14) &&
      !(FUNC_9(VAR_10->seq_ctrl) & 0xf))
   VAR_13 |= VAR_5;
 } else {
  VAR_13 &= (~VAR_1);
  VAR_13 |= VAR_4;
 }

 VAR_12->sta_id = VAR_11;
 if (FUNC_2(VAR_14))
  VAR_13 |= VAR_3;

 if (FUNC_4(VAR_14)) {
  u8 *VAR_15 = FUNC_1(VAR_10);
  VAR_12->tid_tspec = VAR_15[0] & 0xf;
  VAR_13 &= ~VAR_4;
 } else {
  VAR_13 |= VAR_4;
 }

 FUNC_8(VAR_7, VAR_9, VAR_14, &VAR_13);

 VAR_13 &= ~(VAR_2);
 if (FUNC_5(VAR_14)) {
  if (FUNC_3(VAR_14) || FUNC_7(VAR_14))
   VAR_12->timeout.pm_frame_timeout = FUNC_0(3);
  else
   VAR_12->timeout.pm_frame_timeout = FUNC_0(2);
 } else {
  VAR_12->timeout.pm_frame_timeout = 0;
 }

 VAR_12->driver_txop = 0;
 VAR_12->tx_flags = VAR_13;
 VAR_12->next_frame_len = 0;
}
