
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int advertising; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct phy_device*,int) ;

int FUNC_2(struct phy_device *VAR_2)
{
 int VAR_3 = FUNC_1(VAR_2, 1);

 if (VAR_3 == VAR_1)
  return -VAR_0;

 return FUNC_0(VAR_3, VAR_2->advertising);
}
