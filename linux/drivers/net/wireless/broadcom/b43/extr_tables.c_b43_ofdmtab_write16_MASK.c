
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {struct b43_phy_g* g; } ;
struct b43_wldev {TYPE_1__ phy; } ;
struct b43_phy_g {scalar_t__ ofdmtab_addr_direction; int ofdmtab_addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct b43_wldev*,int ,int) ;

void FUNC_1(struct b43_wldev *VAR_3, u16 VAR_4,
    u16 VAR_5, u16 VAR_6)
{
 struct b43_phy_g *VAR_7 = VAR_3->phy.g;
 u16 VAR_8;

 VAR_8 = VAR_4 + VAR_5;
 if ((VAR_7->ofdmtab_addr_direction != VAR_0) ||
     (VAR_8 - 1 != VAR_7->ofdmtab_addr)) {

  FUNC_0(VAR_3, VAR_1, VAR_8);
  VAR_7->ofdmtab_addr_direction = VAR_0;
 }
 VAR_7->ofdmtab_addr = VAR_8;
 FUNC_0(VAR_3, VAR_2, VAR_6);
}
