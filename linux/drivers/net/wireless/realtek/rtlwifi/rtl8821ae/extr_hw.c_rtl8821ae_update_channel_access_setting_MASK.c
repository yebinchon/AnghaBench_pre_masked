
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct rtl_priv {TYPE_2__* cfg; } ;
struct rtl_mac {scalar_t__ mode; int vht_ldpc_cap; int vht_stbc_cap; scalar_t__ vendor; int slot_time; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* set_hw_reg ) (struct ieee80211_hw*,int ,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 struct rtl_mac* FUNC_0 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*,int ,int*) ;
 int FUNC_3 (struct ieee80211_hw*,int ,int*) ;
 int FUNC_4 (struct ieee80211_hw*,int ,int*) ;

void FUNC_5(struct ieee80211_hw *VAR_8)
{
 struct rtl_priv *VAR_9 = FUNC_1(VAR_8);
 struct rtl_mac *VAR_10 = FUNC_0(FUNC_1(VAR_8));
 u16 VAR_11 = VAR_10->mode;
 u8 VAR_12, VAR_13;

 VAR_9->cfg->ops->set_hw_reg(VAR_8, VAR_2,
          (u8 *)&VAR_10->slot_time);
 if (VAR_11 == VAR_7)
  VAR_12 = 0x0a;
 else
  VAR_12 = 0x0e;
 VAR_9->cfg->ops->set_hw_reg(VAR_8, VAR_1, (u8 *)&VAR_12);

 VAR_13 = 0xa;

 if (VAR_11 == VAR_6 &&
     (VAR_10->vht_ldpc_cap & VAR_3) &&
     (VAR_10->vht_stbc_cap & VAR_5)) {
  if (VAR_10->vendor == VAR_4)
   VAR_13 = 0x8;
  else
   VAR_13 = 0xa;
 } else if (VAR_11 == VAR_6) {
  VAR_13 = 0xa;
 }

 VAR_9->cfg->ops->set_hw_reg(VAR_8, VAR_0, (u8 *)&VAR_13);
}
