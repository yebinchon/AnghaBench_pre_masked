
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy_device {TYPE_1__* drv; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct phy_device*,int) ;

int FUNC_1(struct phy_device *VAR_2)
{
 if (!VAR_2 || !VAR_2->drv)
  return -VAR_0;

 if (VAR_2->drv->flags & VAR_1) {
  FUNC_0(VAR_2, 1);
  FUNC_0(VAR_2, 0);
  return 1;
 }

 return 0;
}
