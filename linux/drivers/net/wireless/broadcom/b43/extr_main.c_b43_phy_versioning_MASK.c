
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct b43_phy {int radio_manuf; int radio_ver; int radio_rev; int analog; int type; int rev; } ;
struct b43_wldev {int wl; TYPE_1__* dev; struct b43_phy phy; } ;
struct TYPE_2__ {int core_rev; int chip_id; int chip_rev; } ;


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
 int VAR_12 ;
 int FUNC_0 (int) ;
 int VAR_13 ;
 int FUNC_1 (struct b43_wldev*,int) ;
 int FUNC_2 (struct b43_wldev*,int ) ;
 int FUNC_3 (struct b43_wldev*,int ,int) ;
 int FUNC_4 (int ,char*,int,int,int,int) ;
 int FUNC_5 (int ,char*,int,int,int,int) ;

__attribute__((used)) static int FUNC_6(struct b43_wldev *VAR_14)
{
 struct b43_phy *VAR_15 = &VAR_14->phy;
 const u8 VAR_16 = VAR_14->dev->core_rev;
 u32 VAR_17;
 u8 VAR_18;
 u8 VAR_19;
 u8 VAR_20;
 u16 VAR_21;
 u16 VAR_22;
 u16 VAR_23;
 u8 VAR_24;
 int VAR_25 = 0;


 VAR_17 = FUNC_2(VAR_14, VAR_0);
 VAR_18 = (VAR_17 & VAR_7) >> VAR_8;
 VAR_19 = (VAR_17 & VAR_9) >> VAR_10;
 VAR_20 = (VAR_17 & VAR_11);


 if (VAR_19 == VAR_6) {
  VAR_19 = 128;
  VAR_20 += 16;
 }

 switch (VAR_19) {
 default:
  VAR_25 = 1;
 }
 if (VAR_25) {
  FUNC_4(VAR_14->wl, "FOUND UNSUPPORTED PHY (Analog %u, Type %d (%s), Revision %u)\n",
         VAR_18, VAR_19, FUNC_1(VAR_14, VAR_19),
         VAR_20);
  return -VAR_13;
 }
 FUNC_5(VAR_14->wl, "Found PHY: Analog %u, Type %d (%s), Revision %u\n",
  VAR_18, VAR_19, FUNC_1(VAR_14, VAR_19), VAR_20);


 if (VAR_16 == 40 || VAR_16 == 42) {
  VAR_21 = 0x17F;

  FUNC_3(VAR_14, VAR_1, 0);
  VAR_23 = FUNC_2(VAR_14, VAR_2);

  FUNC_3(VAR_14, VAR_1, 1);
  VAR_22 = FUNC_2(VAR_14, VAR_2);

  VAR_24 = 0;
 } else if (VAR_16 >= 24) {
  u16 VAR_26[3];

  for (VAR_17 = 0; VAR_17 < 3; VAR_17++) {
   FUNC_3(VAR_14, VAR_1, VAR_17);
   VAR_26[VAR_17] = FUNC_2(VAR_14, VAR_2);
  }

  VAR_21 = 0x17F;
  VAR_22 = (VAR_26[2] << 8) | VAR_26[1];
  VAR_23 = (VAR_26[0] & 0xF);
  VAR_24 = (VAR_26[0] & 0xF0) >> 4;
 } else {
  if (VAR_14->dev->chip_id == 0x4317) {
   if (VAR_14->dev->chip_rev == 0)
    VAR_17 = 0x3205017F;
   else if (VAR_14->dev->chip_rev == 1)
    VAR_17 = 0x4205017F;
   else
    VAR_17 = 0x5205017F;
  } else {
   FUNC_3(VAR_14, VAR_3,
         VAR_12);
   VAR_17 = FUNC_2(VAR_14, VAR_5);
   FUNC_3(VAR_14, VAR_3,
         VAR_12);
   VAR_17 |= FUNC_2(VAR_14, VAR_4) << 16;
  }
  VAR_21 = (VAR_17 & 0x00000FFF);
  VAR_22 = (VAR_17 & 0x0FFFF000) >> 12;
  VAR_23 = (VAR_17 & 0xF0000000) >> 28;
  VAR_24 = 0;
 }

 if (VAR_21 != 0x17F )
  VAR_25 = 1;
 switch (VAR_19) {
 case 133:
  if ((VAR_22 & 0xFFF0) != 0x2050)
   VAR_25 = 1;
  break;
 case 132:
  if (VAR_22 != 0x2050)
   VAR_25 = 1;
  break;
 case 128:
  if (VAR_22 != 0x2055 && VAR_22 != 0x2056 &&
      VAR_22 != 0x2057)
   VAR_25 = 1;
  if (VAR_22 == 0x2057 &&
      !(VAR_23 == 9 || VAR_23 == 14))
   VAR_25 = 1;
  break;
 case 129:
  if (VAR_22 != 0x2062 && VAR_22 != 0x2063)
   VAR_25 = 1;
  break;
 case 131:
  if (VAR_22 != 0x2059)
   VAR_25 = 1;
  break;
 case 130:
  if (VAR_22 != 0x2064)
   VAR_25 = 1;
  break;
 case 134:
  if (VAR_22 != 0x2069)
   VAR_25 = 1;
  break;
 default:
  FUNC_0(1);
 }
 if (VAR_25) {
  FUNC_4(VAR_14->wl,
         "FOUND UNSUPPORTED RADIO (Manuf 0x%X, ID 0x%X, Revision %u, Version %u)\n",
         VAR_21, VAR_22, VAR_23, VAR_24);
  return -VAR_13;
 }
 FUNC_5(VAR_14->wl,
  "Found Radio: Manuf 0x%X, ID 0x%X, Revision %u, Version %u\n",
  VAR_21, VAR_22, VAR_23, VAR_24);


 VAR_15->radio_manuf = VAR_21;
 VAR_15->radio_ver = VAR_22;
 VAR_15->radio_rev = VAR_23;

 VAR_15->analog = VAR_18;
 VAR_15->type = VAR_19;
 VAR_15->rev = VAR_20;

 return 0;
}
