
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcms_phy_lcnphy {scalar_t__ lcnphy_spurmod; } ;
struct TYPE_2__ {struct brcms_phy_lcnphy* pi_lcnphy; } ;
struct brcms_phy {scalar_t__ phy_tx_tone_freq; TYPE_1__ u; } ;
typedef int s16 ;


 int VAR_0 ;
 int FUNC_0 (struct brcms_phy*,int ,int) ;
 int FUNC_1 (struct brcms_phy*,int,int,int) ;
 int FUNC_2 (struct brcms_phy*,int) ;
 int FUNC_3 (struct brcms_phy*,int) ;
 int FUNC_4 (struct brcms_phy*,int ) ;
 int FUNC_5 (struct brcms_phy*,int) ;
 int FUNC_6 (struct brcms_phy*,int,int) ;

void FUNC_7(struct brcms_phy *VAR_1)
{
 s16 VAR_2;
 struct brcms_phy_lcnphy *VAR_3 = VAR_1->u.pi_lcnphy;

 VAR_1->phy_tx_tone_freq = 0;
 if (VAR_3->lcnphy_spurmod) {
  FUNC_6(VAR_1, 0x942, 0x7);
  FUNC_6(VAR_1, 0x93b, 0x2017);
  FUNC_6(VAR_1, 0x93c, 0x27c5);
  FUNC_5(VAR_1, 1);
 }

 VAR_2 = FUNC_2(VAR_1, 0x644);
 if (VAR_2 & (0x1 << 0)) {
  FUNC_4(VAR_1, 0);
  FUNC_1(VAR_1, 0x63f, (0x1 << 1), 1 << 1);
 } else if (VAR_2 & (0x1 << 1))
  FUNC_1(VAR_1, 0x453, (0x1 << 15), 0 << 15);

 FUNC_1(VAR_1, 0x6d6, (0x3 << 0), 1 << 0);

 FUNC_1(VAR_1, 0x6da, (0x1 << 3), 0 << 3);

 FUNC_1(VAR_1, 0x6da, (0x1 << 7), 0 << 7);

 FUNC_0(VAR_1, VAR_0, 0xFFF9);

 FUNC_3(VAR_1, 0);
}
