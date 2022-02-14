
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st_pio_control {int rt_pin_mask; void* od; void* pu; void* oe; void* alt; } ;
struct st_pinctrl {struct regmap* regmap; struct device* dev; TYPE_1__* banks; struct st_pctl_data* data; } ;
struct st_pctl_data {int od; int pu; int oe; int alt; } ;
struct regmap {int dummy; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct st_pio_control pc; } ;


 int VAR_0 ;
 int FUNC_0 (struct device_node*,char*,int*) ;
 void* FUNC_1 (struct device*,struct regmap*,int,int ,int,int) ;
 int FUNC_2 (struct st_pinctrl*,int,struct st_pio_control*) ;

__attribute__((used)) static void FUNC_3(struct st_pinctrl *VAR_1, int VAR_2,
        struct device_node *VAR_3)
{
 const struct st_pctl_data *VAR_4 = VAR_1->data;





 int VAR_5 = (VAR_2%4) * VAR_0;
 int VAR_6 = VAR_5 + VAR_0 - 1;
 struct st_pio_control *VAR_7 = &VAR_1->banks[VAR_2].pc;
 struct device *VAR_8 = VAR_1->dev;
 struct regmap *VAR_9 = VAR_1->regmap;

 VAR_7->alt = FUNC_1(VAR_8, VAR_9, VAR_2, VAR_4->alt, 0, 31);
 VAR_7->oe = FUNC_1(VAR_8, VAR_9, VAR_2/4, VAR_4->oe, VAR_5, VAR_6);
 VAR_7->pu = FUNC_1(VAR_8, VAR_9, VAR_2/4, VAR_4->pu, VAR_5, VAR_6);
 VAR_7->od = FUNC_1(VAR_8, VAR_9, VAR_2/4, VAR_4->od, VAR_5, VAR_6);


 VAR_7->rt_pin_mask = 0xff;
 FUNC_0(VAR_3, "st,retime-pin-mask", &VAR_7->rt_pin_mask);
 FUNC_2(VAR_1, VAR_2, VAR_7);

 return;
}
