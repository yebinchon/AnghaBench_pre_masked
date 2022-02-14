
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct mt7603_dev {int dummy; } ;
struct ieee80211_key_conf {int keyidx; } ;
typedef int key_data ;
typedef enum mt7603_cipher_type { ____Placeholder_mt7603_cipher_type } mt7603_cipher_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ieee80211_key_conf*,int *) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct mt7603_dev*,scalar_t__,int ,int) ;
 int FUNC_4 (struct mt7603_dev*,scalar_t__,int *,int) ;

int FUNC_5(struct mt7603_dev *VAR_7, int VAR_8,
   struct ieee80211_key_conf *VAR_9)
{
 enum mt7603_cipher_type VAR_10;
 u32 VAR_11 = FUNC_2(VAR_8);
 u8 VAR_12[32];
 int VAR_13 = sizeof(VAR_12);

 VAR_10 = FUNC_0(VAR_9, VAR_12);
 if (VAR_10 == VAR_1 && VAR_9)
  return -VAR_0;

 if (VAR_9 && (VAR_10 == VAR_3 || VAR_10 == VAR_2)) {
  VAR_11 += VAR_9->keyidx * 16;
  VAR_13 = 16;
 }

 FUNC_4(VAR_7, VAR_11, VAR_12, VAR_13);

 VAR_11 = FUNC_1(VAR_8);
 FUNC_3(VAR_7, VAR_11 + 2 * 4, VAR_6, VAR_10);
 if (VAR_9)
  FUNC_3(VAR_7, VAR_11, VAR_4, VAR_9->keyidx);
 FUNC_3(VAR_7, VAR_11, VAR_5, !!VAR_9);

 return 0;
}
