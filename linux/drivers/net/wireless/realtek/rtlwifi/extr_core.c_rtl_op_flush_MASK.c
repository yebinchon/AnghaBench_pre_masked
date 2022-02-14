
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rtl_priv {TYPE_1__* intf_ops; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_2__ {int (* flush ) (struct ieee80211_hw*,int ,int) ;} ;


 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct ieee80211_hw*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_0,
    struct ieee80211_vif *VAR_1,
    u32 VAR_2,
    bool VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_0(VAR_0);

 if (VAR_4->intf_ops->flush)
  VAR_4->intf_ops->flush(VAR_0, VAR_2, VAR_3);
}
