
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct lcnphy_txgains {int gm_gain; int pga_gain; int pad_gain; int dac_gain; } ;
struct brcms_phy {int dummy; } ;


 int FUNC_0 (struct brcms_phy*,int,int,int) ;
 int FUNC_1 (struct brcms_phy*) ;
 int FUNC_2 (struct brcms_phy*) ;
 int FUNC_3 (struct brcms_phy*,int ) ;

__attribute__((used)) static void FUNC_4(struct brcms_phy *VAR_0,
       struct lcnphy_txgains *VAR_1)
{
 u16 VAR_2 = FUNC_2(VAR_0);

 FUNC_0(
  VAR_0, 0x4b5,
  (0xffff << 0),
  ((VAR_1->gm_gain) |
   (VAR_1->pga_gain << 8)) <<
  0);
 FUNC_0(VAR_0, 0x4fb,
      (0x7fff << 0),
      ((VAR_1->pad_gain) | (VAR_2 << 8)) << 0);

 FUNC_0(
  VAR_0, 0x4fc,
  (0xffff << 0),
  ((VAR_1->gm_gain) |
   (VAR_1->pga_gain << 8)) <<
  0);
 FUNC_0(VAR_0, 0x4fd,
      (0x7fff << 0),
      ((VAR_1->pad_gain) | (VAR_2 << 8)) << 0);

 FUNC_3(VAR_0, VAR_1->dac_gain);

 FUNC_1(VAR_0);
}
