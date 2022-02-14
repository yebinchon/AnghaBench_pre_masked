
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_hal {scalar_t__ hw_type; int version; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum ht_channel_width { ____Placeholder_ht_channel_width } ht_channel_width ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 struct rtl_hal* FUNC_2 (int ) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct ieee80211_hw*,int ,int,int) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_6,
         enum ht_channel_width VAR_7, u8 VAR_8)
{
 struct rtl_hal *VAR_9 = FUNC_2(FUNC_3(VAR_6));


 if (FUNC_1(VAR_9->version)) {
  if (VAR_7 == VAR_2 && VAR_8 == 11)
   FUNC_4(VAR_6, VAR_5, 0xC00, 0x3);

  else
   FUNC_4(VAR_6, VAR_5, 0xC00, 0x2);





  if (VAR_7 == VAR_1 &&
      (VAR_8 == 13 || VAR_8 == 14)) {
   FUNC_4(VAR_6, VAR_5, 0x300, 0x3);

   FUNC_4(VAR_6, VAR_4, FUNC_0(30), 1);

  } else if (VAR_7 == VAR_2 &&
      VAR_8 == 11) {
   FUNC_4(VAR_6, VAR_4, FUNC_0(30), 1);

  } else if (VAR_7 != VAR_3) {
   FUNC_4(VAR_6, VAR_5, 0x300, 0x2);

   FUNC_4(VAR_6, VAR_4, FUNC_0(30), 0);

  }
 } else if (VAR_9->hw_type == VAR_0) {



  if (VAR_7 == VAR_1 &&
      (VAR_8 == 13 || VAR_8 == 14))
   FUNC_4(VAR_6, VAR_5, 0x300, 0x3);

  else if (VAR_8 <= 14)
   FUNC_4(VAR_6, VAR_5, 0x300, 0x2);

 }
}
