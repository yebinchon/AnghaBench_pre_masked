
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct rtl_priv {TYPE_2__* cfg; } ;
struct ieee80211_hw {struct rtl_priv* priv; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* get_bbreg ) (struct ieee80211_hw*,int ,int ) ;} ;


 int FUNC_0 (struct ieee80211_hw*,int ,int ) ;

__attribute__((used)) static inline u32 FUNC_1(struct ieee80211_hw *VAR_0,
    u32 VAR_1, u32 VAR_2)
{
 struct rtl_priv *VAR_3 = VAR_0->priv;

 return VAR_3->cfg->ops->get_bbreg(VAR_0, VAR_1, VAR_2);
}
