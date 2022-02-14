
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ interface; int speed; scalar_t__ link; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;






__attribute__((used)) static void FUNC_0(struct phy_device *VAR_3)
{
 if ((VAR_3->interface == VAR_2 ||
      VAR_3->interface == VAR_1 ||
      VAR_3->interface == VAR_0) && VAR_3->link) {






  switch (VAR_3->speed) {
  case 129:
   VAR_3->interface = VAR_0;
   break;
  case 128:
   VAR_3->interface = VAR_1;
   break;
  case 130:
  case 131:
  case 132:
   VAR_3->interface = VAR_2;
   break;
  default:
   break;
  }
 }
}
