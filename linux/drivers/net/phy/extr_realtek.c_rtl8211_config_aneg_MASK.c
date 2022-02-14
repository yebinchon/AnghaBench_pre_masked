
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ speed; scalar_t__ autoneg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct phy_device*) ;
 int FUNC_1 (struct phy_device*,int,int) ;

__attribute__((used)) static int FUNC_2(struct phy_device *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 < 0)
  return VAR_3;




 if (VAR_2->speed == VAR_1 && VAR_2->autoneg == VAR_0) {
  FUNC_1(VAR_2, 0x17, 0x2138);
  FUNC_1(VAR_2, 0x0e, 0x0260);
 } else {
  FUNC_1(VAR_2, 0x17, 0x2108);
  FUNC_1(VAR_2, 0x0e, 0x0000);
 }

 return 0;
}
