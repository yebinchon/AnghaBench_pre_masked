
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regmap_irq {unsigned int reg_offset; unsigned int mask; } ;
struct cpcap_ddata {TYPE_1__* regmap_conf; } ;
struct TYPE_2__ {unsigned int val_bits; unsigned int reg_stride; } ;



__attribute__((used)) static void FUNC_0(struct cpcap_ddata *VAR_0,
          struct regmap_irq *VAR_1,
          int VAR_2, int VAR_3)
{
 unsigned int VAR_4;
 unsigned int VAR_5, VAR_6;

 VAR_4 = VAR_3 - VAR_2;
 VAR_4 /= VAR_0->regmap_conf->val_bits;
 VAR_4 *= VAR_0->regmap_conf->reg_stride;

 VAR_5 = VAR_3 % VAR_0->regmap_conf->val_bits;
 VAR_6 = (1 << VAR_5);

 VAR_1->reg_offset = VAR_4;
 VAR_1->mask = VAR_6;
}
