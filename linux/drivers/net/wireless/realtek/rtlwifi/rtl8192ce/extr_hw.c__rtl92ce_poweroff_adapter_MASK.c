
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {scalar_t__ bt_coexist_type; scalar_t__ bt_coexistence; } ;
struct rtl_priv {TYPE_2__ btcoexist; TYPE_1__* intf_ops; } ;
struct rtl_hal {int version; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_3__ {int (* enable_aspm ) (struct ieee80211_hw*) ;} ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (struct ieee80211_hw*) ;
 struct rtl_hal* FUNC_3 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct rtl_priv*,scalar_t__) ;
 int FUNC_6 (struct rtl_priv*,scalar_t__) ;
 int FUNC_7 (struct ieee80211_hw*,int ,int,int ,int) ;
 int FUNC_8 (struct rtl_priv*,scalar_t__,int) ;
 int FUNC_9 (struct rtl_priv*,scalar_t__,int) ;
 int FUNC_10 (struct rtl_priv*,int ,int) ;
 int FUNC_11 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_12(struct ieee80211_hw *VAR_17)
{
 struct rtl_priv *VAR_18 = FUNC_4(VAR_17);
 struct rtl_hal *VAR_19 = FUNC_3(VAR_18);
 u8 VAR_20;
 u32 VAR_21;

 VAR_18->intf_ops->enable_aspm(VAR_17);
 FUNC_8(VAR_18, VAR_14, 0xFF);
 FUNC_7(VAR_17, VAR_15, 0x00, VAR_16, 0x00);
 FUNC_8(VAR_18, VAR_10, 0x00);
 FUNC_8(VAR_18, VAR_4, 0x40);
 FUNC_8(VAR_18, VAR_13, 0xE2);
 FUNC_8(VAR_18, VAR_13, 0xE0);
 if (FUNC_5(VAR_18, VAR_9) & FUNC_0(7))
  FUNC_2(VAR_17);
 FUNC_8(VAR_18, VAR_13 + 1, 0x51);
 FUNC_8(VAR_18, VAR_9, 0x00);
 FUNC_9(VAR_18, VAR_7, 0x00000000);
 VAR_20 = FUNC_5(VAR_18, VAR_7);
 if ((VAR_18->btcoexist.bt_coexistence) &&
     ((VAR_18->btcoexist.bt_coexist_type == VAR_0) ||
      (VAR_18->btcoexist.bt_coexist_type == VAR_1))) {
  FUNC_9(VAR_18, VAR_7, 0x00F30000 |
    (VAR_20 << 8));
 } else {
  FUNC_9(VAR_18, VAR_7, 0x00FF0000 |
    (VAR_20 << 8));
 }
 FUNC_10(VAR_18, VAR_6, 0x0790);
 FUNC_10(VAR_18, VAR_8, 0x8080);
 FUNC_8(VAR_18, VAR_2, 0x80);
 if (!FUNC_1(VAR_19->version))
  FUNC_8(VAR_18, VAR_12, 0x23);
 if (VAR_18->btcoexist.bt_coexistence) {
  VAR_21 = FUNC_6(VAR_18, VAR_3);
  VAR_21 |= 0x03824800;
  FUNC_9(VAR_18, VAR_3, VAR_21);
 } else {
  FUNC_9(VAR_18, VAR_3, 0x0e);
 }

 FUNC_8(VAR_18, VAR_11, 0x0e);
 FUNC_8(VAR_18, VAR_5 + 1, 0x10);
}
