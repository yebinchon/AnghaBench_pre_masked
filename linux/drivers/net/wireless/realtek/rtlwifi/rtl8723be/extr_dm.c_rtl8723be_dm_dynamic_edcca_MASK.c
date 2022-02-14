
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {scalar_t__ pre_edcca_enable; } ;
struct rtl_priv {TYPE_3__ rtlhal; TYPE_2__* cfg; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {int (* get_hw_reg ) (struct ieee80211_hw*,int ,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ieee80211_hw*,int ,int ) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct rtl_priv*,scalar_t__,int) ;
 int FUNC_3 (struct ieee80211_hw*,int ,int*) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_5)
{
 struct rtl_priv *VAR_6 = FUNC_1(VAR_5);
 u8 VAR_7, VAR_8;
 bool VAR_9 = 0;

 VAR_6->cfg->ops->get_hw_reg(VAR_5, VAR_0,
          (u8 *)(&VAR_9));
 if (VAR_9)
  return;

 VAR_7 = FUNC_0(VAR_5, VAR_3, VAR_1);
 VAR_8 = FUNC_0(VAR_5, VAR_4, VAR_1);

 if (VAR_7 > 0x28 && VAR_8 > 0x28) {
  if (!VAR_6->rtlhal.pre_edcca_enable) {
   FUNC_2(VAR_6, VAR_2, 0x03);
   FUNC_2(VAR_6, VAR_2 + 2, 0x00);
  }
 } else if (VAR_7 < 0x25 && VAR_8 < 0x25) {
  if (VAR_6->rtlhal.pre_edcca_enable) {
   FUNC_2(VAR_6, VAR_2, 0x7f);
   FUNC_2(VAR_6, VAR_2 + 2, 0x7f);
  }
 }
}
