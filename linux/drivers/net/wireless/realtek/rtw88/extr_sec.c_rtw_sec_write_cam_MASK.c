
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct rtw_sec_desc {int cam_map; struct rtw_cam_entry* cam_table; } ;
struct rtw_dev {int dummy; } ;
struct rtw_cam_entry {int valid; int group; size_t hw_key_type; int* addr; struct ieee80211_key_conf* key; } ;
struct ieee80211_sta {int addr; } ;
struct ieee80211_key_conf {int flags; int keyidx; int* key; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int*,int ) ;
 int FUNC_2 (struct rtw_dev*,int ,int) ;
 int FUNC_3 (size_t,int ) ;

void FUNC_4(struct rtw_dev *VAR_6,
         struct rtw_sec_desc *VAR_7,
         struct ieee80211_sta *VAR_8,
         struct ieee80211_key_conf *VAR_9,
         u8 VAR_10, u8 VAR_11)
{
 struct rtw_cam_entry *VAR_12 = &VAR_7->cam_table[VAR_11];
 u32 VAR_13;
 u32 VAR_14;
 u32 VAR_15;
 u32 VAR_16;
 int VAR_17, VAR_18;

 FUNC_3(VAR_11, VAR_7->cam_map);
 VAR_12->valid = 1;
 VAR_12->group = !(VAR_9->flags & VAR_0);
 VAR_12->hw_key_type = VAR_10;
 VAR_12->key = VAR_9;
 if (VAR_8)
  FUNC_1(VAR_12->addr, VAR_8->addr);
 else
  FUNC_0(VAR_12->addr);

 VAR_13 = VAR_4 | VAR_2;
 VAR_16 = VAR_11 << VAR_1;
 for (VAR_17 = 5; VAR_17 >= 0; VAR_17--) {
  switch (VAR_17) {
  case 0:
   VAR_15 = ((VAR_9->keyidx & 0x3)) |
      ((VAR_10 & 0x7) << 2) |
      (VAR_12->group << 6) |
      (VAR_12->valid << 15) |
      (VAR_12->addr[0] << 16) |
      (VAR_12->addr[1] << 24);
   break;
  case 1:
   VAR_15 = (VAR_12->addr[2]) |
      (VAR_12->addr[3] << 8) |
      (VAR_12->addr[4] << 16) |
      (VAR_12->addr[5] << 24);
   break;
  default:
   VAR_18 = (VAR_17 - 2) << 2;
   VAR_15 = (VAR_9->key[VAR_18]) |
      (VAR_9->key[VAR_18 + 1] << 8) |
      (VAR_9->key[VAR_18 + 2] << 16) |
      (VAR_9->key[VAR_18 + 3] << 24);
   break;
  }

  VAR_14 = VAR_13 | (VAR_16 + VAR_17);
  FUNC_2(VAR_6, VAR_5, VAR_15);
  FUNC_2(VAR_6, VAR_3, VAR_14);
 }
}
