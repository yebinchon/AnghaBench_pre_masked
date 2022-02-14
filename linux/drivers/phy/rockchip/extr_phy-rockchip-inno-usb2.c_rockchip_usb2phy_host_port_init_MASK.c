
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rockchip_usb2phy_port {size_t port_id; int suspended; scalar_t__ ls_irq; int sm_work; int mutex; int * port_cfg; } ;
struct rockchip_usb2phy {int dev; TYPE_1__* phy_cfg; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {int * port_cfgs; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int,int *,int ,int ,char*,struct rockchip_usb2phy_port*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct device_node*,char*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct rockchip_usb2phy *VAR_4,
        struct rockchip_usb2phy_port *VAR_5,
        struct device_node *VAR_6)
{
 int VAR_7;

 VAR_5->port_id = VAR_1;
 VAR_5->port_cfg = &VAR_4->phy_cfg->port_cfgs[VAR_1];
 VAR_5->suspended = 1;

 FUNC_3(&VAR_5->mutex);
 FUNC_0(&VAR_5->sm_work, VAR_3);

 VAR_5->ls_irq = FUNC_4(VAR_6, "linestate");
 if (VAR_5->ls_irq < 0) {
  FUNC_1(VAR_4->dev, "no linestate irq provided\n");
  return VAR_5->ls_irq;
 }

 VAR_7 = FUNC_2(VAR_4->dev, VAR_5->ls_irq, ((void*)0),
     VAR_2,
     VAR_0,
     "rockchip_usb2phy", VAR_5);
 if (VAR_7) {
  FUNC_1(VAR_4->dev, "failed to request linestate irq handle\n");
  return VAR_7;
 }

 return 0;
}
