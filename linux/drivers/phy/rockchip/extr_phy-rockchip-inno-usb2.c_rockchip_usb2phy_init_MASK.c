
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rockchip_usb2phy_port {scalar_t__ port_id; scalar_t__ mode; int mutex; int sm_work; TYPE_3__* port_cfg; TYPE_2__* phy; int otg_sm_work; } ;
struct rockchip_usb2phy {int grf; } ;
struct TYPE_4__ {int parent; } ;
struct phy {TYPE_1__ dev; } ;
struct TYPE_6__ {int ls_det_en; int ls_det_clr; int bvalid_det_en; int bvalid_det_clr; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 struct rockchip_usb2phy* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct rockchip_usb2phy_port* FUNC_4 (struct phy*) ;
 int FUNC_5 (int ,int *,int) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static int FUNC_7(struct phy *VAR_6)
{
 struct rockchip_usb2phy_port *VAR_7 = FUNC_4(VAR_6);
 struct rockchip_usb2phy *VAR_8 = FUNC_1(VAR_6->dev.parent);
 int VAR_9 = 0;

 FUNC_2(&VAR_7->mutex);

 if (VAR_7->port_id == VAR_3) {
  if (VAR_7->mode != VAR_4 &&
      VAR_7->mode != VAR_5) {

   VAR_9 = FUNC_5(VAR_8->grf,
           &VAR_7->port_cfg->bvalid_det_clr,
           1);
   if (VAR_9)
    goto out;

   VAR_9 = FUNC_5(VAR_8->grf,
           &VAR_7->port_cfg->bvalid_det_en,
           1);
   if (VAR_9)
    goto out;

   FUNC_6(&VAR_7->otg_sm_work,
           VAR_0 * 3);
  } else {

   FUNC_0(&VAR_7->phy->dev, "mode %d\n", VAR_7->mode);
  }
 } else if (VAR_7->port_id == VAR_2) {

  VAR_9 = FUNC_5(VAR_8->grf,
          &VAR_7->port_cfg->ls_det_clr, 1);
  if (VAR_9)
   goto out;

  VAR_9 = FUNC_5(VAR_8->grf,
          &VAR_7->port_cfg->ls_det_en, 1);
  if (VAR_9)
   goto out;

  FUNC_6(&VAR_7->sm_work, VAR_1);
 }

out:
 FUNC_3(&VAR_7->mutex);
 return VAR_9;
}
