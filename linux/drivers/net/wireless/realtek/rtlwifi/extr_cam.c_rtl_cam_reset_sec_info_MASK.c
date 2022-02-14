
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int use_defaultkey; int * pairwise_key; int key_len; int key_buf; void* group_enc_algorithm; void* pairwise_enc_algorithm; } ;
struct rtl_priv {TYPE_1__ sec; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;

void FUNC_2(struct ieee80211_hw *VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_1(VAR_3);

 VAR_4->sec.use_defaultkey = 0;
 VAR_4->sec.pairwise_enc_algorithm = VAR_2;
 VAR_4->sec.group_enc_algorithm = VAR_2;
 FUNC_0(VAR_4->sec.key_buf, 0, VAR_0 * VAR_1);
 FUNC_0(VAR_4->sec.key_len, 0, VAR_0);
 VAR_4->sec.pairwise_key = ((void*)0);
}
