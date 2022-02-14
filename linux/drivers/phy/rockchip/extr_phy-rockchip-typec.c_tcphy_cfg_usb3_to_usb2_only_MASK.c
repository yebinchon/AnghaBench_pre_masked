
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_usb3phy_port_cfg {int usb3_host_port; int usb3_host_disable; int usb3tousb2_en; } ;
struct rockchip_typec_phy {struct rockchip_usb3phy_port_cfg* port_cfgs; } ;


 int FUNC_0 (struct rockchip_typec_phy*,int *,int) ;

__attribute__((used)) static int FUNC_1(struct rockchip_typec_phy *VAR_0,
           bool VAR_1)
{
 const struct rockchip_usb3phy_port_cfg *VAR_2 = VAR_0->port_cfgs;

 FUNC_0(VAR_0, &VAR_2->usb3tousb2_en, VAR_1);
 FUNC_0(VAR_0, &VAR_2->usb3_host_disable, VAR_1);
 FUNC_0(VAR_0, &VAR_2->usb3_host_port, !VAR_1);

 return 0;
}
