
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int mdix_ctrl; } ;


 int VAR_0 ;
 int FUNC_0 (struct phy_device*) ;
 int FUNC_1 (struct phy_device*) ;
 int FUNC_2 (struct phy_device*) ;
 int FUNC_3 (struct phy_device*,int,int) ;
 int FUNC_4 (struct phy_device*,int ) ;
 int FUNC_5 (struct phy_device*,int ) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (struct phy_device*) ;

__attribute__((used)) static int FUNC_8(struct phy_device *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 < 0)
  return VAR_2;

 FUNC_6(500);

 VAR_2 = FUNC_4(VAR_1, VAR_0);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_2 = FUNC_5(VAR_1, VAR_1->mdix_ctrl);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_2 = FUNC_3(VAR_1, 1, 8);
 if (VAR_2 < 0)
  return VAR_2;

 if (FUNC_7(VAR_1)) {
  VAR_2 = FUNC_1(VAR_1);
  if (VAR_2 < 0)
   return VAR_2;
 }

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 < 0)
  return VAR_2;

 return FUNC_2(VAR_1);
}
