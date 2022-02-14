
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct mt76x02_dev {int dummy; } ;
struct ieee80211_key_conf {int flags; int keyidx; int tx_pn; } ;
typedef int key_data ;
typedef int iv_data ;
typedef enum mt76x02_cipher_type { ____Placeholder_mt76x02_cipher_type } mt76x02_cipher_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int*,int ,int) ;
 int FUNC_5 (struct mt76x02_dev*,int ,int ,int) ;
 int FUNC_6 (struct mt76x02_dev*,int ,int*,int) ;
 int FUNC_7 (struct ieee80211_key_conf*,int*) ;
 int FUNC_8 (int,int*) ;
 int FUNC_9 (int,int*) ;

int FUNC_10(struct mt76x02_dev *VAR_7, u8 VAR_8,
        struct ieee80211_key_conf *VAR_9)
{
 enum mt76x02_cipher_type VAR_10;
 u8 VAR_11[32];
 u8 VAR_12[8];
 u64 VAR_13;

 VAR_10 = FUNC_7(VAR_9, VAR_11);
 if (VAR_10 == VAR_3 && VAR_9)
  return -VAR_0;

 FUNC_6(VAR_7, FUNC_2(VAR_8), VAR_11, sizeof(VAR_11));
 FUNC_5(VAR_7, FUNC_0(VAR_8), VAR_6, VAR_10);

 FUNC_4(VAR_12, 0, sizeof(VAR_12));
 if (VAR_9) {
  FUNC_5(VAR_7, FUNC_0(VAR_8), VAR_5,
          !!(VAR_9->flags & VAR_1));

  VAR_13 = FUNC_3(&VAR_9->tx_pn);

  VAR_12[3] = VAR_9->keyidx << 6;
  if (VAR_10 >= VAR_4) {
   VAR_12[3] |= 0x20;
   FUNC_9(VAR_13 >> 16, &VAR_12[4]);
  }

  if (VAR_10 == VAR_4) {
   VAR_12[0] = (VAR_13 >> 8) & 0xff;
   VAR_12[1] = (VAR_12[0] | 0x20) & 0x7f;
   VAR_12[2] = VAR_13 & 0xff;
  } else if (VAR_10 >= VAR_2) {
   FUNC_8((VAR_13 & 0xffff), &VAR_12[0]);
  }
 }

 FUNC_6(VAR_7, FUNC_1(VAR_8), VAR_12, sizeof(VAR_12));

 return 0;
}
