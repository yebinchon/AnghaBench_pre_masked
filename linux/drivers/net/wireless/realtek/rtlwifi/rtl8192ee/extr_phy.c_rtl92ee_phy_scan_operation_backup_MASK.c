
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct rtl_priv {TYPE_2__* cfg; } ;
struct rtl_hal {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum io_type { ____Placeholder_io_type } io_type ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* set_hw_reg ) (struct ieee80211_hw*,int ,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (struct rtl_hal*) ;
 int FUNC_1 (char*) ;
 struct rtl_hal* FUNC_2 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct ieee80211_hw*,int ,int*) ;
 int FUNC_5 (struct ieee80211_hw*,int ,int*) ;

void FUNC_6(struct ieee80211_hw *VAR_3, u8 VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_3(VAR_3);
 struct rtl_hal *VAR_6 = FUNC_2(FUNC_3(VAR_3));
 enum io_type VAR_7;

 if (!FUNC_0(VAR_6)) {
  switch (VAR_4) {
  case 129:
   VAR_7 = VAR_1;
   VAR_5->cfg->ops->set_hw_reg(VAR_3, VAR_0,
            (u8 *)&VAR_7);

   break;
  case 128:
   VAR_7 = VAR_2;
   VAR_5->cfg->ops->set_hw_reg(VAR_3, VAR_0,
            (u8 *)&VAR_7);
   break;
  default:
   FUNC_1("Unknown Scan Backup operation.\n");
   break;
  }
 }
}
