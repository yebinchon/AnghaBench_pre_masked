
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_hal {int version; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 scalar_t__ FUNC_4 (int ) ;
 struct rtl_hal* FUNC_5 (int ) ;
 int FUNC_6 (struct ieee80211_hw*) ;

int FUNC_7(struct ieee80211_hw *VAR_0)
{
 struct rtl_hal *VAR_1 = FUNC_5(FUNC_6(VAR_0));
 int VAR_2 = 0;

 if (FUNC_4(FUNC_0(VAR_1->version)))
  VAR_2 = FUNC_2(VAR_0);
 else
  VAR_2 = FUNC_3(VAR_0);
 if (VAR_2)
  goto err_out;
 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2)
  goto err_out;
err_out:
 return VAR_2;
}
