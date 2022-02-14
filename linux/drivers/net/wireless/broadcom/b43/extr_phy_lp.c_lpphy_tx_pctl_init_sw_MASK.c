
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpphy_tx_gains {int gm; int pad; int pga; scalar_t__ dac; } ;
struct b43_wldev {int wl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct b43_wldev*,int) ;
 int FUNC_2 (struct b43_wldev*,struct lpphy_tx_gains) ;

__attribute__((used)) static void FUNC_3(struct b43_wldev *VAR_1)
{
 struct lpphy_tx_gains VAR_2;

 if (FUNC_0(VAR_1->wl) == VAR_0) {
  VAR_2.gm = 4;
  VAR_2.pad = 12;
  VAR_2.pga = 12;
  VAR_2.dac = 0;
 } else {
  VAR_2.gm = 7;
  VAR_2.pad = 14;
  VAR_2.pga = 15;
  VAR_2.dac = 0;
 }
 FUNC_2(VAR_1, VAR_2);
 FUNC_1(VAR_1, 150);
}
