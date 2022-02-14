
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int lock; } ;


 int FUNC_0 (struct phy_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct phy_device *VAR_0)
{
 int VAR_1;

 FUNC_1(&VAR_0->lock);
 VAR_1 = FUNC_0(VAR_0);
 FUNC_2(&VAR_0->lock);

 return VAR_1;
}
