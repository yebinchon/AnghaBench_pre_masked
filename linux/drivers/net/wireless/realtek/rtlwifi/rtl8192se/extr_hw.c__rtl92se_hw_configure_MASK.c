
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rtl_phy {int rf_type; } ;
struct rtl_priv {TYPE_2__* cfg; struct rtl_phy phy; } ;
struct rtl_pci {int shortretry_limit; } ;
struct rtl_hal {int minspace_cfg; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* set_hw_reg ) (struct ieee80211_hw*,int ,int*) ;} ;


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




 struct rtl_hal* FUNC_0 (struct rtl_priv*) ;
 struct rtl_pci* FUNC_1 (int ) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct rtl_priv*,int ) ;
 int FUNC_5 (struct rtl_priv*,int ,int) ;
 int FUNC_6 (struct rtl_priv*,int ,int) ;
 int FUNC_7 (struct ieee80211_hw*,int ,int*) ;

__attribute__((used)) static void FUNC_8(struct ieee80211_hw *VAR_10)
{
 struct rtl_priv *VAR_11 = FUNC_3(VAR_10);
 struct rtl_pci *VAR_12 = FUNC_1(FUNC_2(VAR_10));
 struct rtl_phy *VAR_13 = &(VAR_11->phy);
 struct rtl_hal *VAR_14 = FUNC_0(FUNC_3(VAR_10));

 u8 VAR_15 = 0;
 u32 VAR_16 = 0;
 u8 VAR_17 = 0;

 VAR_15 = VAR_2;
 VAR_16 = VAR_8 | VAR_9;

 VAR_17 = FUNC_4(VAR_11, VAR_4);
 VAR_16 = ((VAR_16 & 0x000fffff) << 8) | VAR_17;
 FUNC_6(VAR_11, VAR_4, VAR_16);
 FUNC_5(VAR_11, VAR_1, VAR_15);


 VAR_11->cfg->ops->set_hw_reg(VAR_10, VAR_3,
   (u8 *)(&VAR_12->shortretry_limit));

 FUNC_5(VAR_11, VAR_7, 0x8f);


 switch (VAR_13->rf_type) {
 case 130:
 case 131:
  VAR_14->minspace_cfg = (VAR_5 << 3);
  break;
 case 129:
 case 128:
  VAR_14->minspace_cfg = (VAR_6 << 3);
  break;
 }
 FUNC_5(VAR_11, VAR_0, VAR_14->minspace_cfg);
}
