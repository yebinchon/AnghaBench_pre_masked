
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u8 ;
struct mwl8k_priv {scalar_t__ ap_fw; } ;
struct TYPE_6__ {void* length; void* code; } ;
struct TYPE_5__ {void* txq; void* aifs; void* log_cw_min; void* log_cw_max; } ;
struct TYPE_4__ {void* txq; void* aifs; void* log_cw_min; void* log_cw_max; } ;
struct mwl8k_cmd_set_edca_params {TYPE_3__ header; TYPE_2__ sta; TYPE_1__ ap; void* txop; void* action; } ;
struct ieee80211_hw {struct mwl8k_priv* priv; } ;
typedef void* __u8 ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct mwl8k_cmd_set_edca_params*) ;
 struct mwl8k_cmd_set_edca_params* FUNC_4 (int,int ) ;
 int FUNC_5 (struct ieee80211_hw*,TYPE_3__*) ;

__attribute__((used)) static int
FUNC_6(struct ieee80211_hw *VAR_4, __u8 VAR_5,
     __u16 VAR_6, __u16 VAR_7,
     __u8 VAR_8, __u16 VAR_9)
{
 struct mwl8k_priv *VAR_10 = VAR_4->priv;
 struct mwl8k_cmd_set_edca_params *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_4(sizeof(*VAR_11), VAR_1);
 if (VAR_11 == ((void*)0))
  return -VAR_0;

 VAR_11->header.code = FUNC_0(VAR_2);
 VAR_11->header.length = FUNC_0(sizeof(*VAR_11));
 VAR_11->action = FUNC_0(VAR_3);
 VAR_11->txop = FUNC_0(VAR_9);
 if (VAR_10->ap_fw) {
  VAR_11->ap.log_cw_max = FUNC_1(FUNC_2(VAR_7 + 1));
  VAR_11->ap.log_cw_min = FUNC_1(FUNC_2(VAR_6 + 1));
  VAR_11->ap.aifs = VAR_8;
  VAR_11->ap.txq = VAR_5;
 } else {
  VAR_11->sta.log_cw_max = (u8)FUNC_2(VAR_7 + 1);
  VAR_11->sta.log_cw_min = (u8)FUNC_2(VAR_6 + 1);
  VAR_11->sta.aifs = VAR_8;
  VAR_11->sta.txq = VAR_5;
 }

 VAR_12 = FUNC_5(VAR_4, &VAR_11->header);
 FUNC_3(VAR_11);

 return VAR_12;
}
