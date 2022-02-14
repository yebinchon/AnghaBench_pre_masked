
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct phy_device {int interface; } ;






 int VAR_0 ;
 int FUNC_0 (struct phy_device*,int,int,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct phy_device *VAR_1)
{
 u16 VAR_2;




 switch (VAR_1->interface) {
 case 131:
 case 129:
  VAR_2 = 0;
  break;
 case 130:
 case 128:
  VAR_2 = VAR_0;
  break;
 default:
  return 0;
 }

 return FUNC_0(VAR_1, 0xd08, 0x11, VAR_0, VAR_2);
}
