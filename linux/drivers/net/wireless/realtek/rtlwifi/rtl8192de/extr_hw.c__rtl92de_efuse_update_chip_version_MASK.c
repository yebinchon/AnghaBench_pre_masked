
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_4__ {int version; } ;
struct rtl_priv {TYPE_2__ rtlhal; TYPE_1__* intf_ops; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum version_8192d { ____Placeholder_version_8192d } version_8192d ;
struct TYPE_3__ {int (* read_efuse_byte ) (struct ieee80211_hw*,int ,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_1 (char*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*,int ,int*) ;
 int FUNC_4 (struct ieee80211_hw*,int ,int*) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_7)
{
 struct rtl_priv *VAR_8 = FUNC_2(VAR_7);
 enum version_8192d VAR_9 = VAR_8->rtlhal.version;
 u8 VAR_10[2];
 u16 VAR_11;

 VAR_8->intf_ops->read_efuse_byte(VAR_7, VAR_5,
        &VAR_10[1]);
 VAR_8->intf_ops->read_efuse_byte(VAR_7, VAR_6,
        &VAR_10[0]);
 VAR_11 = (VAR_10[1] << 8) | VAR_10[0];
 switch (VAR_11) {
 case 0xAA55:
  VAR_9 |= VAR_0;
  FUNC_0(VAR_8, VAR_3, VAR_4, "C-CUT!!!\n");
  break;
 case 0x9966:
  VAR_9 |= VAR_1;
  FUNC_0(VAR_8, VAR_3, VAR_4, "D-CUT!!!\n");
  break;
 case 0xCC33:
  VAR_9 |= VAR_2;
  FUNC_0(VAR_8, VAR_3, VAR_4, "E-CUT!!!\n");
  break;
 default:
  VAR_9 |= VAR_1;
  FUNC_1("Unknown CUT!\n");
  break;
 }
 VAR_8->rtlhal.version = VAR_9;
}
