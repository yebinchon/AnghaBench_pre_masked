
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ interface; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct phy_device*) ;

__attribute__((used)) static int FUNC_1(struct phy_device *VAR_1)
{
 int VAR_2 = 0;

 if (VAR_1->interface == VAR_0)
  VAR_2 = FUNC_0(VAR_1);

 if (VAR_2 < 0)
  return VAR_2;

 return 0;
}
