
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43_phy {int radio_rev; } ;
struct b43_wldev {int wl; struct b43_phy phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct b43_wldev*,int ,int) ;
 int FUNC_1 (struct b43_wldev*,int ) ;
 int FUNC_2 (struct b43_wldev*,int ,int,int,int,int) ;
 int FUNC_3 (struct b43_wldev*,int ,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static u16 FUNC_7(struct b43_wldev *VAR_6)
{
 struct b43_phy *VAR_7 = &VAR_6->phy;
 bool VAR_8 = (VAR_7->radio_rev == 3 || VAR_7->radio_rev == 4 ||
   VAR_7->radio_rev == 6);
 u16 VAR_9;


 if (VAR_8) {
  FUNC_3(VAR_6, VAR_1, 0x61);
  FUNC_3(VAR_6, VAR_3, 0xC0);
 } else {
  FUNC_3(VAR_6, VAR_5, 0x61);
  FUNC_3(VAR_6, VAR_3, 0xE9);
 }
 FUNC_3(VAR_6, VAR_4, 0x6E);


 FUNC_3(VAR_6, VAR_2, 0x55);
 if (!FUNC_2(VAR_6, VAR_0, 2, 2, 500,
      5000000))
  FUNC_4(VAR_6->wl, "Radio 0x2057 rccal timeout\n");
 FUNC_6(35, 70);
 FUNC_3(VAR_6, VAR_2, 0x15);
 FUNC_6(70, 140);


 if (VAR_8) {
  FUNC_3(VAR_6, VAR_1, 0x69);
  FUNC_3(VAR_6, VAR_3, 0xB0);
 } else {
  FUNC_3(VAR_6, VAR_5, 0x69);
  FUNC_3(VAR_6, VAR_3, 0xD5);
 }
 FUNC_3(VAR_6, VAR_4, 0x6E);


 FUNC_6(35, 70);
 FUNC_3(VAR_6, VAR_2, 0x55);
 FUNC_6(70, 140);
 if (!FUNC_2(VAR_6, VAR_0, 2, 2, 500,
      5000000))
  FUNC_4(VAR_6->wl, "Radio 0x2057 rccal timeout\n");
 FUNC_6(35, 70);
 FUNC_3(VAR_6, VAR_2, 0x15);
 FUNC_6(70, 140);


 if (VAR_8) {
  FUNC_3(VAR_6, VAR_1, 0x73);
  FUNC_3(VAR_6, VAR_4, 0x28);
  FUNC_3(VAR_6, VAR_3, 0xB0);
 } else {
  FUNC_3(VAR_6, VAR_5, 0x73);
  FUNC_3(VAR_6, VAR_4, 0x6E);
  FUNC_3(VAR_6, VAR_3, 0x99);
 }


 FUNC_6(35, 70);
 FUNC_3(VAR_6, VAR_2, 0x55);
 FUNC_6(70, 140);
 if (!FUNC_2(VAR_6, VAR_0, 2, 2, 500,
      5000000)) {
  FUNC_5(VAR_6->wl, "Radio 0x2057 rcal timeout\n");
  return 0;
 }
 VAR_9 = FUNC_1(VAR_6, VAR_0);
 FUNC_6(35, 70);
 FUNC_3(VAR_6, VAR_2, 0x15);
 FUNC_6(70, 140);

 if (VAR_8)
  FUNC_0(VAR_6, VAR_1, ~0x1);
 else
  FUNC_0(VAR_6, VAR_5, ~0x1);

 return VAR_9;
}
