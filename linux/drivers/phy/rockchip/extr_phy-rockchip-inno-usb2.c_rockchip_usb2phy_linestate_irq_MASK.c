
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int work; } ;
struct rockchip_usb2phy_port {scalar_t__ port_id; TYPE_4__ sm_work; scalar_t__ suspended; int mutex; TYPE_3__* port_cfg; TYPE_2__* phy; } ;
struct rockchip_usb2phy {int grf; } ;
typedef int irqreturn_t ;
struct TYPE_7__ {int ls_det_clr; int ls_det_en; int ls_det_st; } ;
struct TYPE_5__ {int parent; } ;
struct TYPE_6__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct rockchip_usb2phy* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_3, void *VAR_4)
{
 struct rockchip_usb2phy_port *VAR_5 = VAR_4;
 struct rockchip_usb2phy *VAR_6 = FUNC_0(VAR_5->phy->dev.parent);

 if (!FUNC_4(VAR_6->grf, &VAR_5->port_cfg->ls_det_st))
  return VAR_1;

 FUNC_1(&VAR_5->mutex);


 FUNC_3(VAR_6->grf, &VAR_5->port_cfg->ls_det_en, 0);
 FUNC_3(VAR_6->grf, &VAR_5->port_cfg->ls_det_clr, 1);

 FUNC_2(&VAR_5->mutex);






 if (VAR_5->suspended && VAR_5->port_id == VAR_2)
  FUNC_5(&VAR_5->sm_work.work);

 return VAR_0;
}
