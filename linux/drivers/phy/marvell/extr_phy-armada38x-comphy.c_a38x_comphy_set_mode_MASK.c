
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy {int dummy; } ;
struct a38x_comphy_lane {int dummy; } ;
typedef enum phy_mode { ____Placeholder_phy_mode } phy_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;



 int VAR_6 ;
 int FUNC_0 (struct a38x_comphy_lane*,int ,int,int) ;
 int FUNC_1 (struct a38x_comphy_lane*,unsigned int,unsigned int) ;
 struct a38x_comphy_lane* FUNC_2 (struct phy*) ;

__attribute__((used)) static int FUNC_3(struct phy *VAR_7, enum phy_mode VAR_8, int VAR_9)
{
 struct a38x_comphy_lane *VAR_10 = FUNC_2(VAR_7);
 unsigned int VAR_11;

 if (VAR_8 != VAR_6)
  return -VAR_3;

 switch (VAR_9) {
 case 128:
 case 130:
  VAR_11 = VAR_4;
  break;

 case 129:
  VAR_11 = VAR_5;
  break;

 default:
  return -VAR_3;
 }

 FUNC_1(VAR_10, VAR_11, VAR_11);

 return FUNC_0(VAR_10, VAR_0,
    VAR_2 |
    VAR_1,
    VAR_2 |
    VAR_1);
}
