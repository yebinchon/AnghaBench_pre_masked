
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ieee80211_hw {int dummy; } ;
typedef enum radio_path { ____Placeholder_radio_path } radio_path ;






 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ieee80211_hw*,int,int,int ,int) ;
 int FUNC_2 (int) ;

bool FUNC_3(struct ieee80211_hw *VAR_3,
         enum radio_path VAR_4)
{
 int VAR_5;
 bool VAR_6 = 1;
 u32 *VAR_7;
 u16 VAR_8;

 VAR_8 = VAR_1;
 VAR_7 = VAR_2;

 VAR_6 = 1;

 switch (VAR_4) {
 case 131:
  for (VAR_5 = 0; VAR_5 < VAR_8; VAR_5 = VAR_5 + 2) {
   if (VAR_7[VAR_5] == 0xfe) {
    FUNC_0(50);
   } else if (VAR_7[VAR_5] == 0xfd) {
    FUNC_0(5);
   } else if (VAR_7[VAR_5] == 0xfc) {
    FUNC_0(1);
   } else if (VAR_7[VAR_5] == 0xfb) {
    FUNC_2(50);
   } else if (VAR_7[VAR_5] == 0xfa) {
    FUNC_2(5);
   } else if (VAR_7[VAR_5] == 0xf9) {
    FUNC_2(1);
   } else {
    FUNC_1(VAR_3, VAR_4, VAR_7[VAR_5],
           VAR_0,
           VAR_7[VAR_5 + 1]);
    FUNC_2(1);
   }
  }
  break;
 case 130:
 case 129:
 case 128:
  break;
 }
 return 1;
}
