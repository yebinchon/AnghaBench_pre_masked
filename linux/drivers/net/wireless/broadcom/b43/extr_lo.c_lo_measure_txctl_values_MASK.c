
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct b43_phy {int rev; int radio_ver; int radio_rev; struct b43_phy_g* g; } ;
struct b43_wldev {struct b43_phy phy; } ;
struct b43_txpower_lo_control {int tx_bias; int tx_magn; int txctl_measured_time; } ;
struct b43_phy_g {int max_lb_gain; struct b43_txpower_lo_control* lo_control; } ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct b43_wldev*,int) ;
 int FUNC_3 (struct b43_wldev*,int,int) ;
 int FUNC_4 (struct b43_wldev*,int,int,int) ;
 int FUNC_5 (struct b43_wldev*,int) ;
 int FUNC_6 (struct b43_wldev*,int,int) ;
 int FUNC_7 (int,int ,int) ;
 int FUNC_8 (struct b43_phy*) ;
 scalar_t__ FUNC_9 (struct b43_phy*) ;
 int VAR_0 ;
 int FUNC_10 (struct b43_wldev*,int ,int,int) ;
 int FUNC_11 (struct b43_wldev*,int*,int *) ;

__attribute__((used)) static void FUNC_12(struct b43_wldev *VAR_1)
{
 struct b43_phy *VAR_2 = &VAR_1->phy;
 struct b43_phy_g *VAR_3 = VAR_2->g;
 struct b43_txpower_lo_control *VAR_4 = VAR_3->lo_control;
 u16 VAR_5, VAR_6;
 u16 VAR_7, VAR_8;
 u16 VAR_9;

 static const u8 VAR_10[] = {
  0x09, 0x08, 0x0A, 0x01, 0x00,
  0x02, 0x05, 0x04, 0x06,
 };
 static const u8 VAR_11[] = {
  0x70, 0x40,
 };

 if (!FUNC_8(VAR_2)) {
  VAR_9 = 6;
  VAR_7 = 2;
  VAR_8 = 0;
 } else {
  int VAR_12;

  VAR_7 = 0;
  VAR_12 = VAR_3->max_lb_gain / 2;
  if (VAR_12 > 10) {
   VAR_9 = 0;
   VAR_8 = FUNC_1(10 - VAR_12) / 6;
   VAR_8 = FUNC_7(VAR_8, 0, 15);
  } else {
   int VAR_13;
   int VAR_14;

   VAR_8 = 0;
   VAR_13 = 0x24;
   if ((VAR_2->rev >= 2) &&
       (VAR_2->radio_ver == 0x2050) && (VAR_2->radio_rev == 8))
    VAR_13 = 0x3C;
   VAR_14 = VAR_12;
   if ((10 - VAR_12) < VAR_13)
    VAR_14 = (10 - VAR_12);
   if (VAR_14 < 0)
    VAR_14 += 6;
   else
    VAR_14 += 3;
   VAR_13 /= 4;
   VAR_14 /= 4;
   if (VAR_14 >= VAR_13)
    VAR_9 = VAR_13;
   else
    VAR_9 = VAR_14;
  }
 }
 FUNC_4(VAR_1, 0x43, 0xFFF0, VAR_9);
 FUNC_2(VAR_1, 2);

 VAR_5 = FUNC_11(VAR_1, &VAR_6, ((void*)0));
 VAR_6 = ~VAR_6;
 FUNC_3(VAR_1, VAR_5, VAR_6);

 if (FUNC_9(VAR_2)) {
  int VAR_15, VAR_16;
  int VAR_17;
  int VAR_18 = 0xFFFF;
  u8 VAR_19, VAR_20;

  for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_11); VAR_15++) {
   VAR_19 = VAR_11[VAR_15];
   FUNC_4(VAR_1, 0x52, 0xFF0F, VAR_19);
   for (VAR_16 = 0; VAR_16 < FUNC_0(VAR_10); VAR_16++) {
    VAR_20 = VAR_10[VAR_16];
    FUNC_4(VAR_1, 0x52, 0xFFF0, VAR_20);
    VAR_17 =
        FUNC_10(VAR_1, 0, VAR_8,
          VAR_7);
    if (VAR_17 < VAR_18) {
     VAR_4->tx_bias = VAR_20;
     VAR_4->tx_magn = VAR_19;
     VAR_18 = VAR_17;
    }
    if (VAR_4->tx_bias == 0)
     break;
   }
   FUNC_6(VAR_1, 0x52,
       (FUNC_5(VAR_1, 0x52)
        & 0xFF00) | VAR_4->tx_bias | VAR_4->
       tx_magn);
  }
 } else {
  VAR_4->tx_magn = 0;
  VAR_4->tx_bias = 0;
  FUNC_3(VAR_1, 0x52, 0xFFF0);
 }
 VAR_4->txctl_measured_time = VAR_0;
}
