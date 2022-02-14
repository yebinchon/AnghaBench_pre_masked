
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_phy {scalar_t__ type; int rev; int gmode; struct b43_phy_g* g; } ;
struct b43_wldev {struct b43_phy phy; } ;
struct b43_txpower_lo_control {int bbatt_list; int rfatt_list; } ;
struct b43_phy_g {int tx_control; int rfatt; int bbatt; struct b43_txpower_lo_control* lo_control; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct b43_wldev*) ;
 int FUNC_2 (struct b43_wldev*,int ) ;
 int FUNC_3 (struct b43_wldev*,int) ;
 int FUNC_4 (struct b43_wldev*,int *) ;
 int FUNC_5 (struct b43_wldev*,int *) ;
 int FUNC_6 (struct b43_wldev*) ;
 int FUNC_7 (struct b43_wldev*,int *) ;
 int FUNC_8 (struct b43_wldev*,int *) ;

__attribute__((used)) static int FUNC_9(struct b43_wldev *VAR_2)
{
 struct b43_phy *VAR_3 = &VAR_2->phy;
 struct b43_phy_g *VAR_4 = VAR_3->g;
 struct b43_txpower_lo_control *VAR_5 = VAR_4->lo_control;

 FUNC_0(VAR_3->type != VAR_1);

 FUNC_4(VAR_2, &VAR_4->bbatt);
 FUNC_5(VAR_2, &VAR_4->rfatt);
 VAR_4->tx_control = (FUNC_6(VAR_2) << 4);
 FUNC_8(VAR_2, &VAR_5->rfatt_list);
 FUNC_7(VAR_2, &VAR_5->bbatt_list);


 FUNC_2(VAR_2, VAR_0);

 if (VAR_3->rev == 1) {


  VAR_3->gmode = 0;
  FUNC_3(VAR_2, 0);
  FUNC_1(VAR_2);
  VAR_3->gmode = 1;
  FUNC_3(VAR_2, 1);
 }

 return 0;
}
