
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tps65090_regulator_plat_data {TYPE_2__* reg_init_data; } ;
struct tps65090_regulator {TYPE_4__* dev; TYPE_1__* desc; } ;
struct device {int dummy; } ;
struct TYPE_8__ {struct device* parent; } ;
struct TYPE_7__ {scalar_t__ boot_on; scalar_t__ always_on; } ;
struct TYPE_6__ {TYPE_3__ constraints; } ;
struct TYPE_5__ {unsigned int enable_reg; } ;


 int FUNC_0 (TYPE_4__*,char*,unsigned int) ;
 int FUNC_1 (struct tps65090_regulator*,int) ;
 int FUNC_2 (struct device*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_3(
  struct tps65090_regulator *VAR_0,
  struct tps65090_regulator_plat_data *VAR_1)
{
 int VAR_2 = 0;
 struct device *VAR_3 = VAR_0->dev->parent;
 unsigned int VAR_4 = VAR_0->desc->enable_reg;





 if (VAR_1->reg_init_data->constraints.always_on ||
   VAR_1->reg_init_data->constraints.boot_on) {
  VAR_2 = FUNC_2(VAR_3, VAR_4, 0);
  if (VAR_2 < 0) {
   FUNC_0(VAR_0->dev, "Error in set reg 0x%x\n", VAR_4);
   return VAR_2;
  }
 }
 return FUNC_1(VAR_0, 0);
}
