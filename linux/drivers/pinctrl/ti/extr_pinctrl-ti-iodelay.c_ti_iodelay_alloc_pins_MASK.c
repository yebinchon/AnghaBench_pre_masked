
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ti_iodelay_reg_data {scalar_t__ reg_start_offset; TYPE_1__* regmap_config; } ;
struct TYPE_4__ {int npins; struct pinctrl_pin_desc* pins; } ;
struct ti_iodelay_device {struct pinctrl_pin_desc* pa; TYPE_2__ desc; struct ti_iodelay_reg_data* reg_data; } ;
struct pinctrl_pin_desc {int number; } ;
struct device {int dummy; } ;
struct TYPE_3__ {int max_register; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int) ;
 struct pinctrl_pin_desc* FUNC_1 (struct device*,int,int,int ) ;
 int FUNC_2 (struct ti_iodelay_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_2,
     struct ti_iodelay_device *VAR_3, u32 VAR_4)
{
 const struct ti_iodelay_reg_data *VAR_5 = VAR_3->reg_data;
 struct pinctrl_pin_desc *VAR_6;
 u32 VAR_7;
 int VAR_8, VAR_9;

 VAR_8 = FUNC_2(VAR_3, VAR_5->regmap_config->max_register);
 FUNC_0(VAR_2, "Allocating %i pins\n", VAR_8);

 VAR_3->pa = FUNC_1(VAR_2, VAR_8, sizeof(*VAR_3->pa), VAR_1);
 if (!VAR_3->pa)
  return -VAR_0;

 VAR_3->desc.pins = VAR_3->pa;
 VAR_3->desc.npins = VAR_8;

 VAR_7 = VAR_5->reg_start_offset + VAR_4;

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++, VAR_7 += 4) {
  VAR_6 = &VAR_3->pa[VAR_9];
  VAR_6->number = VAR_9;
 }

 return 0;
}
