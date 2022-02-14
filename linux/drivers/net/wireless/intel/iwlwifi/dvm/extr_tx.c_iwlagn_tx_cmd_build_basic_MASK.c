
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct TYPE_10__ {void* pm_frame_timeout; } ;
struct TYPE_6__ {int life_time; } ;
struct iwl_tx_cmd {int tx_flags; int sta_id; int tid_tspec; scalar_t__ next_frame_len; scalar_t__ driver_txop; TYPE_5__ timeout; TYPE_1__ stop_time; } ;
struct iwl_priv {TYPE_3__* lib; } ;
struct TYPE_9__ {int flags; } ;
struct ieee80211_tx_info {int flags; scalar_t__ band; TYPE_4__ control; } ;
struct ieee80211_hdr {int frame_control; } ;
typedef int __le32 ;
typedef int __le16 ;
struct TYPE_8__ {TYPE_2__* bt_params; } ;
struct TYPE_7__ {scalar_t__ advanced_bt_coexist; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* FUNC_0 (int) ;
 int* FUNC_1 (struct ieee80211_hdr*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct iwl_priv*,struct ieee80211_tx_info*,int ,int*) ;

__attribute__((used)) static void FUNC_11(struct iwl_priv *VAR_13,
          struct sk_buff *VAR_14,
          struct iwl_tx_cmd *VAR_15,
          struct ieee80211_tx_info *VAR_16,
          struct ieee80211_hdr *VAR_17, u8 VAR_18)
{
 __le16 VAR_19 = VAR_17->frame_control;
 __le32 VAR_20 = VAR_15->tx_flags;

 VAR_15->stop_time.life_time = VAR_12;

 if (!(VAR_16->flags & VAR_1))
  VAR_20 |= VAR_5;
 else
  VAR_20 &= ~VAR_5;

 if (FUNC_8(VAR_19))
  VAR_20 |= VAR_11;
 else if (FUNC_5(VAR_19))
  VAR_20 |= VAR_5 | VAR_8;
 else if (VAR_16->band == VAR_4 &&
   VAR_13->lib->bt_params &&
   VAR_13->lib->bt_params->advanced_bt_coexist &&
   (FUNC_4(VAR_19) || FUNC_3(VAR_19) ||
   FUNC_9(VAR_19) ||
   VAR_16->control.flags & VAR_2))
  VAR_20 |= VAR_7;


 VAR_15->sta_id = VAR_18;
 if (FUNC_2(VAR_19))
  VAR_20 |= VAR_9;

 if (FUNC_6(VAR_19)) {
  u8 *VAR_21 = FUNC_1(VAR_17);
  VAR_15->tid_tspec = VAR_21[0] & 0xf;
  VAR_20 &= ~VAR_10;
 } else {
  VAR_15->tid_tspec = VAR_3;
  if (VAR_16->flags & VAR_0)
   VAR_20 |= VAR_10;
  else
   VAR_20 &= ~VAR_10;
 }

 FUNC_10(VAR_13, VAR_16, VAR_19, &VAR_20);

 VAR_20 &= ~(VAR_6);
 if (FUNC_7(VAR_19)) {
  if (FUNC_3(VAR_19) || FUNC_9(VAR_19))
   VAR_15->timeout.pm_frame_timeout = FUNC_0(3);
  else
   VAR_15->timeout.pm_frame_timeout = FUNC_0(2);
 } else {
  VAR_15->timeout.pm_frame_timeout = 0;
 }

 VAR_15->driver_txop = 0;
 VAR_15->tx_flags = VAR_20;
 VAR_15->next_frame_len = 0;
}
