
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sprd_pins_info {scalar_t__ type; unsigned int reg; int bit_width; int bit_offset; int num; int name; } ;
struct sprd_pinctrl_soc_info {int npins; struct sprd_pin* pins; } ;
struct sprd_pinctrl {int dev; scalar_t__ base; struct sprd_pinctrl_soc_info* info; } ;
struct sprd_pin {scalar_t__ type; unsigned long reg; int bit_width; int bit_offset; int number; int name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 int FUNC_0 (int ,char*,int ,int ,scalar_t__,int ,int ,unsigned long) ;
 struct sprd_pin* FUNC_1 (int ,int,int,int ) ;

__attribute__((used)) static int FUNC_2(struct sprd_pinctrl *VAR_8,
     struct sprd_pins_info *VAR_9,
     int VAR_10)
{
 struct sprd_pinctrl_soc_info *VAR_11 = VAR_8->info;
 unsigned int VAR_12 = 0, VAR_13 = 0;
 struct sprd_pin *VAR_14;
 int VAR_15;

 VAR_11->npins = VAR_10;
 VAR_11->pins = FUNC_1(VAR_8->dev,
      VAR_11->npins, sizeof(struct sprd_pin),
      VAR_2);
 if (!VAR_11->pins)
  return -VAR_1;

 for (VAR_15 = 0, VAR_14 = VAR_11->pins; VAR_15 < VAR_11->npins; VAR_15++, VAR_14++) {
  unsigned int VAR_16;

  VAR_14->name = VAR_9[VAR_15].name;
  VAR_14->type = VAR_9[VAR_15].type;
  VAR_14->number = VAR_9[VAR_15].num;
  VAR_16 = VAR_9[VAR_15].reg;
  if (VAR_14->type == VAR_3) {
   VAR_14->reg = (unsigned long)VAR_8->base +
    VAR_5 * VAR_16;
   VAR_14->bit_offset = VAR_9[VAR_15].bit_offset;
   VAR_14->bit_width = VAR_9[VAR_15].bit_width;
   VAR_12++;
  } else if (VAR_14->type == VAR_0) {
   VAR_14->reg = (unsigned long)VAR_8->base +
    VAR_7 + VAR_5 *
    (VAR_15 - VAR_12);
   VAR_13++;
  } else if (VAR_14->type == VAR_4) {
   VAR_14->reg = (unsigned long)VAR_8->base +
    VAR_6 + VAR_5 *
    (VAR_15 - VAR_12 - VAR_13);
  }
 }

 for (VAR_15 = 0, VAR_14 = VAR_11->pins; VAR_15 < VAR_11->npins; VAR_14++, VAR_15++) {
  FUNC_0(VAR_8->dev, "pin name[%s-%d], type = %d, "
   "bit offset = %ld, bit width = %ld, reg = 0x%lx\n",
   VAR_14->name, VAR_14->number, VAR_14->type,
   VAR_14->bit_offset, VAR_14->bit_width, VAR_14->reg);
 }

 return 0;
}
