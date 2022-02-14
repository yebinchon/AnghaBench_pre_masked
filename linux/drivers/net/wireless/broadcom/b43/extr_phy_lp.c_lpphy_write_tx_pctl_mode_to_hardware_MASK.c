
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {struct b43_phy_lp* lp; } ;
struct b43_wldev {TYPE_1__ phy; } ;
struct b43_phy_lp {int txpctl_mode; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct b43_wldev*,int ,int,int ) ;

__attribute__((used)) static void FUNC_2(struct b43_wldev *VAR_5)
{
 struct b43_phy_lp *VAR_6 = VAR_5->phy.lp;
 u16 VAR_7;

 switch (VAR_6->txpctl_mode) {
 case 129:
  VAR_7 = VAR_3;
  break;
 case 130:
  VAR_7 = VAR_2;
  break;
 case 128:
  VAR_7 = VAR_4;
  break;
 default:
  VAR_7 = 0;
  FUNC_0(1);
 }
 FUNC_1(VAR_5, VAR_0,
   ~VAR_1 & 0xFFFF, VAR_7);
}
