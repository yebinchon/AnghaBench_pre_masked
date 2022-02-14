
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ autoneg; int lock; int drv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct phy_device*) ;
 int FUNC_3 (struct phy_device*) ;
 scalar_t__ FUNC_4 (struct phy_device*) ;
 int FUNC_5 (struct phy_device*) ;

int FUNC_6(struct phy_device *VAR_2)
{
 int VAR_3;

 if (!VAR_2->drv)
  return -VAR_1;

 FUNC_0(&VAR_2->lock);

 if (VAR_0 == VAR_2->autoneg)
  FUNC_5(VAR_2);

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3 < 0)
  goto out_unlock;

 if (FUNC_4(VAR_2))
  VAR_3 = FUNC_2(VAR_2);
out_unlock:
 FUNC_1(&VAR_2->lock);

 return VAR_3;
}
