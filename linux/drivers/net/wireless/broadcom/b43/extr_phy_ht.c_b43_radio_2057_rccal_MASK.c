
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43_wldev {int wl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct b43_wldev*,int ,int) ;
 int FUNC_1 (struct b43_wldev*,int ,int,int,int,int) ;
 int FUNC_2 (struct b43_wldev*,int ,int const) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void FUNC_4(struct b43_wldev *VAR_5)
{
 static const u16 VAR_6[3][2] = {
  { 0x61, 0xE9 }, { 0x69, 0xD5 }, { 0x73, 0x99 },
 };
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < 3; VAR_7++) {
  FUNC_2(VAR_5, VAR_1, VAR_6[VAR_7][0]);
  FUNC_2(VAR_5, VAR_4, 0x6E);
  FUNC_2(VAR_5, VAR_3, VAR_6[VAR_7][1]);


  FUNC_2(VAR_5, VAR_2, 0x55);


  if (!FUNC_1(VAR_5, VAR_0, 2, 2,
       500, 5000000))
   FUNC_3(VAR_5->wl, "Radio 0x2059 rccal timeout\n");


  FUNC_2(VAR_5, VAR_2, 0x15);
 }

 FUNC_0(VAR_5, VAR_1, ~0x1);
}
