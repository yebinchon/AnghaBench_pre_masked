
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct omap_musb_board_data {int (* set_mode ) (int ) ;} ;
struct musb_hdrc_platform_data {struct omap_musb_board_data* board_data; } ;
struct musb {struct device* controller; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct musb_hdrc_platform_data* FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct musb *VAR_1, u8 VAR_2)
{
 struct device *VAR_3 = VAR_1->controller;
 struct musb_hdrc_platform_data *VAR_4 = FUNC_0(VAR_3);
 struct omap_musb_board_data *VAR_5 = VAR_4->board_data;
 int VAR_6 = 0;

 if (VAR_5->set_mode)
  VAR_5->set_mode(VAR_2);
 else
  VAR_6 = -VAR_0;

 return VAR_6;
}
