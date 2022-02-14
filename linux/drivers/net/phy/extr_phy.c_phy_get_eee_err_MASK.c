
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int drv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct phy_device*,int ,int ) ;

int FUNC_1(struct phy_device *VAR_3)
{
 if (!VAR_3->drv)
  return -VAR_0;

 return FUNC_0(VAR_3, VAR_1, VAR_2);
}
