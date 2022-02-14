
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mt76x02_dev {int dummy; } ;
struct ieee80211_key_conf {int dummy; } ;
typedef int key_data ;
typedef enum mt76x02_cipher_type { ____Placeholder_mt76x02_cipher_type } mt76x02_cipher_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct mt76x02_dev*,int ) ;
 int FUNC_4 (struct mt76x02_dev*,int ,int) ;
 int FUNC_5 (struct mt76x02_dev*,int ,int *,int) ;
 int FUNC_6 (struct ieee80211_key_conf*,int *) ;

int FUNC_7(struct mt76x02_dev *VAR_3, u8 VAR_4,
     u8 VAR_5, struct ieee80211_key_conf *VAR_6)
{
 enum mt76x02_cipher_type VAR_7;
 u8 VAR_8[32];
 u32 VAR_9;

 VAR_7 = FUNC_6(VAR_6, VAR_8);
 if (VAR_7 == VAR_1 && VAR_6)
  return -VAR_0;

 VAR_9 = FUNC_3(VAR_3, FUNC_1(VAR_4));
 VAR_9 &= ~(VAR_2 << FUNC_2(VAR_4, VAR_5));
 VAR_9 |= VAR_7 << FUNC_2(VAR_4, VAR_5);
 FUNC_4(VAR_3, FUNC_1(VAR_4), VAR_9);

 FUNC_5(VAR_3, FUNC_0(VAR_4, VAR_5), VAR_8,
       sizeof(VAR_8));

 return 0;
}
