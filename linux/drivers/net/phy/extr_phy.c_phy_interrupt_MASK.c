
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy_device {TYPE_1__* drv; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {scalar_t__ (* handle_interrupt ) (struct phy_device*) ;int (* did_interrupt ) (struct phy_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct phy_device*) ;
 int FUNC_1 (struct phy_device*) ;
 int FUNC_2 (struct phy_device*) ;
 int FUNC_3 (struct phy_device*) ;
 scalar_t__ FUNC_4 (struct phy_device*) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_2, void *VAR_3)
{
 struct phy_device *VAR_4 = VAR_3;

 if (VAR_4->drv->did_interrupt && !VAR_4->drv->did_interrupt(VAR_4))
  return VAR_1;

 if (VAR_4->drv->handle_interrupt) {
  if (VAR_4->drv->handle_interrupt(VAR_4))
   goto phy_err;
 } else {

  FUNC_2(VAR_4);
 }

 if (FUNC_0(VAR_4))
  goto phy_err;
 return VAR_0;

phy_err:
 FUNC_1(VAR_4);
 return VAR_1;
}
