
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sm501_platdata {scalar_t__ gpio_i2c_nr; scalar_t__ gpio_i2c; struct sm501_initdata* init; } ;
struct sm501_initdata {int devices; } ;
struct sm501_devdata {unsigned long rev; int dev; struct sm501_platdata* platdata; int irq; scalar_t__ regs; int devices; int reg_lock; int clock_lock; } ;
typedef scalar_t__ resource_size_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,scalar_t__,unsigned long,unsigned long,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct sm501_devdata*) ;
 int FUNC_6 (struct sm501_devdata*) ;
 int FUNC_7 (struct sm501_devdata*) ;
 int FUNC_8 (struct sm501_devdata*) ;
 int FUNC_9 (struct sm501_devdata*,struct sm501_initdata*) ;
 scalar_t__* VAR_12 ;
 int FUNC_10 (struct sm501_devdata*,scalar_t__*) ;
 int FUNC_11 (struct sm501_devdata*) ;
 int FUNC_12 (struct sm501_devdata*,struct sm501_platdata*) ;
 int FUNC_13 (struct sm501_devdata*,int) ;
 int FUNC_14 (struct sm501_devdata*,scalar_t__*) ;
 unsigned long FUNC_15 (scalar_t__) ;
 int FUNC_16 (int ,scalar_t__) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int FUNC_18(struct sm501_devdata *VAR_13)
{
 struct sm501_initdata *VAR_14;
 struct sm501_platdata *VAR_15;
 resource_size_t VAR_16;
 unsigned long VAR_17;
 unsigned long VAR_18;
 int VAR_19;

 FUNC_4(&VAR_13->clock_lock);
 FUNC_17(&VAR_13->reg_lock);

 FUNC_0(&VAR_13->devices);

 VAR_18 = FUNC_15(VAR_13->regs + VAR_1);

 if ((VAR_18 & VAR_2) != VAR_4) {
  FUNC_1(VAR_13->dev, "incorrect device id %08lx\n", VAR_18);
  return -VAR_0;
 }


 FUNC_16(0, VAR_13->regs + VAR_6);

 VAR_17 = FUNC_15(VAR_13->regs + VAR_5);
 VAR_16 = VAR_12[(VAR_17 >> 13) & 0x7];

 FUNC_2(VAR_13->dev, "SM501 At %p: Version %08lx, %ld Mb, IRQ %d\n",
   VAR_13->regs, VAR_18, (unsigned long)VAR_16 >> 20, VAR_13->irq);

 VAR_13->rev = VAR_18 & VAR_3;

 FUNC_7(VAR_13);

 VAR_19 = FUNC_3(VAR_13->dev, &VAR_11);
 if (VAR_19)
  FUNC_1(VAR_13->dev, "failed to create debug regs file\n");

 FUNC_6(VAR_13);



 VAR_15 = VAR_13->platdata;
 VAR_14 = VAR_15 ? VAR_15->init : ((void*)0);

 if (VAR_14) {
  FUNC_9(VAR_13, VAR_14);

  if (VAR_14->devices & VAR_10)
   FUNC_14(VAR_13, &VAR_16);
  if (VAR_14->devices & (VAR_8 | VAR_9))
   FUNC_13(VAR_13, VAR_14->devices);
  if (VAR_14->devices & VAR_7)
   FUNC_11(VAR_13);
 }

 if (VAR_15 && VAR_15->gpio_i2c && VAR_15->gpio_i2c_nr > 0) {
  if (!FUNC_8(VAR_13))
   FUNC_1(VAR_13->dev, "no gpio available for i2c gpio.\n");
  else
   FUNC_12(VAR_13, VAR_15);
 }

 VAR_19 = FUNC_5(VAR_13);
 if (VAR_19) {
  FUNC_1(VAR_13->dev, "M1X and M clocks sourced from different "
     "PLLs\n");
  return -VAR_0;
 }


 FUNC_10(VAR_13, &VAR_16);

 return 0;
}
