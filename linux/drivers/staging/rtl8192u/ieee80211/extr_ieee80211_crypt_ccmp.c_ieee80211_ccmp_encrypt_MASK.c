
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int len; scalar_t__ data; scalar_t__ cb; } ;
struct scatterlist {int dummy; } ;
struct rtl_80211_hdr_4addr {int dummy; } ;
struct ieee80211_ccmp_data {int key_idx; int * tx_pn; int tfm; int * tx_aad; } ;
struct cb_desc {int bHwSec; } ;
struct aead_request {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct aead_request* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct aead_request*) ;
 int FUNC_3 (struct aead_request*,int) ;
 int FUNC_4 (struct aead_request*,int ,int *,int *) ;
 int FUNC_5 (struct aead_request*,struct scatterlist*,struct scatterlist*,size_t,int *) ;
 int FUNC_6 (struct rtl_80211_hdr_4addr*,int *,int *,int *) ;
 int FUNC_7 (struct aead_request*) ;
 int FUNC_8 (int *,int *,int) ;
 int FUNC_9 (struct scatterlist*,int) ;
 int FUNC_10 (struct scatterlist*,scalar_t__,size_t) ;
 scalar_t__ FUNC_11 (struct sk_buff*) ;
 int * FUNC_12 (struct sk_buff*,scalar_t__) ;
 int FUNC_13 (struct sk_buff*,size_t) ;
 size_t FUNC_14 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_15(struct sk_buff *VAR_7, int VAR_8, void *VAR_9)
{
 struct ieee80211_ccmp_data *VAR_10 = VAR_9;
 int VAR_11;
 u8 *VAR_12;
 struct rtl_80211_hdr_4addr *VAR_13;
 struct cb_desc *VAR_14 = (struct cb_desc *)(VAR_7->cb + VAR_6);

 if (FUNC_11(VAR_7) < VAR_1 ||
     FUNC_14(VAR_7) < VAR_2 ||
     VAR_7->len < VAR_8)
  return -1;

 VAR_12 = FUNC_12(VAR_7, VAR_1);
 FUNC_8(VAR_12, VAR_12 + VAR_1, VAR_8);
 VAR_12 += VAR_8;


 VAR_11 = VAR_3 - 1;
 while (VAR_11 >= 0) {
  VAR_10->tx_pn[VAR_11]++;
  if (VAR_10->tx_pn[VAR_11] != 0)
   break;
  VAR_11--;
 }

 *VAR_12++ = VAR_10->tx_pn[5];
 *VAR_12++ = VAR_10->tx_pn[4];
 *VAR_12++ = 0;
 *VAR_12++ = (VAR_10->key_idx << 6) | FUNC_0(5) ;
 *VAR_12++ = VAR_10->tx_pn[3];
 *VAR_12++ = VAR_10->tx_pn[2];
 *VAR_12++ = VAR_10->tx_pn[1];
 *VAR_12++ = VAR_10->tx_pn[0];

 VAR_13 = (struct rtl_80211_hdr_4addr *)VAR_7->data;
 if (!VAR_14->bHwSec) {
  struct aead_request *VAR_15;
  struct scatterlist VAR_16[2];
  u8 *VAR_17 = VAR_10->tx_aad;
  u8 VAR_18[VAR_0];
  int VAR_19, VAR_20;
  size_t VAR_21 = VAR_7->len - VAR_8 - VAR_1;

  VAR_15 = FUNC_1(VAR_10->tfm, VAR_5);
  if (!VAR_15)
   return -VAR_4;

  VAR_19 = FUNC_6(VAR_13, VAR_10->tx_pn, VAR_18, VAR_17);

  FUNC_13(VAR_7, VAR_2);

  FUNC_9(VAR_16, 2);
  FUNC_10(&VAR_16[0], VAR_17, VAR_19);
  FUNC_10(&VAR_16[1], VAR_7->data + VAR_8 + VAR_1,
      VAR_21 + VAR_2);

  FUNC_4(VAR_15, 0, ((void*)0), ((void*)0));
  FUNC_3(VAR_15, VAR_19);
  FUNC_5(VAR_15, VAR_16, VAR_16, VAR_21, VAR_18);

  VAR_20 = FUNC_7(VAR_15);
  FUNC_2(VAR_15);

  return VAR_20;
 }
 return 0;
}
