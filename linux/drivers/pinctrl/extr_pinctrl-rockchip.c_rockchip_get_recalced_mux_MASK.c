
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rockchip_pinctrl {struct rockchip_pin_ctrl* ctrl; } ;
struct rockchip_pin_ctrl {int niomux_recalced; struct rockchip_mux_recalced_data* iomux_recalced; } ;
struct rockchip_pin_bank {scalar_t__ bank_num; struct rockchip_pinctrl* drvdata; } ;
struct rockchip_mux_recalced_data {scalar_t__ num; int pin; int reg; int mask; int bit; } ;



__attribute__((used)) static void FUNC_0(struct rockchip_pin_bank *VAR_0, int VAR_1,
          int *VAR_2, u8 *VAR_3, int *VAR_4)
{
 struct rockchip_pinctrl *VAR_5 = VAR_0->drvdata;
 struct rockchip_pin_ctrl *VAR_6 = VAR_5->ctrl;
 struct rockchip_mux_recalced_data *VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_6->niomux_recalced; VAR_8++) {
  VAR_7 = &VAR_6->iomux_recalced[VAR_8];
  if (VAR_7->num == VAR_0->bank_num &&
      VAR_7->pin == VAR_1)
   break;
 }

 if (VAR_8 >= VAR_6->niomux_recalced)
  return;

 *VAR_2 = VAR_7->reg;
 *VAR_4 = VAR_7->mask;
 *VAR_3 = VAR_7->bit;
}
