
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int work; } ;
struct rockchip_usb2phy_port {TYPE_2__ otg_sm_work; int mutex; TYPE_1__* port_cfg; TYPE_4__* phy; } ;
struct rockchip_usb2phy {int grf; } ;
typedef int irqreturn_t ;
struct TYPE_7__ {int parent; } ;
struct TYPE_8__ {TYPE_3__ dev; } ;
struct TYPE_5__ {int bvalid_det_clr; int bvalid_det_st; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rockchip_usb2phy* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_2, void *VAR_3)
{
 struct rockchip_usb2phy_port *VAR_4 = VAR_3;
 struct rockchip_usb2phy *VAR_5 = FUNC_0(VAR_4->phy->dev.parent);

 if (!FUNC_4(VAR_5->grf, &VAR_4->port_cfg->bvalid_det_st))
  return VAR_1;

 FUNC_1(&VAR_4->mutex);


 FUNC_3(VAR_5->grf, &VAR_4->port_cfg->bvalid_det_clr, 1);

 FUNC_2(&VAR_4->mutex);

 FUNC_5(&VAR_4->otg_sm_work.work);

 return VAR_0;
}
