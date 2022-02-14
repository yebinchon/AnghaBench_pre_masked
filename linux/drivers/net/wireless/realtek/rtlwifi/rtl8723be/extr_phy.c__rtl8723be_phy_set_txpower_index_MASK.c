
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_1 (struct ieee80211_hw*,int ,int ,scalar_t__) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_14,
          u8 VAR_15, u8 VAR_16, u8 VAR_17)
{
 struct rtl_priv *VAR_18 = FUNC_2(VAR_14);
 if (VAR_16 == VAR_6) {
  switch (VAR_17) {
  case 148:
   FUNC_1(VAR_14, VAR_7,
            VAR_3, VAR_15);
   break;
  case 146:
   FUNC_1(VAR_14, VAR_13,
            VAR_3, VAR_15);
   break;
  case 142:
   FUNC_1(VAR_14, VAR_13,
            VAR_4, VAR_15);
   break;
  case 151:
   FUNC_1(VAR_14, VAR_13,
            VAR_5, VAR_15);
   break;

  case 141:
   FUNC_1(VAR_14, VAR_11,
            VAR_2, VAR_15);
   break;
  case 140:
   FUNC_1(VAR_14, VAR_11,
            VAR_3, VAR_15);
   break;
  case 150:
   FUNC_1(VAR_14, VAR_11,
            VAR_4, VAR_15);
   break;
  case 149:
   FUNC_1(VAR_14, VAR_11,
            VAR_5, VAR_15);
   break;

  case 147:
   FUNC_1(VAR_14, VAR_12,
            VAR_2, VAR_15);
   break;
  case 145:
   FUNC_1(VAR_14, VAR_12,
            VAR_3, VAR_15);
   break;
  case 144:
   FUNC_1(VAR_14, VAR_12,
            VAR_4, VAR_15);
   break;
  case 143:
   FUNC_1(VAR_14, VAR_12,
            VAR_5, VAR_15);
   break;

  case 139:
   FUNC_1(VAR_14, VAR_8,
            VAR_2, VAR_15);
   break;
  case 138:
   FUNC_1(VAR_14, VAR_8,
            VAR_3, VAR_15);
   break;
  case 135:
   FUNC_1(VAR_14, VAR_8,
            VAR_4, VAR_15);
   break;
  case 134:
   FUNC_1(VAR_14, VAR_8,
            VAR_5, VAR_15);
   break;

  case 133:
   FUNC_1(VAR_14, VAR_9,
            VAR_2, VAR_15);
   break;
  case 132:
   FUNC_1(VAR_14, VAR_9,
            VAR_3, VAR_15);
   break;
  case 131:
   FUNC_1(VAR_14, VAR_9,
            VAR_4, VAR_15);
   break;
  case 130:
   FUNC_1(VAR_14, VAR_9,
            VAR_5, VAR_15);
   break;

  case 129:
   FUNC_1(VAR_14, VAR_10,
            VAR_2, VAR_15);
   break;
  case 128:
   FUNC_1(VAR_14, VAR_10,
            VAR_3, VAR_15);
   break;
  case 137:
   FUNC_1(VAR_14, VAR_10,
            VAR_4, VAR_15);
   break;
  case 136:
   FUNC_1(VAR_14, VAR_10,
            VAR_5, VAR_15);
   break;

  default:
   FUNC_0(VAR_18, VAR_0, VAR_1, "Invalid Rate!!\n");
   break;
  }
 } else {
  FUNC_0(VAR_18, VAR_0, VAR_1, "Invalid RFPath!!\n");
 }
}
