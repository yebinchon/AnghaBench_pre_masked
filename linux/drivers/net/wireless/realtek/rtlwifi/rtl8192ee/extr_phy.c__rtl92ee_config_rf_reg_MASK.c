
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ieee80211_hw {int dummy; } ;
typedef enum radio_path { ____Placeholder_radio_path } radio_path ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ieee80211_hw*,int,int,int ) ;
 int FUNC_2 (struct ieee80211_hw*,int,int,int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_2, u32 VAR_3, u32 VAR_4,
       enum radio_path VAR_5, u32 VAR_6)
{
 if (VAR_3 == 0xfe || VAR_3 == 0xffe) {
  FUNC_0(50);
 } else {
  FUNC_2(VAR_2, VAR_5, VAR_6, VAR_1, VAR_4);
  FUNC_3(1);

  if (VAR_3 == 0xb6) {
   u32 VAR_7;
   u8 VAR_8 = 0;

   VAR_7 = FUNC_1(VAR_2, VAR_5, VAR_3, VAR_0);
   FUNC_3(1);

   while ((VAR_7 >> 8) != (VAR_4 >> 8)) {
    VAR_8++;
    FUNC_2(VAR_2, VAR_5, VAR_6,
           VAR_1, VAR_4);
    FUNC_3(1);
    VAR_7 = FUNC_1(VAR_2, VAR_5, VAR_3,
        VAR_0);
    if (VAR_8 > 5)
     break;
   }
  }

  if (VAR_3 == 0xb2) {
   u32 VAR_9;
   u8 VAR_10 = 0;

   VAR_9 = FUNC_1(VAR_2, VAR_5, VAR_3, VAR_0);
   FUNC_3(1);

   while (VAR_9 != VAR_4) {
    VAR_10++;
    FUNC_2(VAR_2, VAR_5, VAR_6,
           VAR_1, VAR_4);
    FUNC_3(1);
    FUNC_2(VAR_2, VAR_5, 0x18,
           VAR_1, 0x0fc07);
    FUNC_3(1);
    VAR_9 = FUNC_1(VAR_2, VAR_5, VAR_3,
        VAR_0);
    if (VAR_10 > 5)
     break;
   }
  }
 }
}
