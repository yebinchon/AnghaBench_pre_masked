
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int notifier_call; } ;
struct rockchip_usb2phy_port {size_t port_id; int suspended; int vbus_attached; scalar_t__ mode; scalar_t__ otg_mux_irq; int bvalid_irq; TYPE_2__ event_nb; int otg_sm_work; int chg_work; int mutex; int state; int * port_cfg; } ;
struct rockchip_usb2phy {int dev; int edev; TYPE_1__* phy_cfg; } ;
struct device_node {int dummy; } ;
struct TYPE_3__ {int * port_cfgs; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,int ,TYPE_2__*) ;
 int FUNC_4 (int ,int,int *,int ,int ,char*,struct rockchip_usb2phy_port*) ;
 int FUNC_5 (int *) ;
 void* FUNC_6 (struct device_node*,char*) ;
 scalar_t__ FUNC_7 (struct device_node*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_8(struct rockchip_usb2phy *VAR_11,
       struct rockchip_usb2phy_port *VAR_12,
       struct device_node *VAR_13)
{
 int VAR_14;

 VAR_12->port_id = VAR_3;
 VAR_12->port_cfg = &VAR_11->phy_cfg->port_cfgs[VAR_3];
 VAR_12->state = VAR_2;







 VAR_12->suspended = 1;
 VAR_12->vbus_attached = 0;

 FUNC_5(&VAR_12->mutex);

 VAR_12->mode = FUNC_7(VAR_13, -1);
 if (VAR_12->mode == VAR_4 ||
     VAR_12->mode == VAR_5) {
  VAR_14 = 0;
  goto out;
 }

 FUNC_0(&VAR_12->chg_work, VAR_6);
 FUNC_0(&VAR_12->otg_sm_work, VAR_10);






 VAR_12->otg_mux_irq = FUNC_6(VAR_13, "otg-mux");
 if (VAR_12->otg_mux_irq > 0) {
  VAR_14 = FUNC_4(VAR_11->dev, VAR_12->otg_mux_irq,
      ((void*)0),
      VAR_9,
      VAR_1,
      "rockchip_usb2phy_otg",
      VAR_12);
  if (VAR_14) {
   FUNC_2(VAR_11->dev,
    "failed to request otg-mux irq handle\n");
   goto out;
  }
 } else {
  VAR_12->bvalid_irq = FUNC_6(VAR_13, "otg-bvalid");
  if (VAR_12->bvalid_irq < 0) {
   FUNC_2(VAR_11->dev, "no vbus valid irq provided\n");
   VAR_14 = VAR_12->bvalid_irq;
   goto out;
  }

  VAR_14 = FUNC_4(VAR_11->dev, VAR_12->bvalid_irq,
      ((void*)0),
      VAR_8,
      VAR_1,
      "rockchip_usb2phy_bvalid",
      VAR_12);
  if (VAR_14) {
   FUNC_2(VAR_11->dev,
    "failed to request otg-bvalid irq handle\n");
   goto out;
  }
 }

 if (!FUNC_1(VAR_11->edev)) {
  VAR_12->event_nb.notifier_call = VAR_7;

  VAR_14 = FUNC_3(VAR_11->dev, VAR_11->edev,
     VAR_0, &VAR_12->event_nb);
  if (VAR_14)
   FUNC_2(VAR_11->dev, "register USB HOST notifier failed\n");
 }

out:
 return VAR_14;
}
