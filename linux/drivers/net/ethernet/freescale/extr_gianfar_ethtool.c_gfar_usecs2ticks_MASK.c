
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int speed; } ;
struct net_device {struct phy_device* phydev; } ;
struct gfar_private {struct net_device* ndev; } ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;




__attribute__((used)) static unsigned int FUNC_1(struct gfar_private *VAR_3,
         unsigned int VAR_4)
{
 struct net_device *VAR_5 = VAR_3->ndev;
 struct phy_device *VAR_6 = VAR_5->phydev;
 unsigned int VAR_7;


 switch (VAR_6->speed) {
 case 128:
  VAR_7 = VAR_2;
  break;
 case 129:
  VAR_7 = VAR_0;
  break;
 case 130:
 default:
  VAR_7 = VAR_1;
  break;
 }



 return FUNC_0(VAR_4 * 1000, VAR_7);
}
