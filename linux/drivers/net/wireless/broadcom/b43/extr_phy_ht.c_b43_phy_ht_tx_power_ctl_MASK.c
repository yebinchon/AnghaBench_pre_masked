
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {struct b43_phy_ht* ht; } ;
struct b43_wldev {int wl; TYPE_1__ phy; } ;
struct b43_phy_ht {int* tx_pwr_idx; int tx_pwr_ctl; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct b43_wldev*,int const,int) ;
 int FUNC_2 (struct b43_wldev*,int const) ;
 int FUNC_3 (struct b43_wldev*,int const,int) ;
 int FUNC_4 (struct b43_wldev*,int const,int) ;

__attribute__((used)) static void FUNC_5(struct b43_wldev *VAR_5, bool VAR_6)
{
 struct b43_phy_ht *VAR_7 = VAR_5->phy.ht;
 u16 VAR_8 = VAR_0 |
        VAR_1 |
        VAR_3;
 static const u16 VAR_9[3] = { 133,
      132,
      131 };
 static const u16 VAR_10[3] = { 130,
         129,
         128 };
 int VAR_11;

 if (!VAR_6) {
  if (FUNC_2(VAR_5, 133) & VAR_8) {

   for (VAR_11 = 0; VAR_11 < 3; VAR_11++)
    VAR_7->tx_pwr_idx[VAR_11] =
     FUNC_2(VAR_5, VAR_10[VAR_11]);
  }
  FUNC_1(VAR_5, 133, ~VAR_8);
 } else {
  FUNC_3(VAR_5, 133, VAR_8);

  if (FUNC_0(VAR_5->wl) == VAR_4) {
   for (VAR_11 = 0; VAR_11 < 3; VAR_11++)
    FUNC_4(VAR_5, VAR_9[VAR_11], 0x32);
  }

  for (VAR_11 = 0; VAR_11 < 3; VAR_11++)
   if (VAR_7->tx_pwr_idx[VAR_11] <=
       VAR_2)
    FUNC_4(VAR_5, VAR_9[VAR_11],
           VAR_7->tx_pwr_idx[VAR_11]);
 }

 VAR_7->tx_pwr_ctl = VAR_6;
}
