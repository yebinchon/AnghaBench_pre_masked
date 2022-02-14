
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
typedef int u16 ;
struct brcms_phy_pub {int dummy; } ;
struct brcms_phy_lcnphy {int lcnphy_cal_counter; int lcnphy_cal_temper; } ;
struct TYPE_2__ {struct brcms_phy_lcnphy* pi_lcnphy; } ;
struct brcms_phy {TYPE_1__ u; } ;



 int FUNC_0 (int ) ;




 int FUNC_1 (struct brcms_phy*) ;
 int FUNC_2 (struct brcms_phy*) ;
 int FUNC_3 (struct brcms_phy*) ;
 int FUNC_4 (struct brcms_phy*,int ) ;
 int FUNC_5 (struct brcms_phy*) ;
 int FUNC_6 (struct brcms_phy_pub*) ;

void FUNC_7(struct brcms_phy *VAR_0, uint VAR_1)
{
 u16 VAR_2;
 int VAR_3, VAR_4, VAR_5;
 struct brcms_phy_lcnphy *VAR_6 = VAR_0->u.pi_lcnphy;

 switch (VAR_1) {
 case 130:
  break;
 case 131:
  FUNC_3(VAR_0);
  break;
 case 129:
  FUNC_3(VAR_0);
  break;
 case 128:
  if (FUNC_5(VAR_0)) {
   VAR_2 = FUNC_4(VAR_0, 0);
   VAR_3 = FUNC_0(VAR_2);
   VAR_4 = FUNC_0(VAR_6->lcnphy_cal_temper);
   VAR_5 = VAR_3 - VAR_4;
   if ((VAR_6->lcnphy_cal_counter > 90) ||
       (VAR_5 > 60) || (VAR_5 < -60)) {
    FUNC_2(VAR_0);
    FUNC_1(VAR_0);
    VAR_6->lcnphy_cal_temper = VAR_2;
    VAR_6->lcnphy_cal_counter = 0;
   } else
    VAR_6->lcnphy_cal_counter++;
  }
  break;
 case 132:
  if (FUNC_5(VAR_0))
   FUNC_6(
    (struct brcms_phy_pub *) VAR_0);
  break;
 }
}
