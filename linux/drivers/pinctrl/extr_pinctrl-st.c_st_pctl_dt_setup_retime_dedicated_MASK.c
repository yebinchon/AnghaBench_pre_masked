
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct st_retime_dedicated {int * rt; } ;
struct TYPE_2__ {struct st_retime_dedicated rt_d; } ;
struct st_pio_control {int rt_pin_mask; TYPE_1__ rt; } ;
struct st_pinctrl {struct st_pctl_data* data; struct regmap* regmap; struct device* dev; } ;
struct st_pctl_data {int rt; } ;
struct regmap {int dummy; } ;
struct reg_field {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 struct reg_field FUNC_2 (int,int ,int) ;
 int VAR_1 ;
 int FUNC_3 (struct device*,struct regmap*,struct reg_field) ;

__attribute__((used)) static int FUNC_4(struct st_pinctrl *VAR_2,
 int VAR_3, struct st_pio_control *VAR_4)
{
 struct device *VAR_5 = VAR_2->dev;
 struct regmap *VAR_6 = VAR_2->regmap;
 const struct st_pctl_data *VAR_7 = VAR_2->data;

 int VAR_8 = (VAR_7->rt + VAR_3 * VAR_1) * 4;
 struct st_retime_dedicated *VAR_9 = &VAR_4->rt.rt_d;
 unsigned int VAR_10;
 u32 VAR_11 = VAR_4->rt_pin_mask;

 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  if (FUNC_0(VAR_10) & VAR_11) {
   struct reg_field VAR_12 = FUNC_2(VAR_8, 0, 31);
   VAR_9->rt[VAR_10] = FUNC_3(VAR_5, VAR_6, VAR_12);
   if (FUNC_1(VAR_9->rt[VAR_10]))
    return -VAR_0;
   VAR_8 += 4;
  }
 }
 return 0;
}
