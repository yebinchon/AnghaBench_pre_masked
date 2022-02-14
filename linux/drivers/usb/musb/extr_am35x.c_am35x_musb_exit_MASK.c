
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_musb_board_data {int (* set_phy_power ) (int ) ;} ;
struct musb_hdrc_platform_data {struct omap_musb_board_data* board_data; } ;
struct musb {int xceiv; int dev_timer; struct device* controller; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *) ;
 struct musb_hdrc_platform_data* FUNC_1 (struct device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct musb *VAR_0)
{
 struct device *VAR_1 = VAR_0->controller;
 struct musb_hdrc_platform_data *VAR_2 = FUNC_1(VAR_1);
 struct omap_musb_board_data *VAR_3 = VAR_2->board_data;

 FUNC_0(&VAR_0->dev_timer);


 if (VAR_3->set_phy_power)
  VAR_3->set_phy_power(0);

 FUNC_3(VAR_0->xceiv);

 return 0;
}
