
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_usb2phy_port {scalar_t__ port_id; scalar_t__ mode; int sm_work; int chg_work; int otg_sm_work; } ;
struct phy {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 struct rockchip_usb2phy_port* FUNC_1 (struct phy*) ;

__attribute__((used)) static int FUNC_2(struct phy *VAR_4)
{
 struct rockchip_usb2phy_port *VAR_5 = FUNC_1(VAR_4);

 if (VAR_5->port_id == VAR_1 &&
     VAR_5->mode != VAR_2 &&
     VAR_5->mode != VAR_3) {
  FUNC_0(&VAR_5->otg_sm_work);
  FUNC_0(&VAR_5->chg_work);
 } else if (VAR_5->port_id == VAR_0)
  FUNC_0(&VAR_5->sm_work);

 return 0;
}
