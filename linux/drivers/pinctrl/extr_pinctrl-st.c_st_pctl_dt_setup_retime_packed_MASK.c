
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st_retime_packed {void* double_edge; void* clknotdata; void* retime; void* invertclk; void* delay_1; void* delay_0; void* clk1notclk0; } ;
struct TYPE_2__ {struct st_retime_packed rt_p; } ;
struct st_pio_control {TYPE_1__ rt; } ;
struct st_pinctrl {struct st_pctl_data* data; struct regmap* regmap; struct device* dev; } ;
struct st_pctl_data {int rt; } ;
struct regmap {int dummy; } ;
struct reg_field {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 struct reg_field FUNC_1 (int) ;
 struct reg_field FUNC_2 (int) ;
 struct reg_field FUNC_3 (int) ;
 struct reg_field FUNC_4 (int) ;
 struct reg_field FUNC_5 (int) ;
 struct reg_field FUNC_6 (int) ;
 struct reg_field FUNC_7 (int) ;
 int VAR_1 ;
 void* FUNC_8 (struct device*,struct regmap*,struct reg_field) ;

__attribute__((used)) static int FUNC_9(struct st_pinctrl *VAR_2,
 int VAR_3, struct st_pio_control *VAR_4)
{
 struct device *VAR_5 = VAR_2->dev;
 struct regmap *VAR_6 = VAR_2->regmap;
 const struct st_pctl_data *VAR_7 = VAR_2->data;

 int VAR_8 = (VAR_7->rt + VAR_3 * VAR_1) * 4;
 struct st_retime_packed *VAR_9 = &VAR_4->rt.rt_p;

 struct reg_field VAR_10 = FUNC_1(VAR_8);
 struct reg_field VAR_11 = FUNC_2(VAR_8);
 struct reg_field VAR_12 = FUNC_3(VAR_8);

 struct reg_field VAR_13 = FUNC_6(VAR_8 + 4);
 struct reg_field VAR_14 = FUNC_7(VAR_8 + 4);
 struct reg_field VAR_15 = FUNC_4(VAR_8 + 4);
 struct reg_field VAR_16 = FUNC_5(VAR_8 + 4);

 VAR_9->clk1notclk0 = FUNC_8(VAR_5, VAR_6, VAR_10);
 VAR_9->delay_0 = FUNC_8(VAR_5, VAR_6, VAR_11);
 VAR_9->delay_1 = FUNC_8(VAR_5, VAR_6, VAR_12);
 VAR_9->invertclk = FUNC_8(VAR_5, VAR_6, VAR_13);
 VAR_9->retime = FUNC_8(VAR_5, VAR_6, VAR_14);
 VAR_9->clknotdata = FUNC_8(VAR_5, VAR_6, VAR_15);
 VAR_9->double_edge = FUNC_8(VAR_5, VAR_6, VAR_16);

 if (FUNC_0(VAR_9->clk1notclk0) || FUNC_0(VAR_9->delay_0) ||
   FUNC_0(VAR_9->delay_1) || FUNC_0(VAR_9->invertclk) ||
   FUNC_0(VAR_9->retime) || FUNC_0(VAR_9->clknotdata) ||
   FUNC_0(VAR_9->double_edge))
  return -VAR_0;

 return 0;
}
