
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt76x02_dev {int dummy; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;


 int VAR_0 ;
 int VAR_1 ;
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
 int FUNC_0 (struct mt76x02_dev*,int ,int) ;
 scalar_t__ FUNC_1 (struct mt76x02_dev*,int) ;

void FUNC_2(struct mt76x02_dev *VAR_12,
     enum nl80211_band VAR_13)
{
 u32 VAR_14[2];
 u32 VAR_15;

 if (VAR_13 == VAR_11) {
  VAR_14[0] = 0x010055ff;
  VAR_14[1] = 0x00550055;

  FUNC_0(VAR_12, VAR_8, 0x35160a00);
  FUNC_0(VAR_12, VAR_9, 0x35160a06);

  if (FUNC_1(VAR_12, VAR_13)) {
   FUNC_0(VAR_12, VAR_2, 0x0000ec00);
   FUNC_0(VAR_12, VAR_3, 0x0000ec00);
  } else {
   FUNC_0(VAR_12, VAR_2, 0xf4000200);
   FUNC_0(VAR_12, VAR_3, 0xfa000200);
  }
 } else {
  VAR_14[0] = 0x0000ffff;
  VAR_14[1] = 0x00ff00ff;

  if (FUNC_1(VAR_12, VAR_13)) {
   FUNC_0(VAR_12, VAR_8, 0x2f0f0400);
   FUNC_0(VAR_12, VAR_9, 0x2f0f0476);
  } else {
   FUNC_0(VAR_12, VAR_8, 0x1b0f0400);
   FUNC_0(VAR_12, VAR_9, 0x1b0f0476);
  }

  if (FUNC_1(VAR_12, VAR_13))
   VAR_15 = 0x04000000;
  else
   VAR_15 = 0;

  FUNC_0(VAR_12, VAR_2, VAR_15);
  FUNC_0(VAR_12, VAR_3, VAR_15);
 }

 FUNC_0(VAR_12, VAR_0, VAR_14[0]);
 FUNC_0(VAR_12, VAR_1, VAR_14[1]);
 FUNC_0(VAR_12, VAR_4, VAR_14[0]);
 FUNC_0(VAR_12, VAR_5, VAR_14[1]);

 if (FUNC_1(VAR_12, VAR_13)) {
  u32 VAR_16;

  if (VAR_13 == VAR_11)
   VAR_16 = 0x3c3c023c;
  else
   VAR_16 = 0x363c023c;

  FUNC_0(VAR_12, VAR_6, VAR_16);
  FUNC_0(VAR_12, VAR_7, VAR_16);
  FUNC_0(VAR_12, VAR_10, 0x00001818);
 } else {
  if (VAR_13 == VAR_11) {
   u32 VAR_17 = 0x0f3c3c3c;

   FUNC_0(VAR_12, VAR_6, VAR_17);
   FUNC_0(VAR_12, VAR_7, VAR_17);
   FUNC_0(VAR_12, VAR_10, 0x00000606);
  } else {
   FUNC_0(VAR_12, VAR_6, 0x383c023c);
   FUNC_0(VAR_12, VAR_7, 0x24282e28);
   FUNC_0(VAR_12, VAR_10, 0);
  }
 }
}
