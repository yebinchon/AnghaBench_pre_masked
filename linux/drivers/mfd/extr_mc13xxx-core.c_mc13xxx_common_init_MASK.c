
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct mc13xxx_platform_data {int flags; int touch; int * codec; int * buttons; int * leds; int regulators; } ;
struct TYPE_5__ {int init_ack_masked; int use_ack; int num_irqs; TYPE_3__* irqs; int num_regs; void* irq_reg_stride; void* ack_base; int mask_base; void* status_base; int name; } ;
struct mc13xxx {int flags; int lock; int irq_data; TYPE_2__ irq_chip; int irq; int regmap; TYPE_3__* irqs; TYPE_1__* variant; struct device* dev; } ;
struct device {int dummy; } ;
struct TYPE_6__ {int reg_offset; int mask; } ;
struct TYPE_4__ {int (* print_revision ) (struct mc13xxx*,int ) ;} ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct mc13xxx* FUNC_2 (struct device*) ;
 struct mc13xxx_platform_data* FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct mc13xxx*,char*) ;
 int FUNC_6 (struct mc13xxx*,char*,int *,int) ;
 scalar_t__ FUNC_7 (struct mc13xxx*) ;
 int FUNC_8 (struct mc13xxx*,int ,int *) ;
 int FUNC_9 (struct mc13xxx*,int ,int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int ,int ,int ,TYPE_2__*,int *) ;
 int FUNC_12 (struct mc13xxx*,int ) ;

int FUNC_13(struct device *VAR_13)
{
 struct mc13xxx_platform_data *VAR_14 = FUNC_3(VAR_13);
 struct mc13xxx *VAR_15 = FUNC_2(VAR_13);
 u32 VAR_16;
 int VAR_17, VAR_18;

 VAR_15->dev = VAR_13;

 VAR_18 = FUNC_8(VAR_15, VAR_8, &VAR_16);
 if (VAR_18)
  return VAR_18;

 VAR_15->variant->print_revision(VAR_15, VAR_16);

 VAR_18 = FUNC_9(VAR_15, VAR_6,
   VAR_7, VAR_7);
 if (VAR_18)
  return VAR_18;

 for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_15->irqs); VAR_17++) {
  VAR_15->irqs[VAR_17].reg_offset = VAR_17 / VAR_4;
  VAR_15->irqs[VAR_17].mask = FUNC_1(VAR_17 % VAR_4);
 }

 VAR_15->irq_chip.name = FUNC_4(VAR_13);
 VAR_15->irq_chip.status_base = VAR_2;
 VAR_15->irq_chip.mask_base = VAR_1;
 VAR_15->irq_chip.ack_base = VAR_2;
 VAR_15->irq_chip.irq_reg_stride = VAR_3 - VAR_2;
 VAR_15->irq_chip.init_ack_masked = 1;
 VAR_15->irq_chip.use_ack = 1;
 VAR_15->irq_chip.num_regs = VAR_5;
 VAR_15->irq_chip.irqs = VAR_15->irqs;
 VAR_15->irq_chip.num_irqs = FUNC_0(VAR_15->irqs);

 VAR_18 = FUNC_11(VAR_15->regmap, VAR_15->irq, VAR_0,
      0, &VAR_15->irq_chip, &VAR_15->irq_data);
 if (VAR_18)
  return VAR_18;

 FUNC_10(&VAR_15->lock);

 if (FUNC_7(VAR_15) < 0 && VAR_14)
  VAR_15->flags = VAR_14->flags;

 if (VAR_14) {
  FUNC_6(VAR_15, "%s-regulator",
   &VAR_14->regulators, sizeof(VAR_14->regulators));
  FUNC_6(VAR_15, "%s-led",
    VAR_14->leds, sizeof(*VAR_14->leds));
  FUNC_6(VAR_15, "%s-pwrbutton",
    VAR_14->buttons, sizeof(*VAR_14->buttons));
  if (VAR_15->flags & VAR_10)
   FUNC_6(VAR_15, "%s-codec",
    VAR_14->codec, sizeof(*VAR_14->codec));
  if (VAR_15->flags & VAR_12)
   FUNC_6(VAR_15, "%s-ts",
    &VAR_14->touch, sizeof(VAR_14->touch));
 } else {
  FUNC_5(VAR_15, "%s-regulator");
  FUNC_5(VAR_15, "%s-led");
  FUNC_5(VAR_15, "%s-pwrbutton");
  if (VAR_15->flags & VAR_10)
   FUNC_5(VAR_15, "%s-codec");
  if (VAR_15->flags & VAR_12)
   FUNC_5(VAR_15, "%s-ts");
 }

 if (VAR_15->flags & VAR_9)
  FUNC_5(VAR_15, "%s-adc");

 if (VAR_15->flags & VAR_11)
  FUNC_5(VAR_15, "%s-rtc");

 return 0;
}
