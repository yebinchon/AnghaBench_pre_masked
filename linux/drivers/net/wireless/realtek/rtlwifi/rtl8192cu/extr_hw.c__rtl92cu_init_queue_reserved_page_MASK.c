
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtl_priv {int dummy; } ;
struct rtl_hal {int version; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
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
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 struct rtl_hal* FUNC_5 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_6 (struct ieee80211_hw*) ;
 int FUNC_7 (struct rtl_priv*,int ,int) ;
 int FUNC_8 (struct rtl_priv*,int ,int) ;

__attribute__((used)) static void FUNC_9(struct ieee80211_hw *VAR_16,
           bool VAR_17,
           u8 VAR_18,
           u8 VAR_19)
{
 struct rtl_priv *VAR_20 = FUNC_6(VAR_16);
 struct rtl_hal *VAR_21 = FUNC_5(FUNC_6(VAR_16));
 bool VAR_22 = FUNC_0(VAR_21->version);
 u32 VAR_23 = (u32)VAR_18;
 u32 VAR_24 = 0;
 u32 VAR_25 = 0;
 u32 VAR_26 = 0;
 u32 VAR_27;
 u32 VAR_28;
 u8 VAR_29;
 u32 VAR_30, VAR_31, VAR_32;

 if (!VAR_17) {
  VAR_27 = (VAR_22) ? VAR_1 :
     VAR_0;
  VAR_30 = VAR_8 - VAR_27;

  VAR_31 = VAR_30 / VAR_23;
  VAR_32 = VAR_30 % VAR_23;
  if (VAR_19 & VAR_5)
   VAR_24 = VAR_31;
  if (VAR_19 & VAR_6)
   VAR_25 = VAR_31;


  if (VAR_23 > 1 && VAR_32)
   VAR_24 += VAR_32;

  if (VAR_22) {
   if (VAR_19 & VAR_7)
    VAR_26 = VAR_31;
   VAR_29 = (u8)FUNC_3(VAR_26);
   FUNC_7(VAR_20, VAR_4, VAR_29);
  }
 } else {

  VAR_27 = VAR_22 ? VAR_15 :
     VAR_11;
  if (VAR_19 & VAR_5) {
   VAR_24 = VAR_22 ? VAR_12 :
    VAR_9;
  }
  if (VAR_19 & VAR_6) {
   VAR_25 = VAR_22 ? VAR_13 :
    VAR_10;
  }

  if (VAR_22) {
   if (VAR_19 & VAR_7)
    VAR_26 = VAR_14;
   VAR_29 = (u8)FUNC_3(VAR_26);
   FUNC_7(VAR_20, VAR_4, VAR_29);
  }
 }

 VAR_28 = FUNC_1(VAR_24) | FUNC_2(VAR_25) | FUNC_4(VAR_27) | VAR_2;
 FUNC_8(VAR_20, VAR_3, VAR_28);
}
