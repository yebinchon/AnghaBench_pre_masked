
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rtl_usb {int dummy; } ;
struct rtl_priv {TYPE_2__* cfg; } ;
struct rtl_hal {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* hw_init ) (struct ieee80211_hw*) ;} ;


 int FUNC_0 (struct rtl_usb*) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 struct rtl_hal* FUNC_2 (struct rtl_priv*) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;
 struct rtl_usb* FUNC_5 (int ) ;
 int FUNC_6 (struct ieee80211_hw*) ;
 int FUNC_7 (struct rtl_hal*) ;
 int FUNC_8 (struct ieee80211_hw*) ;

__attribute__((used)) static int FUNC_9(struct ieee80211_hw *VAR_0)
{
 int VAR_1;
 struct rtl_priv *VAR_2 = FUNC_4(VAR_0);
 struct rtl_hal *VAR_3 = FUNC_2(FUNC_4(VAR_0));
 struct rtl_usb *VAR_4 = FUNC_5(FUNC_6(VAR_0));

 VAR_1 = VAR_2->cfg->ops->hw_init(VAR_0);
 if (!VAR_1) {
  FUNC_3(VAR_0);


  FUNC_0(VAR_4);

  FUNC_7(VAR_3);


  VAR_1 = FUNC_1(VAR_0);
 }

 return VAR_1;
}
