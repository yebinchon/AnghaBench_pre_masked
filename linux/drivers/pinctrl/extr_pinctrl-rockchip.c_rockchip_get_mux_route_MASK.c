
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rockchip_pinctrl {struct rockchip_pin_ctrl* ctrl; } ;
struct rockchip_pin_ctrl {int niomux_routes; struct rockchip_mux_route_data* iomux_routes; } ;
struct rockchip_pin_bank {scalar_t__ bank_num; struct rockchip_pinctrl* drvdata; } ;
struct rockchip_mux_route_data {scalar_t__ bank_num; int pin; int func; int route_val; int route_offset; int route_location; } ;



__attribute__((used)) static bool FUNC_0(struct rockchip_pin_bank *VAR_0, int VAR_1,
       int VAR_2, u32 *VAR_3, u32 *VAR_4, u32 *VAR_5)
{
 struct rockchip_pinctrl *VAR_6 = VAR_0->drvdata;
 struct rockchip_pin_ctrl *VAR_7 = VAR_6->ctrl;
 struct rockchip_mux_route_data *VAR_8;
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_7->niomux_routes; VAR_9++) {
  VAR_8 = &VAR_7->iomux_routes[VAR_9];
  if ((VAR_8->bank_num == VAR_0->bank_num) &&
      (VAR_8->pin == VAR_1) && (VAR_8->func == VAR_2))
   break;
 }

 if (VAR_9 >= VAR_7->niomux_routes)
  return 0;

 *VAR_3 = VAR_8->route_location;
 *VAR_4 = VAR_8->route_offset;
 *VAR_5 = VAR_8->route_val;

 return 1;
}
