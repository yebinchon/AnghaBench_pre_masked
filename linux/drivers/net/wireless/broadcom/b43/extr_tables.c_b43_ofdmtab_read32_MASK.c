
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {struct b43_phy_g* g; } ;
struct b43_wldev {TYPE_1__ phy; } ;
struct b43_phy_g {scalar_t__ ofdmtab_addr_direction; int ofdmtab_addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct b43_wldev*,int ) ;
 int FUNC_1 (struct b43_wldev*,int ,int) ;

u32 FUNC_2(struct b43_wldev *VAR_4, u16 VAR_5, u16 VAR_6)
{
 struct b43_phy_g *VAR_7 = VAR_4->phy.g;
 u32 VAR_8;
 u16 VAR_9;

 VAR_9 = VAR_5 + VAR_6;
 if ((VAR_7->ofdmtab_addr_direction != VAR_0) ||
     (VAR_9 - 1 != VAR_7->ofdmtab_addr)) {

  FUNC_1(VAR_4, VAR_1, VAR_9);
  VAR_7->ofdmtab_addr_direction = VAR_0;
 }
 VAR_7->ofdmtab_addr = VAR_9;
 VAR_8 = FUNC_0(VAR_4, VAR_3);
 VAR_8 <<= 16;
 VAR_8 |= FUNC_0(VAR_4, VAR_2);

 return VAR_8;
}
