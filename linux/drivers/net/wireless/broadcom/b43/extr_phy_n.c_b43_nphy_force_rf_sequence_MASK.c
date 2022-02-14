
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43_wldev {int wl; } ;
typedef enum b43_nphy_rf_sequence { ____Placeholder_b43_nphy_rf_sequence } b43_nphy_rf_sequence ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int const FUNC_2 (struct b43_wldev*,int ) ;
 int FUNC_3 (struct b43_wldev*,int ,int const) ;
 int FUNC_4 (struct b43_wldev*,int ,int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct b43_wldev *VAR_5,
           enum b43_nphy_rf_sequence VAR_6)
{
 static const u16 VAR_7[] = {
  [132] = 138,
  [131] = 137,
  [133] = 139,
  [130] = 136,
  [129] = 135,
  [128] = 134,
 };
 int VAR_8;
 u16 VAR_9 = FUNC_2(VAR_5, VAR_0);

 FUNC_1(VAR_6 >= FUNC_0(VAR_7));

 FUNC_3(VAR_5, VAR_0,
      VAR_1 | VAR_2);
 FUNC_3(VAR_5, VAR_4, VAR_7[VAR_6]);
 for (VAR_8 = 0; VAR_8 < 200; VAR_8++) {
  if (!(FUNC_2(VAR_5, VAR_3) & VAR_7[VAR_6]))
   goto ok;
  FUNC_6(1);
 }
 FUNC_5(VAR_5->wl, "RF sequence status timeout\n");
ok:
 FUNC_4(VAR_5, VAR_0, VAR_9);
}
