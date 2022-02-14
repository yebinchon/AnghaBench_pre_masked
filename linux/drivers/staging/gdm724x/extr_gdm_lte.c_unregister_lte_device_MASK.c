
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_dev {struct net_device** dev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;

void FUNC_2(struct phy_dev *VAR_1)
{
 struct net_device *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2 = VAR_1->dev[VAR_3];
  if (!VAR_2)
   continue;

  FUNC_1(VAR_2);
  FUNC_0(VAR_2);
 }
}
