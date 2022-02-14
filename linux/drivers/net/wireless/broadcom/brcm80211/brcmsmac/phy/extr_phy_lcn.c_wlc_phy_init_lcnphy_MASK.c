
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct brcms_phy_pub {int dummy; } ;
struct brcms_phy_lcnphy {int lcnphy_noise_samples; int lcnphy_rawtempsense; int lcnphy_cal_temper; scalar_t__ lcnphy_cal_counter; } ;
struct TYPE_5__ {struct brcms_phy_lcnphy* pi_lcnphy; } ;
struct brcms_phy {TYPE_4__* sh; TYPE_3__* d11core; int radio_chanspec; TYPE_1__ u; } ;
struct TYPE_8__ {int boardflags; } ;
struct TYPE_7__ {TYPE_2__* bus; } ;
struct TYPE_6__ {int drv_cc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct brcms_phy*,int,int) ;
 int FUNC_2 (int *,int ,int,int) ;
 int FUNC_3 (int *,int ,int,int) ;
 int FUNC_4 (struct brcms_phy*,int,int,int) ;
 int FUNC_5 (struct brcms_phy*,int,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct brcms_phy*,int ) ;
 int FUNC_8 (struct brcms_phy*) ;
 int FUNC_9 (struct brcms_phy*) ;
 int FUNC_10 (struct brcms_phy*,int ) ;
 int FUNC_11 (struct brcms_phy*) ;
 int FUNC_12 (struct brcms_phy*,int ) ;
 int FUNC_13 (struct brcms_phy*,int ) ;
 int FUNC_14 (struct brcms_phy*) ;
 scalar_t__ FUNC_15 (struct brcms_phy*) ;
 int FUNC_16 (struct brcms_phy_pub*) ;
 int FUNC_17 (struct brcms_phy_pub*,int ) ;
 int FUNC_18 (struct brcms_phy*,int,int) ;

void FUNC_19(struct brcms_phy *VAR_6)
{
 struct brcms_phy_lcnphy *VAR_7 = VAR_6->u.pi_lcnphy;

 VAR_7->lcnphy_cal_counter = 0;
 VAR_7->lcnphy_cal_temper = VAR_7->lcnphy_rawtempsense;

 FUNC_5(VAR_6, 0x44a, 0x80);
 FUNC_1(VAR_6, 0x44a, 0x7f);

 FUNC_7(VAR_6, VAR_0);

 FUNC_18(VAR_6, 0x60a, 160);

 FUNC_18(VAR_6, 0x46a, 25);

 FUNC_9(VAR_6);

 FUNC_11(VAR_6);

 if (FUNC_0(VAR_6->radio_chanspec))
  FUNC_16((struct brcms_phy_pub *) VAR_6);

 FUNC_17((struct brcms_phy_pub *) VAR_6, VAR_6->radio_chanspec);

 FUNC_3(&VAR_6->d11core->bus->drv_cc, 0, ~0xf, 0x9);

 FUNC_2(&VAR_6->d11core->bus->drv_cc, 0, 0x0,
        0x03CDDDDD);

 if ((VAR_6->sh->boardflags & VAR_1)
     && FUNC_15(VAR_6))
  FUNC_12(VAR_6, VAR_2);

 FUNC_8(VAR_6);

 FUNC_14(VAR_6);

 FUNC_4(VAR_6, 0x448, (0x1 << 14), (1) << 14);

 FUNC_6(100);
 FUNC_4(VAR_6, 0x448, (0x1 << 14), (0) << 14);

 FUNC_13(VAR_6, VAR_4);
 VAR_7->lcnphy_noise_samples = VAR_3;
 FUNC_10(VAR_6, VAR_5);
}
