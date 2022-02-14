
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
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
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct rtl_priv*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_9,
            bool VAR_10,
            u8 VAR_11,
            u8 VAR_12)
{
 u8 VAR_13 = 0;
 struct rtl_priv *VAR_14 = FUNC_2(VAR_9);

 switch (VAR_11) {
 case 2:
  if (!VAR_10)
   VAR_13 = VAR_5 | VAR_4 | VAR_3 |
       VAR_2;
  else
   VAR_13 = VAR_5 | VAR_0 | VAR_3 |
      VAR_2;
  break;
 case 1:
  if (VAR_8 == VAR_12) {

   VAR_13 = 0;
  } else if (VAR_7 == VAR_12) {

   VAR_13 = VAR_5 | VAR_4 | VAR_0 |
       VAR_1 | VAR_3 | VAR_2;
  }
  break;
 default:
  FUNC_0(1);
  break;
 }
 FUNC_3(VAR_14, (VAR_6+1), VAR_13);
 FUNC_1("Tx queue select :0x%02x..\n", VAR_13);
}
