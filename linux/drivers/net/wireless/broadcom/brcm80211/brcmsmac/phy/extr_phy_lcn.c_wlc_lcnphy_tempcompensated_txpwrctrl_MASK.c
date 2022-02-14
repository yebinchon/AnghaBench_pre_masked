
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct brcms_phy_lcnphy {int lcnphy_current_index; int lcnphy_tempsense_slope; int lcnphy_measPower; int lcnphy_tempsense_option; int lcnphy_tempcorrx; int lcnphy_bandedge_corr; scalar_t__ lcnphy_rawtempsense; } ;
struct TYPE_4__ {int phy_rev; } ;
struct TYPE_3__ {struct brcms_phy_lcnphy* pi_lcnphy; } ;
struct brcms_phy {scalar_t__ tx_power_min; TYPE_2__ pubpi; TYPE_1__ u; } ;
typedef int s8 ;
typedef int s16 ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct brcms_phy*,int ) ;
 scalar_t__ FUNC_4 (struct brcms_phy*) ;

__attribute__((used)) static s8 FUNC_5(struct brcms_phy *VAR_1)
{
 s8 VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;
 s16 VAR_7, VAR_8, VAR_9;
 bool VAR_10 = 0;
 u16 VAR_11;
 struct brcms_phy_lcnphy *VAR_12 = VAR_1->u.pi_lcnphy;

 if (FUNC_4(VAR_1))
  return VAR_12->lcnphy_current_index;

 VAR_2 = VAR_0;

 if (VAR_12->lcnphy_tempsense_slope == 0)
  return VAR_2;

 VAR_11 = (u16) FUNC_3(VAR_1, 0);
 VAR_8 = FUNC_0(VAR_11);

 if (VAR_1->tx_power_min != 0)
  VAR_3 = (VAR_12->lcnphy_measPower - VAR_1->tx_power_min);
 else
  VAR_3 = 0;

 VAR_7 = FUNC_0(VAR_12->lcnphy_rawtempsense);
 VAR_9 = VAR_7 - VAR_8;
 if (VAR_9 < 0) {
  VAR_10 = 1;
  VAR_9 = -VAR_9;
 }

 VAR_4 = (s8) FUNC_2((u32) (VAR_9 * 192),
        (u32) (VAR_12->
        lcnphy_tempsense_slope
        * 10), 0);
 if (VAR_10)
  VAR_4 = -VAR_4;

 if (VAR_12->lcnphy_tempsense_option == 3
     && FUNC_1(VAR_1->pubpi.phy_rev, 0))
  VAR_4 = 0;
 if (VAR_12->lcnphy_tempcorrx > 31)
  VAR_6 = (s8) (VAR_12->lcnphy_tempcorrx - 64);
 else
  VAR_6 = (s8) VAR_12->lcnphy_tempcorrx;
 if (FUNC_1(VAR_1->pubpi.phy_rev, 1))
  VAR_6 = 4;
 VAR_5 =
  VAR_2 + VAR_3 + VAR_4 - VAR_12->lcnphy_bandedge_corr;
 VAR_5 += VAR_6;

 if (FUNC_1(VAR_1->pubpi.phy_rev, 1))
  VAR_2 = 127;

 if (VAR_5 < 0 || VAR_5 > 126)
  return VAR_2;

 return VAR_5;
}
