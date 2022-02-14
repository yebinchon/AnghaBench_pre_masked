
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rtl_priv {TYPE_2__* cfg; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* set_hw_reg ) (struct ieee80211_hw*,int ,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct rtl_priv*,scalar_t__,int) ;
 int FUNC_2 (struct ieee80211_hw*,int ,int *) ;
 int FUNC_3 (struct ieee80211_hw*,int ,int *) ;
 int FUNC_4 (struct ieee80211_hw*,int ,int *) ;
 int FUNC_5 (struct ieee80211_hw*,int ,int *) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_hw *VAR_16)
{
 u16 VAR_17;
 u32 VAR_18;
 struct rtl_priv *VAR_19 = FUNC_0(VAR_16);

 VAR_18 = (VAR_9 | VAR_7 | VAR_6 | VAR_4 | VAR_10 |
     VAR_11 | VAR_8 | VAR_14 |
     VAR_12 | VAR_13 | VAR_5);
 VAR_19->cfg->ops->set_hw_reg(VAR_16, VAR_3, (u8 *)(&VAR_18));

 FUNC_1(VAR_19, VAR_15, 0xFFFFFFFF);
 FUNC_1(VAR_19, VAR_15 + 4, 0xFFFFFFFF);

 VAR_17 = 0xFFFF;
 VAR_19->cfg->ops->set_hw_reg(VAR_16, VAR_2,
          (u8 *)(&VAR_17));

 VAR_17 = 0x0;
 VAR_19->cfg->ops->set_hw_reg(VAR_16, VAR_0,
          (u8 *)(&VAR_17));

 VAR_17 = 0xFFFF;
 VAR_19->cfg->ops->set_hw_reg(VAR_16, VAR_1,
          (u8 *)(&VAR_17));
}
