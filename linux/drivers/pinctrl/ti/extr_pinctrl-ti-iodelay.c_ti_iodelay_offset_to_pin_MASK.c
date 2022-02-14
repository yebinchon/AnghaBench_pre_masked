
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ti_iodelay_reg_data {unsigned int reg_start_offset; unsigned int reg_nr_per_pin; TYPE_1__* regmap_config; } ;
struct ti_iodelay_device {int dev; struct ti_iodelay_reg_data* reg_data; } ;
struct TYPE_2__ {unsigned int max_register; unsigned int reg_stride; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct ti_iodelay_device *VAR_1,
        unsigned int VAR_2)
{
 const struct ti_iodelay_reg_data *VAR_3 = VAR_1->reg_data;
 unsigned int VAR_4;

 if (VAR_2 > VAR_3->regmap_config->max_register) {
  FUNC_0(VAR_1->dev, "mux offset out of range: 0x%x (0x%x)\n",
   VAR_2, VAR_3->regmap_config->max_register);
  return -VAR_0;
 }

 VAR_4 = (VAR_2 - VAR_3->reg_start_offset) / VAR_3->regmap_config->reg_stride;
 VAR_4 /= VAR_3->reg_nr_per_pin;

 return VAR_4;
}
