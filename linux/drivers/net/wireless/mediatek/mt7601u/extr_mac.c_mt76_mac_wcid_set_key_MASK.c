
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mt7601u_dev {int dummy; } ;
struct ieee80211_key_conf {int keyidx; int flags; } ;
typedef int key_data ;
typedef int iv_data ;
typedef enum mt76_cipher_type { ____Placeholder_mt76_cipher_type } mt76_cipher_type ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int*,int ,int) ;
 int FUNC_5 (struct mt7601u_dev*,int ) ;
 int FUNC_6 (struct mt7601u_dev*,int ,int) ;
 int FUNC_7 (struct mt7601u_dev*,int ,int*,int) ;
 int FUNC_8 (struct ieee80211_key_conf*,int*) ;
 int FUNC_9 (struct mt7601u_dev*,int) ;

int FUNC_10(struct mt7601u_dev *VAR_7, u8 VAR_8,
     struct ieee80211_key_conf *VAR_9)
{
 enum mt76_cipher_type VAR_10;
 u8 VAR_11[32];
 u8 VAR_12[8];
 u32 VAR_13;

 VAR_10 = FUNC_8(VAR_9, VAR_11);
 if (VAR_10 == VAR_2 && VAR_9)
  return -VAR_0;

 FUNC_9(VAR_7, VAR_8);

 FUNC_7(VAR_7, FUNC_3(VAR_8), VAR_11, sizeof(VAR_11));

 FUNC_4(VAR_12, 0, sizeof(VAR_12));
 if (VAR_9) {
  VAR_12[3] = VAR_9->keyidx << 6;
  if (VAR_10 >= VAR_3) {



   VAR_12[0] |= 1;
   VAR_12[3] |= 0x20;
  }
 }
 FUNC_7(VAR_7, FUNC_2(VAR_8), VAR_12, sizeof(VAR_12));

 VAR_13 = FUNC_5(VAR_7, FUNC_1(VAR_8));
 VAR_13 &= ~VAR_5 & ~VAR_6;
 VAR_13 |= FUNC_0(VAR_5, VAR_10 & 7) |
        FUNC_0(VAR_6, VAR_10 >> 3);
 VAR_13 &= ~VAR_4;
 VAR_13 |= VAR_4 *
  !!(VAR_9 && VAR_9->flags & VAR_1);
 FUNC_6(VAR_7, FUNC_1(VAR_8), VAR_13);

 return 0;
}
