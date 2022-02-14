
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phylink {int resolve; int state_mutex; struct phy_device* phydev; } ;
struct phy_device {int lock; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct phy_device*) ;

void FUNC_5(struct phylink *VAR_0)
{
 struct phy_device *VAR_1;

 FUNC_0();

 VAR_1 = VAR_0->phydev;
 if (VAR_1) {
  FUNC_2(&VAR_1->lock);
  FUNC_2(&VAR_0->state_mutex);
  VAR_0->phydev = ((void*)0);
  FUNC_3(&VAR_0->state_mutex);
  FUNC_3(&VAR_1->lock);
  FUNC_1(&VAR_0->resolve);

  FUNC_4(VAR_1);
 }
}
