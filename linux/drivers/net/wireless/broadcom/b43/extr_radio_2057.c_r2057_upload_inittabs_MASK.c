
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct b43_phy {int rev; int radio_rev; } ;
struct b43_wldev {struct b43_phy phy; } ;


 scalar_t__ FUNC_0 (scalar_t__**) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct b43_wldev*,scalar_t__,scalar_t__) ;
 scalar_t__** VAR_0 ;
 scalar_t__** VAR_1 ;
 scalar_t__** VAR_2 ;
 scalar_t__** VAR_3 ;
 scalar_t__** VAR_4 ;
 scalar_t__** VAR_5 ;

void FUNC_3(struct b43_wldev *VAR_6)
{
 struct b43_phy *VAR_7 = &VAR_6->phy;
 u16 *VAR_8 = ((void*)0);
 u16 VAR_9, VAR_10;

 switch (VAR_7->rev) {
 case 7:
  VAR_8 = VAR_1[0];
  VAR_9 = FUNC_0(VAR_1);
  break;
 case 8:
  if (VAR_7->radio_rev == 5) {
   VAR_8 = VAR_2[0];
   VAR_9 = FUNC_0(VAR_2);
  } else if (VAR_7->radio_rev == 7) {
   VAR_8 = VAR_4[0];
   VAR_9 = FUNC_0(VAR_4);
  }
  break;
 case 9:
  if (VAR_7->radio_rev == 5) {
   VAR_8 = VAR_3[0];
   VAR_9 = FUNC_0(VAR_3);
  }
  break;
 case 16:
  if (VAR_7->radio_rev == 9) {
   VAR_8 = VAR_5[0];
   VAR_9 = FUNC_0(VAR_5);
  }
  break;
 case 17:
  if (VAR_7->radio_rev == 14) {
   VAR_8 = VAR_0[0];
   VAR_9 = FUNC_0(VAR_0);
  }
  break;
 }

 FUNC_1(!VAR_8);

 if (VAR_8) {
  for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++, VAR_8 += 2)
   FUNC_2(VAR_6, VAR_8[0], VAR_8[1]);
 }
}
