
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mtk_pinctrl {int nbase; int dev; TYPE_1__* soc; } ;
struct mtk_pin_reg_calc {int nranges; struct mtk_pin_field_calc* range; } ;
struct mtk_pin_field_calc {scalar_t__ s_pin; scalar_t__ e_pin; int i_base; int s_bit; int x_bits; int x_addrs; int sz_reg; scalar_t__ s_addr; scalar_t__ fixed; } ;
struct mtk_pin_field {int index; int bitpos; int mask; int next; scalar_t__ offset; } ;
struct mtk_pin_desc {scalar_t__ number; int name; } ;
struct TYPE_2__ {struct mtk_pin_reg_calc* reg_cal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,scalar_t__,int ) ;
 int FUNC_1 (int ,char*,int,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_2(struct mtk_pinctrl *VAR_2,
       const struct mtk_pin_desc *VAR_3,
       int VAR_4, struct mtk_pin_field *VAR_5)
{
 const struct mtk_pin_field_calc *VAR_6, *VAR_7;
 const struct mtk_pin_reg_calc *VAR_8;
 u32 VAR_9;

 if (VAR_2->soc->reg_cal && VAR_2->soc->reg_cal[VAR_4].range) {
  VAR_8 = &VAR_2->soc->reg_cal[VAR_4];
 } else {
  FUNC_0(VAR_2->dev,
   "Not support field %d for pin %d (%s)\n",
   VAR_4, VAR_3->number, VAR_3->name);
  return -VAR_1;
 }

 VAR_6 = VAR_8->range;
 VAR_7 = VAR_6 + VAR_8->nranges;

 while (VAR_6 < VAR_7) {
  if (VAR_3->number >= VAR_6->s_pin && VAR_3->number <= VAR_6->e_pin)
   break;
  VAR_6++;
 }

 if (VAR_6 >= VAR_7) {
  FUNC_0(VAR_2->dev, "Not support field %d for pin = %d (%s)\n",
   VAR_4, VAR_3->number, VAR_3->name);
  return -VAR_1;
 }

 if (VAR_6->i_base > VAR_2->nbase - 1) {
  FUNC_1(VAR_2->dev,
   "Invalid base for field %d for pin = %d (%s)\n",
   VAR_4, VAR_3->number, VAR_3->name);
  return -VAR_0;
 }





 VAR_9 = VAR_6->fixed ? VAR_6->s_bit : VAR_6->s_bit +
        (VAR_3->number - VAR_6->s_pin) * (VAR_6->x_bits);




 VAR_5->index = VAR_6->i_base;
 VAR_5->offset = VAR_6->s_addr + VAR_6->x_addrs * (VAR_9 / VAR_6->sz_reg);
 VAR_5->bitpos = VAR_9 % VAR_6->sz_reg;
 VAR_5->mask = (1 << VAR_6->x_bits) - 1;





 VAR_5->next = VAR_5->bitpos + VAR_6->x_bits > VAR_6->sz_reg ? VAR_6->x_addrs : 0;

 return 0;
}
