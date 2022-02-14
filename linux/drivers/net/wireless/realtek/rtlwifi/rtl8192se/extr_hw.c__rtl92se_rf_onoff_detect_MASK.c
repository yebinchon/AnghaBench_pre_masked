
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
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct rtl_priv*,int ) ;
 int FUNC_3 (struct rtl_priv*,int ,int) ;

__attribute__((used)) static u8 FUNC_4(struct ieee80211_hw *VAR_9)
{
 struct rtl_priv *VAR_10 = FUNC_1(VAR_9);
 u8 VAR_11;
 u8 VAR_12 = VAR_1;


 FUNC_3(VAR_10, VAR_8, (VAR_2 | VAR_3));
 VAR_11 = FUNC_2(VAR_10, VAR_5);


 VAR_11 &= VAR_7;
 FUNC_3(VAR_10, VAR_5, VAR_11);



 FUNC_0(10);


 VAR_11 = FUNC_2(VAR_10, VAR_4);
 VAR_12 = (VAR_11 & VAR_6) ? VAR_1 : VAR_0;

 return VAR_12;
}
