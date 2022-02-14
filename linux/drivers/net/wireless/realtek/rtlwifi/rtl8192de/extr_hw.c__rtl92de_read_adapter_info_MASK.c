
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct rtl_priv {TYPE_2__* cfg; } ;
struct rtl_hal {scalar_t__ interfaceindex; int bandset; } ;
struct rtl_efuse {int txpwr_fromeprom; void* channel_plan; int autoload_failflag; int * dev_addr; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* set_hw_reg ) (struct ieee80211_hw*,int ,int *) ;} ;





 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int *) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*,int *) ;
 int FUNC_3 (struct ieee80211_hw*,int ,int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,int ) ;
 struct rtl_efuse* FUNC_6 (struct rtl_priv*) ;
 scalar_t__ FUNC_7 (struct ieee80211_hw*,struct rtl_priv*,int ,int *,int*) ;
 struct rtl_hal* FUNC_8 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_9 (struct ieee80211_hw*) ;
 int FUNC_10 (struct ieee80211_hw*,int ,int *) ;

__attribute__((used)) static void FUNC_11(struct ieee80211_hw *VAR_18)
{
 struct rtl_priv *VAR_19 = FUNC_9(VAR_18);
 struct rtl_efuse *VAR_20 = FUNC_6(FUNC_9(VAR_18));
 struct rtl_hal *VAR_21 = FUNC_8(FUNC_9(VAR_18));
 int VAR_22[] = {VAR_17, VAR_13, VAR_7,
   VAR_11, VAR_10, VAR_8,
   VAR_5, VAR_12, VAR_6,
   VAR_3};
 int VAR_23;
 u16 VAR_24;
 u8 *VAR_25;

 VAR_25 = FUNC_5(VAR_15, VAR_14);
 if (!VAR_25)
  return;

 if (FUNC_7(VAR_18, VAR_19, VAR_15, VAR_25, VAR_22))
  goto exit;

 FUNC_1(VAR_18);
 FUNC_2(VAR_18, VAR_25);


 if (VAR_21->interfaceindex != 0) {
  for (VAR_23 = 0; VAR_23 < 6; VAR_23 += 2) {
   VAR_24 = *(u16 *)&VAR_25[VAR_9 + VAR_23];
   *((u16 *) (&VAR_20->dev_addr[VAR_23])) = VAR_24;
  }
 }
 VAR_19->cfg->ops->set_hw_reg(VAR_18, VAR_16,
          VAR_20->dev_addr);
 FUNC_0(VAR_19, VAR_0, VAR_4, "%pM\n", VAR_20->dev_addr);
 FUNC_3(VAR_18, VAR_20->autoload_failflag, VAR_25);


 switch (VAR_21->bandset) {
 case 130:
  VAR_20->channel_plan = VAR_2;
  break;
 case 129:
  VAR_20->channel_plan = VAR_1;
  break;
 case 128:
  VAR_20->channel_plan = VAR_1;
  break;
 default:
  VAR_20->channel_plan = VAR_1;
  break;
 }
 VAR_20->txpwr_fromeprom = 1;
exit:
 FUNC_4(VAR_25);
}
