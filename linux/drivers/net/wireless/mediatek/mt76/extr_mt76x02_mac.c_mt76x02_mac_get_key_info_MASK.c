
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_key_conf {int keylen; int cipher; int key; } ;
typedef enum mt76x02_cipher_type { ____Placeholder_mt76x02_cipher_type } mt76x02_cipher_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static enum mt76x02_cipher_type
FUNC_2(struct ieee80211_key_conf *VAR_5, u8 *VAR_6)
{
 FUNC_1(VAR_6, 0, 32);
 if (!VAR_5)
  return VAR_1;

 if (VAR_5->keylen > 32)
  return VAR_1;

 FUNC_0(VAR_6, VAR_5->key, VAR_5->keylen);

 switch (VAR_5->cipher) {
 case 128:
  return VAR_4;
 case 129:
  return VAR_3;
 case 130:
  return VAR_2;
 case 131:
  return VAR_0;
 default:
  return VAR_1;
 }
}
