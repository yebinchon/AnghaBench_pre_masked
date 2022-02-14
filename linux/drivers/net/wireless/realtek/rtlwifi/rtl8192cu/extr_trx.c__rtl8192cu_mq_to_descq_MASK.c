
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum rtl_desc_qsel { ____Placeholder_rtl_desc_qsel } rtl_desc_qsel ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static enum rtl_desc_qsel FUNC_5(struct ieee80211_hw *VAR_8,
      __le16 VAR_9, u16 VAR_10)
{
 enum rtl_desc_qsel VAR_11;
 struct rtl_priv *VAR_12 = FUNC_3(VAR_8);

 if (FUNC_4(FUNC_1(VAR_9))) {
  VAR_11 = VAR_3;
  goto out;
 }
 if (FUNC_2(VAR_9)) {
  VAR_11 = VAR_5;
  goto out;
 }
 switch (VAR_10) {
 case 0:
  VAR_11 = VAR_7;
  FUNC_0(VAR_12, VAR_0, VAR_1,
    "VO queue, set qsel = 0x%x\n", VAR_7);
  break;
 case 1:
  VAR_11 = VAR_6;
  FUNC_0(VAR_12, VAR_0, VAR_1,
    "VI queue, set qsel = 0x%x\n", VAR_6);
  break;
 case 3:
  VAR_11 = VAR_4;
  FUNC_0(VAR_12, VAR_0, VAR_1,
    "BK queue, set qsel = 0x%x\n", VAR_4);
  break;
 case 2:
 default:
  VAR_11 = VAR_2;
  FUNC_0(VAR_12, VAR_0, VAR_1,
    "BE queue, set qsel = 0x%x\n", VAR_2);
  break;
 }
out:
 return VAR_11;
}
