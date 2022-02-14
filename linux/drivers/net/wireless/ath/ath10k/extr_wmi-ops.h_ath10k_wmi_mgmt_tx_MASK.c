
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ieee80211_tx_info {int flags; } ;
struct TYPE_6__ {TYPE_1__* cmd; TYPE_2__* ops; } ;
struct ath10k {int hw; TYPE_3__ wmi; } ;
struct TYPE_5__ {struct sk_buff* (* gen_mgmt_tx ) (struct ath10k*,struct sk_buff*) ;} ;
struct TYPE_4__ {int mgmt_tx_cmdid; } ;


 int VAR_0 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct ath10k*,struct sk_buff*,int ) ;
 int FUNC_4 (int ,struct sk_buff*) ;
 struct sk_buff* FUNC_5 (struct ath10k*,struct sk_buff*) ;

__attribute__((used)) static inline int
FUNC_6(struct ath10k *VAR_2, struct sk_buff *VAR_3)
{
 struct ieee80211_tx_info *VAR_4 = FUNC_0(VAR_3);
 struct sk_buff *VAR_5;
 int VAR_6;

 if (!VAR_2->wmi.ops->gen_mgmt_tx)
  return -VAR_0;

 VAR_5 = VAR_2->wmi.ops->gen_mgmt_tx(VAR_2, VAR_3);
 if (FUNC_1(VAR_5))
  return FUNC_2(VAR_5);

 VAR_6 = FUNC_3(VAR_2, VAR_5,
      VAR_2->wmi.cmd->mgmt_tx_cmdid);
 if (VAR_6)
  return VAR_6;




 VAR_4->flags |= VAR_1;
 FUNC_4(VAR_2->hw, VAR_3);

 return 0;
}
