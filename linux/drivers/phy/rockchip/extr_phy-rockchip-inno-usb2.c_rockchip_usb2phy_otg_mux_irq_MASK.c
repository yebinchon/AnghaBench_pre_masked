
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rockchip_usb2phy_port {TYPE_3__* port_cfg; TYPE_2__* phy; } ;
struct rockchip_usb2phy {int grf; } ;
typedef int irqreturn_t ;
struct TYPE_6__ {int bvalid_det_st; } ;
struct TYPE_4__ {int parent; } ;
struct TYPE_5__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 struct rockchip_usb2phy* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (int,void*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 struct rockchip_usb2phy_port *VAR_3 = VAR_2;
 struct rockchip_usb2phy *VAR_4 = FUNC_0(VAR_3->phy->dev.parent);

 if (FUNC_1(VAR_4->grf, &VAR_3->port_cfg->bvalid_det_st))
  return FUNC_2(VAR_1, VAR_2);
 else
  return VAR_0;
}
