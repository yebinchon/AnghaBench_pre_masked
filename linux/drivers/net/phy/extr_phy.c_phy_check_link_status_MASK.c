
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ state; scalar_t__ link; scalar_t__ loopback_enabled; int lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct phy_device*,int) ;
 int FUNC_3 (struct phy_device*) ;
 int FUNC_4 (struct phy_device*) ;

__attribute__((used)) static int FUNC_5(struct phy_device *VAR_2)
{
 int VAR_3;

 FUNC_0(!FUNC_1(&VAR_2->lock));




 if (VAR_2->loopback_enabled)
  return 0;

 VAR_3 = FUNC_4(VAR_2);
 if (VAR_3)
  return VAR_3;

 if (VAR_2->link && VAR_2->state != VAR_1) {
  VAR_2->state = VAR_1;
  FUNC_3(VAR_2);
 } else if (!VAR_2->link && VAR_2->state != VAR_0) {
  VAR_2->state = VAR_0;
  FUNC_2(VAR_2, 1);
 }

 return 0;
}
