
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dev_flags; int speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct phy_device*) ;

__attribute__((used)) static int FUNC_1(struct phy_device *VAR_2)
{

 if (VAR_2->dev_flags & VAR_0) {
  VAR_2->speed = VAR_1;
  return 0;
 }

 return FUNC_0(VAR_2);
}
