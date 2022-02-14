
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ interface; } ;
struct phylink {scalar_t__ link_interface; TYPE_1__ link_config; } ;
struct phy_device {scalar_t__ interface; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct phylink*,struct phy_device*,scalar_t__) ;

int FUNC_1(struct phylink *VAR_1, struct phy_device *VAR_2)
{

 if (VAR_1->link_interface == VAR_0) {
  VAR_1->link_interface = VAR_2->interface;
  VAR_1->link_config.interface = VAR_1->link_interface;
 }

 return FUNC_0(VAR_1, VAR_2, VAR_1->link_interface);
}
