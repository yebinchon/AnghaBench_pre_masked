
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_tkip_data {int key_idx; int key_set; int tx_iv16; int rx_iv32; int rx_iv16; int key; struct crypto_sync_skcipher* rx_tfm_arc4; struct crypto_shash* rx_tfm_michael; struct crypto_sync_skcipher* tx_tfm_arc4; struct crypto_shash* tx_tfm_michael; } ;
struct crypto_sync_skcipher {int dummy; } ;
struct crypto_shash {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,void*,int) ;
 int FUNC_1 (struct ieee80211_tkip_data*,int ,int) ;

__attribute__((used)) static int FUNC_2(void *VAR_1, int VAR_2, u8 *VAR_3, void *VAR_4)
{
 struct ieee80211_tkip_data *VAR_5 = VAR_4;
 int VAR_6;
 struct crypto_shash *VAR_7 = VAR_5->tx_tfm_michael;
 struct crypto_sync_skcipher *VAR_8 = VAR_5->tx_tfm_arc4;
 struct crypto_shash *VAR_9 = VAR_5->rx_tfm_michael;
 struct crypto_sync_skcipher *VAR_10 = VAR_5->rx_tfm_arc4;

 VAR_6 = VAR_5->key_idx;
 FUNC_1(VAR_5, 0, sizeof(*VAR_5));
 VAR_5->key_idx = VAR_6;
 VAR_5->tx_tfm_michael = VAR_7;
 VAR_5->tx_tfm_arc4 = VAR_8;
 VAR_5->rx_tfm_michael = VAR_9;
 VAR_5->rx_tfm_arc4 = VAR_10;

 if (VAR_2 == VAR_0) {
  FUNC_0(VAR_5->key, VAR_1, VAR_0);
  VAR_5->key_set = 1;
  VAR_5->tx_iv16 = 1;
  if (VAR_3) {
   VAR_5->rx_iv32 = (VAR_3[5] << 24) | (VAR_3[4] << 16) |
    (VAR_3[3] << 8) | VAR_3[2];
   VAR_5->rx_iv16 = (VAR_3[1] << 8) | VAR_3[0];
  }
 } else if (VAR_2 == 0)
  VAR_5->key_set = 0;
 else
  return -1;

 return 0;
}
