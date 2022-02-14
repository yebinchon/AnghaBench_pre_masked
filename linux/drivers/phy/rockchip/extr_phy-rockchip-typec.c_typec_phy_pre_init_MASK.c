
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_usb3phy_port_cfg {int usb3tousb2_en; int external_psm; } ;
struct rockchip_typec_phy {int mode; int pipe_rst; int uphy_rst; int tcphy_rst; struct rockchip_usb3phy_port_cfg* port_cfgs; } ;


 int VAR_0 ;
 int FUNC_0 (struct rockchip_typec_phy*,int *,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct rockchip_typec_phy *VAR_1)
{
 const struct rockchip_usb3phy_port_cfg *VAR_2 = VAR_1->port_cfgs;

 FUNC_1(VAR_1->tcphy_rst);
 FUNC_1(VAR_1->uphy_rst);
 FUNC_1(VAR_1->pipe_rst);


 FUNC_0(VAR_1, &VAR_2->external_psm, 1);
 FUNC_0(VAR_1, &VAR_2->usb3tousb2_en, 0);

 VAR_1->mode = VAR_0;
}
