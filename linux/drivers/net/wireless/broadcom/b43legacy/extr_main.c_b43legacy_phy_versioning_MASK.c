
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct b43legacy_phy {int radio_manuf; int radio_ver; int radio_rev; int analog; int type; int rev; } ;
struct b43legacy_wldev {int wl; TYPE_2__* dev; struct b43legacy_phy phy; } ;
struct TYPE_4__ {TYPE_1__* bus; } ;
struct TYPE_3__ {int chip_id; int chip_rev; } ;


 int FUNC_0 (int) ;
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
 int FUNC_1 (struct b43legacy_wldev*,int ) ;
 int FUNC_2 (struct b43legacy_wldev*,int ,int ) ;
 int FUNC_3 (int ,char*,int,int,int) ;
 int FUNC_4 (int ,char*,int,int,int) ;

__attribute__((used)) static int FUNC_5(struct b43legacy_wldev *VAR_11)
{
 struct b43legacy_phy *VAR_12 = &VAR_11->phy;
 u32 VAR_13;
 u8 VAR_14;
 u8 VAR_15;
 u8 VAR_16;
 u16 VAR_17;
 u16 VAR_18;
 u16 VAR_19;
 int VAR_20 = 0;


 VAR_13 = FUNC_1(VAR_11, VAR_0);
 VAR_14 = (VAR_13 & VAR_4)
        >> VAR_5;
 VAR_15 = (VAR_13 & VAR_6) >> VAR_7;
 VAR_16 = (VAR_13 & VAR_8);
 switch (VAR_15) {
 case 129:
  if (VAR_16 != 2 && VAR_16 != 4
      && VAR_16 != 6 && VAR_16 != 7)
   VAR_20 = 1;
  break;
 case 128:
  if (VAR_16 > 8)
   VAR_20 = 1;
  break;
 default:
  VAR_20 = 1;
 }
 if (VAR_20) {
  FUNC_4(VAR_11->wl, "FOUND UNSUPPORTED PHY "
         "(Analog %u, Type %u, Revision %u)\n",
         VAR_14, VAR_15, VAR_16);
  return -VAR_10;
 }
 FUNC_3(VAR_11->wl, "Found PHY: Analog %u, Type %u, Revision %u\n",
        VAR_14, VAR_15, VAR_16);



 if (VAR_11->dev->bus->chip_id == 0x4317) {
  if (VAR_11->dev->bus->chip_rev == 0)
   VAR_13 = 0x3205017F;
  else if (VAR_11->dev->bus->chip_rev == 1)
   VAR_13 = 0x4205017F;
  else
   VAR_13 = 0x5205017F;
 } else {
  FUNC_2(VAR_11, VAR_1,
      VAR_9);
  VAR_13 = FUNC_1(VAR_11, VAR_2);
  VAR_13 <<= 16;
  FUNC_2(VAR_11, VAR_1,
      VAR_9);
  VAR_13 |= FUNC_1(VAR_11, VAR_3);
 }
 VAR_17 = (VAR_13 & 0x00000FFF);
 VAR_18 = (VAR_13 & 0x0FFFF000) >> 12;
 VAR_19 = (VAR_13 & 0xF0000000) >> 28;
 switch (VAR_15) {
 case 129:
  if ((VAR_18 & 0xFFF0) != 0x2050)
   VAR_20 = 1;
  break;
 case 128:
  if (VAR_18 != 0x2050)
   VAR_20 = 1;
  break;
 default:
  FUNC_0(1);
 }
 if (VAR_20) {
  FUNC_4(VAR_11->wl, "FOUND UNSUPPORTED RADIO "
         "(Manuf 0x%X, Version 0x%X, Revision %u)\n",
         VAR_17, VAR_18, VAR_19);
  return -VAR_10;
 }
 FUNC_3(VAR_11->wl, "Found Radio: Manuf 0x%X, Version 0x%X,"
       " Revision %u\n", VAR_17, VAR_18, VAR_19);


 VAR_12->radio_manuf = VAR_17;
 VAR_12->radio_ver = VAR_18;
 VAR_12->radio_rev = VAR_19;

 VAR_12->analog = VAR_14;
 VAR_12->type = VAR_15;
 VAR_12->rev = VAR_16;

 return 0;
}
