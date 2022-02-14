
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {scalar_t__ use_defaultkey; scalar_t__ use_sw_sec; int group_enc_algorithm; int pairwise_enc_algorithm; } ;
struct rtl_priv {TYPE_4__* cfg; TYPE_2__ sec; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_8__ {TYPE_3__* ops; TYPE_1__* mod_params; } ;
struct TYPE_7__ {int (* set_hw_reg ) (struct ieee80211_hw*,int ,int*) ;} ;
struct TYPE_5__ {scalar_t__ sw_crypto; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*,int ,int*) ;

void FUNC_3(struct ieee80211_hw *VAR_9)
{
 struct rtl_priv *VAR_10 = FUNC_1(VAR_9);
 u8 VAR_11 = 0x0;

 FUNC_0(VAR_10, VAR_0, VAR_3,
   "PairwiseEncAlgorithm = %d GroupEncAlgorithm = %d\n",
   VAR_10->sec.pairwise_enc_algorithm,
   VAR_10->sec.group_enc_algorithm);

 if (VAR_10->cfg->mod_params->sw_crypto || VAR_10->sec.use_sw_sec) {
  FUNC_0(VAR_10, VAR_1, VAR_2,
    "not open hw encryption\n");
  return;
 }

 VAR_11 = VAR_7 | VAR_5;

 if (VAR_10->sec.use_defaultkey) {
  VAR_11 |= VAR_8;
  VAR_11 |= VAR_6;
 }

 FUNC_0(VAR_10, VAR_1, VAR_3, "The SECR-value %x\n",
   VAR_11);

 VAR_10->cfg->ops->set_hw_reg(VAR_9, VAR_4, &VAR_11);

}
