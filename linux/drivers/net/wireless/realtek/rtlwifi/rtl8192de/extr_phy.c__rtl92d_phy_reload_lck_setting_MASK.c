
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ current_bandtype; scalar_t__ macphymode; int interfaceindex; int during_mac1init_radioa; int during_mac0init_radiob; int version; } ;
struct rtl_priv {TYPE_1__ rtlhal; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,int) ;
 int FUNC_2 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_3 (struct ieee80211_hw*,int,int*) ;
 int FUNC_4 (struct ieee80211_hw*,int,int*) ;
 int* VAR_10 ;
 int* VAR_11 ;
 int FUNC_5 (struct ieee80211_hw*,int) ;
 int FUNC_6 (struct ieee80211_hw*,int) ;
 int FUNC_7 (struct ieee80211_hw*,int,int ,int) ;
 struct rtl_priv* FUNC_8 (struct ieee80211_hw*) ;
 int FUNC_9 (struct ieee80211_hw*,int,int ,int,int) ;

__attribute__((used)) static void FUNC_10(struct ieee80211_hw *VAR_12,
  u8 VAR_13)
{
 struct rtl_priv *VAR_14 = FUNC_8(VAR_12);
 u8 VAR_15 = VAR_14->rtlhal.current_bandtype ==
  VAR_1 ? VAR_7 :
  FUNC_0(VAR_14->rtlhal.version) ?
  VAR_8 : VAR_7;
 u32 VAR_16 = 0, VAR_17 = 0;
 bool VAR_18 = 0;

 FUNC_2(VAR_14, VAR_2, VAR_3, "path %d\n", VAR_15);
 FUNC_1(VAR_14, VAR_5, VAR_6, "band type = %d\n",
  VAR_14->rtlhal.current_bandtype);
 FUNC_1(VAR_14, VAR_5, VAR_6, "channel = %d\n", VAR_13);
 if (VAR_14->rtlhal.current_bandtype == VAR_1) {
  VAR_16 = VAR_11[VAR_13-1];
  FUNC_1(VAR_14, VAR_5, VAR_6,
   "ver 1 set RF-A, 5G,	0x28 = 0x%x !!\n", VAR_16);
  if (VAR_14->rtlhal.macphymode == VAR_4 &&
   VAR_14->rtlhal.interfaceindex == 1) {
   VAR_18 =
    FUNC_5(VAR_12, 0);
   VAR_14->rtlhal.during_mac1init_radioa = 1;

   if (VAR_18)
    FUNC_3(VAR_12, VAR_15,
         &VAR_17);
  }
  FUNC_9(VAR_12, VAR_15, VAR_9, 0x3f800, VAR_16);
  if (VAR_18)
   FUNC_4(VAR_12, VAR_15, &VAR_17);
  if (VAR_14->rtlhal.during_mac1init_radioa)
   FUNC_6(VAR_12, 0);
 } else if (VAR_14->rtlhal.current_bandtype == VAR_0) {
  VAR_16 = VAR_10[VAR_13-1];
  FUNC_1(VAR_14, VAR_5, VAR_6,
   "ver 3 set RF-B, 2G, 0x28 = 0x%x !!\n", VAR_16);
  if (VAR_14->rtlhal.macphymode == VAR_4 &&
   VAR_14->rtlhal.interfaceindex == 0) {
   VAR_18 =
    FUNC_5(VAR_12, 1);
   VAR_14->rtlhal.during_mac0init_radiob = 1;
   if (VAR_18)
    FUNC_3(VAR_12, VAR_15,
         &VAR_17);
  }
  FUNC_9(VAR_12, VAR_15, VAR_9, 0x3f800, VAR_16);
  FUNC_1(VAR_14, VAR_5, VAR_6,
   "ver 3 set RF-B, 2G, 0x28 = 0x%x !!\n",
   FUNC_7(VAR_12, VAR_15, VAR_9, 0x3f800));
  if (VAR_18)
   FUNC_4(VAR_12, VAR_15, &VAR_17);
  if (VAR_14->rtlhal.during_mac0init_radiob)
   FUNC_6(VAR_12, 1);
 }
 FUNC_2(VAR_14, VAR_2, VAR_3, "<====\n");
}
