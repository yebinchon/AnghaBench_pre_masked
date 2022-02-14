
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct rtl_priv {TYPE_2__* cfg; } ;
struct ieee80211_hw {struct rtl_priv* priv; } ;
typedef enum radio_path { ____Placeholder_radio_path } radio_path ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* get_rfreg ) (struct ieee80211_hw*,int,int ,int ) ;} ;


 int FUNC_0 (struct ieee80211_hw*,int,int ,int ) ;

__attribute__((used)) static inline u32 FUNC_1(struct ieee80211_hw *VAR_0,
    enum radio_path VAR_1, u32 VAR_2,
    u32 VAR_3)
{
 struct rtl_priv *VAR_4 = VAR_0->priv;

 return VAR_4->cfg->ops->get_rfreg(VAR_0, VAR_1, VAR_2, VAR_3);
}
