
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct phy_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct phy_device*,int ) ;
 int FUNC_1 (struct phy_device*,int ,int) ;
 int FUNC_2 (struct phy_device*,int ) ;
 int FUNC_3 (struct phy_device*,int ,int) ;

int FUNC_4(struct phy_device *VAR_10, u8 VAR_11)
{
 int VAR_12 = 0, VAR_13 = 0;


 if (VAR_11 - VAR_3 >
     VAR_2 &&
     VAR_11 != 128) {
  return -VAR_6;
 }

 VAR_12 = FUNC_0(VAR_10, VAR_8);
 if (VAR_12 < 0)
  return VAR_12;


 VAR_12 |= VAR_7;

 if (VAR_11 == VAR_5) {
  VAR_12 &= ~VAR_9;
  return FUNC_1(VAR_10,
         VAR_8,
         VAR_12);
 } else {
  VAR_12 |= VAR_9;
  VAR_13 = FUNC_1(VAR_10,
        VAR_8,
        VAR_12);
  if (VAR_13 < 0)
   return VAR_13;
 }

 VAR_12 = FUNC_2(VAR_10, VAR_0);
 VAR_12 &= ~(VAR_2 <<
   VAR_4 |
   VAR_1);

 switch (VAR_11) {
 case 1:
  VAR_12 |= VAR_1;
  break;
 case 128:
  VAR_12 |= 1 << VAR_4;
  break;
 default:
  VAR_12 |= (VAR_11 - VAR_3) <<
   VAR_4;
  break;
 }

 return FUNC_3(VAR_10, VAR_0, VAR_12);
}
