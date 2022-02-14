
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct lcnphy_txgains {int dac_gain; int gm_gain; int pga_gain; int pad_gain; } ;
struct brcms_phy {int dummy; } ;


 int FUNC_0 (struct brcms_phy*,int) ;

__attribute__((used)) static void
FUNC_1(struct brcms_phy *VAR_0, struct lcnphy_txgains *VAR_1)
{
 u16 VAR_2, VAR_3, VAR_4;

 VAR_2 = FUNC_0(VAR_0, 0x439) >> 0;
 VAR_1->dac_gain = (VAR_2 & 0x380) >> 7;

 VAR_3 = (FUNC_0(VAR_0, 0x4b5) & (0xffff << 0)) >> 0;
 VAR_4 = (FUNC_0(VAR_0, 0x4fb) & (0x7fff << 0)) >> 0;

 VAR_1->gm_gain = VAR_3 & 0xff;
 VAR_1->pga_gain = (VAR_3 >> 8) & 0xff;
 VAR_1->pad_gain = VAR_4 & 0xff;
}
