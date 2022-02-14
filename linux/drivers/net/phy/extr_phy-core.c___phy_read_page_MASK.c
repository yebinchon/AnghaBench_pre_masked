
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy_device {TYPE_1__* drv; } ;
struct TYPE_2__ {int (* read_page ) (struct phy_device*) ;} ;


 int FUNC_0 (struct phy_device*) ;

__attribute__((used)) static int FUNC_1(struct phy_device *VAR_0)
{
 return VAR_0->drv->read_page(VAR_0);
}
