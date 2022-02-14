
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy_device {TYPE_1__* drv; } ;
struct TYPE_2__ {int (* write_page ) (struct phy_device*,int) ;} ;


 int FUNC_0 (struct phy_device*,int) ;

__attribute__((used)) static int FUNC_1(struct phy_device *VAR_0, int VAR_1)
{
 return VAR_0->drv->write_page(VAR_0, VAR_1);
}
