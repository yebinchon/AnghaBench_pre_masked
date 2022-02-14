
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct phy_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int FUNC_1 (struct phy_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct phy_device *VAR_5, u8 *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_1(VAR_5, VAR_2);
 if (VAR_7 < 0)
  return VAR_7;

 if (!(VAR_7 & VAR_3)) {
  *VAR_6 = VAR_1;
  return 0;
 }

 VAR_7 = FUNC_0(VAR_4, VAR_7);

 switch (VAR_7) {
 case 131:
  *VAR_6 = 0;
  break;
 case 130:
  *VAR_6 = 10;
  break;
 case 129:
  *VAR_6 = 20;
  break;
 case 128:
  *VAR_6 = 40;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
