
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dev_flags; int duplex; int speed; scalar_t__ link; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct phy_device*) ;

__attribute__((used)) static int FUNC_1(struct phy_device *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3);

 if (VAR_3->dev_flags & VAR_1) {




  if (VAR_3->link) {
   VAR_3->speed = VAR_2;
   VAR_3->duplex = VAR_0;
  }
 }

 return VAR_4;
}
