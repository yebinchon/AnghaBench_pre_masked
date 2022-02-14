
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tusb1210 {int ulpi; } ;
struct phy {int dummy; } ;
typedef enum phy_mode { ____Placeholder_phy_mode } phy_mode ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct tusb1210* FUNC_0 (struct phy*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct phy *VAR_6, enum phy_mode VAR_7, int VAR_8)
{
 struct tusb1210 *VAR_9 = FUNC_0(VAR_6);
 int VAR_10;

 VAR_10 = FUNC_1(VAR_9->ulpi, VAR_0);
 if (VAR_10 < 0)
  return VAR_10;

 switch (VAR_7) {
 case 128:
  VAR_10 |= (VAR_4
   | VAR_5
   | VAR_2
   | VAR_1);
  FUNC_2(VAR_9->ulpi, VAR_0, VAR_10);
  VAR_10 |= VAR_3;
  break;
 case 129:
  VAR_10 &= ~(VAR_3
    | VAR_2
    | VAR_1);
  FUNC_2(VAR_9->ulpi, VAR_0, VAR_10);
  VAR_10 &= ~VAR_4;
  break;
 default:

  return 0;
 }

 return FUNC_2(VAR_9->ulpi, VAR_0, VAR_10);
}
