
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct rtl_priv {TYPE_2__* cfg; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* set_hw_reg ) (struct ieee80211_hw*,int ,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int,int) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*,int ,int*) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_6)
{
 struct rtl_priv *VAR_7 = FUNC_1(VAR_6);
 u8 VAR_8[4] = {VAR_5, 1,
  VAR_3,
  VAR_4};

 VAR_7->cfg->ops->set_hw_reg(VAR_6,
  VAR_2, VAR_8);

 FUNC_0(VAR_7, VAR_0, VAR_1,
   "Initialize MacId media status: from %d to %d\n",
   VAR_3,
   VAR_4);
}
