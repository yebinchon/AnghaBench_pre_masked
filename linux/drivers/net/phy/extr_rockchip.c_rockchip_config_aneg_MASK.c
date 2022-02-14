
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int mdix; } ;


 int FUNC_0 (struct phy_device*) ;
 int FUNC_1 (struct phy_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct phy_device *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0, VAR_0->mdix);
 if (VAR_1 < 0)
  return VAR_1;

 return FUNC_0(VAR_0);
}
