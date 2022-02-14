
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct lpphy_tx_gain_table_entry {int pad; int pga; int gm; int bb_mult; int dac; } ;
struct TYPE_2__ {int rev; } ;
struct b43_wldev {int wl; TYPE_1__ phy; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct b43_wldev*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct b43_wldev *VAR_1, int VAR_2,
    struct lpphy_tx_gain_table_entry VAR_3)
{
 u32 VAR_4;

 FUNC_1(VAR_1->phy.rev < 2);

 VAR_4 = VAR_3.pad << 16;
 VAR_4 |= VAR_3.pga << 8;
 VAR_4 |= VAR_3.gm;
 if (VAR_1->phy.rev >= 3) {
  if (FUNC_2(VAR_1->wl) == VAR_0)
   VAR_4 |= 0x10 << 24;
  else
   VAR_4 |= 0x70 << 24;
 } else {
  if (FUNC_2(VAR_1->wl) == VAR_0)
   VAR_4 |= 0x14 << 24;
  else
   VAR_4 |= 0x7F << 24;
 }
 FUNC_3(VAR_1, FUNC_0(7, 0xC0 + VAR_2), VAR_4);
 VAR_4 = VAR_3.bb_mult << 20;
 VAR_4 |= VAR_3.dac << 28;
 FUNC_3(VAR_1, FUNC_0(7, 0x140 + VAR_2), VAR_4);
}
