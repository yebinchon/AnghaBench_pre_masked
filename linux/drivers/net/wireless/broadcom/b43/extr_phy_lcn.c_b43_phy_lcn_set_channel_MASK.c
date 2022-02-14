
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ieee80211_channel {int hw_value; } ;
struct b43_wldev {int dummy; } ;
typedef enum nl80211_channel_type { ____Placeholder_nl80211_channel_type } nl80211_channel_type ;


 int FUNC_0 (struct b43_wldev*) ;
 int FUNC_1 (struct b43_wldev*,int) ;
 int FUNC_2 (struct b43_wldev*,int ) ;
 int FUNC_3 (struct b43_wldev*,int) ;
 int FUNC_4 (struct b43_wldev*,int,int,int) ;
 int FUNC_5 (struct b43_wldev*,int,int) ;
 int FUNC_6 (struct b43_wldev*,int,int const) ;
 int FUNC_7 (struct b43_wldev*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct b43_wldev *VAR_0,
       struct ieee80211_channel *VAR_1,
       enum nl80211_channel_type VAR_2)
{
 static const u16 VAR_3[14][2] = {
  {965, 1087}, {967, 1085}, {969, 1082}, {971, 1080}, {973, 1078},
  {975, 1076}, {977, 1073}, {979, 1071}, {981, 1069}, {983, 1067},
  {985, 1065}, {987, 1063}, {989, 1060}, {994, 1055},
 };

 FUNC_3(VAR_0, VAR_1->hw_value);

 FUNC_5(VAR_0, 0x44a, 0x44);
 FUNC_6(VAR_0, 0x44a, 0x80);

 FUNC_7(VAR_0);
 FUNC_8(1);

 FUNC_0(VAR_0);

 FUNC_6(VAR_0, 0x657, VAR_3[VAR_1->hw_value - 1][0]);
 FUNC_6(VAR_0, 0x658, VAR_3[VAR_1->hw_value - 1][1]);

 if (VAR_1->hw_value == 14) {
  FUNC_4(VAR_0, 0x448, ~(0x3 << 8), (2) << 8);
  FUNC_1(VAR_0, 3);
 } else {
  FUNC_4(VAR_0, 0x448, ~(0x3 << 8), (1) << 8);

  FUNC_1(VAR_0, 25);
 }

 FUNC_2(VAR_0, 0);

 FUNC_4(VAR_0, 0x4eb, ~(0x7 << 3), 0x1 << 3);

 return 0;
}
