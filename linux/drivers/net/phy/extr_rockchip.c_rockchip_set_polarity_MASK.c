
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct phy_device*,int ) ;
 int FUNC_1 (struct phy_device*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct phy_device *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6, VAR_7;


 VAR_5 = FUNC_0(VAR_3, VAR_1);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 &= ~VAR_0;
 VAR_7 = VAR_5;
 switch (VAR_4) {
 case 131:
  VAR_7 &= ~VAR_2;
  break;
 case 128:
  VAR_7 |= VAR_2;
  break;
 case 130:
 case 129:
 default:
  return 0;
 }

 if (VAR_7 != VAR_5) {

  VAR_6 = FUNC_1(VAR_3, VAR_1, VAR_7);
  if (VAR_6)
   return VAR_6;
 }

 return 0;
}
