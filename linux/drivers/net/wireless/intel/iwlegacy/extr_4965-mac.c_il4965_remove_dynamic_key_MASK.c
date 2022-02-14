
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct TYPE_6__ {int key_mapping_keys; } ;
struct il_priv {int sta_lock; TYPE_3__* stations; int ucode_key_table; TYPE_1__ _4965; int mutex; } ;
struct il_hw_key {int dummy; } ;
struct il_addsta_cmd {int dummy; } ;
struct il4965_keyinfo {int dummy; } ;
struct ieee80211_key_conf {size_t keyidx; int hw_key_idx; } ;
struct TYPE_7__ {int modify_mask; } ;
struct TYPE_9__ {int key_flags; int key_offset; } ;
struct TYPE_10__ {int mode; TYPE_2__ sta; TYPE_4__ key; } ;
struct TYPE_8__ {TYPE_5__ sta; TYPE_4__ keyinfo; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,size_t,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (struct il_priv*) ;
 int FUNC_4 (struct il_priv*,struct il_addsta_cmd*,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct il_addsta_cmd*,TYPE_5__*,int) ;
 int FUNC_8 (TYPE_4__*,int ,int) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int ,int *) ;

int
FUNC_12(struct il_priv *VAR_6,
     struct ieee80211_key_conf *VAR_7, u8 VAR_8)
{
 unsigned long VAR_9;
 u16 VAR_10;
 u8 VAR_11;
 struct il_addsta_cmd VAR_12;

 FUNC_6(&VAR_6->mutex);

 VAR_6->_4965.key_mapping_keys--;

 FUNC_9(&VAR_6->sta_lock, VAR_9);
 VAR_10 = FUNC_5(VAR_6->stations[VAR_8].sta.key.key_flags);
 VAR_11 = (VAR_10 >> VAR_3) & 0x3;

 FUNC_0("Remove dynamic key: idx=%d sta=%d\n", VAR_7->keyidx, VAR_8);

 if (VAR_7->keyidx != VAR_11) {





  FUNC_10(&VAR_6->sta_lock, VAR_9);
  return 0;
 }

 if (VAR_6->stations[VAR_8].sta.key.key_flags & VAR_2) {
  FUNC_2("Removing wrong key %d 0x%x\n", VAR_7->keyidx,
   VAR_10);
  FUNC_10(&VAR_6->sta_lock, VAR_9);
  return 0;
 }

 if (!FUNC_11
     (VAR_6->stations[VAR_8].sta.key.key_offset, &VAR_6->ucode_key_table))
  FUNC_1("idx %d not used in uCode key table.\n",
         VAR_6->stations[VAR_8].sta.key.key_offset);
 FUNC_8(&VAR_6->stations[VAR_8].keyinfo, 0, sizeof(struct il_hw_key));
 FUNC_8(&VAR_6->stations[VAR_8].sta.key, 0, sizeof(struct il4965_keyinfo));
 VAR_6->stations[VAR_8].sta.key.key_flags =
     VAR_4 | VAR_2;
 VAR_6->stations[VAR_8].sta.key.key_offset = VAR_7->hw_key_idx;
 VAR_6->stations[VAR_8].sta.sta.modify_mask = VAR_5;
 VAR_6->stations[VAR_8].sta.mode = VAR_1;

 if (FUNC_3(VAR_6)) {
  FUNC_0
      ("Not sending C_ADD_STA command because RFKILL enabled.\n");
  FUNC_10(&VAR_6->sta_lock, VAR_9);
  return 0;
 }
 FUNC_7(&VAR_12, &VAR_6->stations[VAR_8].sta,
        sizeof(struct il_addsta_cmd));
 FUNC_10(&VAR_6->sta_lock, VAR_9);

 return FUNC_4(VAR_6, &VAR_12, VAR_0);
}
