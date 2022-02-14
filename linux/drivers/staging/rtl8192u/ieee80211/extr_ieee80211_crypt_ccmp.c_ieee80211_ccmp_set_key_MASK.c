
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct ieee80211_ccmp_data {int key_idx; int key_set; int key; void** rx_pn; struct crypto_aead* tfm; } ;
struct crypto_aead {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct crypto_aead*,int ) ;
 scalar_t__ FUNC_1 (struct crypto_aead*,int ,int) ;
 int FUNC_2 (int ,void*,int) ;
 int FUNC_3 (struct ieee80211_ccmp_data*,int ,int) ;

__attribute__((used)) static int FUNC_4(void *VAR_2, int VAR_3, u8 *VAR_4, void *VAR_5)
{
 struct ieee80211_ccmp_data *VAR_6 = VAR_5;
 int VAR_7;
 struct crypto_aead *VAR_8 = VAR_6->tfm;

 VAR_7 = VAR_6->key_idx;
 FUNC_3(VAR_6, 0, sizeof(*VAR_6));
 VAR_6->key_idx = VAR_7;
 if (VAR_3 == VAR_1) {
  FUNC_2(VAR_6->key, VAR_2, VAR_1);
  VAR_6->key_set = 1;
  if (VAR_4) {
   VAR_6->rx_pn[0] = VAR_4[5];
   VAR_6->rx_pn[1] = VAR_4[4];
   VAR_6->rx_pn[2] = VAR_4[3];
   VAR_6->rx_pn[3] = VAR_4[2];
   VAR_6->rx_pn[4] = VAR_4[1];
   VAR_6->rx_pn[5] = VAR_4[0];
  }
  if (FUNC_0(VAR_8, VAR_0) ||
      FUNC_1(VAR_8, VAR_6->key, VAR_1))
   return -1;
 } else if (VAR_3 == 0) {
  VAR_6->key_set = 0;
 } else {
  return -1;
 }

 return 0;
}
