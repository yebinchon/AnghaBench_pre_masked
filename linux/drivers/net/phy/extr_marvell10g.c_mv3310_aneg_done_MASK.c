
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct phy_device*) ;
 int FUNC_1 (struct phy_device*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct phy_device *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_4, VAR_0, VAR_3 + VAR_1);
 if (VAR_5 < 0)
  return VAR_5;

 if (VAR_5 & VAR_2)
  return 1;

 return FUNC_0(VAR_4);
}
