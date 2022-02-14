
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct irq_data {int irq; } ;
struct asic3 {int* irq_bothedge; int irq_base; int lock; int dev; int gpio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (struct asic3*,int) ;
 int FUNC_2 (struct asic3*,int) ;
 int FUNC_3 (struct asic3*,int) ;
 int FUNC_4 (struct asic3*,int,int) ;
 int FUNC_5 (int ,char*) ;
 struct asic3* FUNC_6 (struct irq_data*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct irq_data *VAR_8, unsigned int VAR_9)
{
 struct asic3 *VAR_10 = FUNC_6(VAR_8);
 u32 VAR_11, VAR_12;
 u16 VAR_13, VAR_14, VAR_15, VAR_16;
 unsigned long VAR_17;

 VAR_11 = FUNC_1(VAR_10, VAR_8->irq);
 VAR_12 = FUNC_2(VAR_10, VAR_8->irq);
 VAR_16 = 1<<VAR_12;

 FUNC_7(&VAR_10->lock, VAR_17);
 VAR_14 = FUNC_3(VAR_10,
        VAR_11 + VAR_1);
 VAR_15 = FUNC_3(VAR_10,
       VAR_11 + VAR_0);
 VAR_13 = FUNC_3(VAR_10,
          VAR_11 + VAR_2);
 VAR_10->irq_bothedge[(VAR_8->irq - VAR_10->irq_base) >> 4] &= ~VAR_16;

 if (VAR_9 == VAR_5) {
  VAR_13 |= VAR_16;
  VAR_15 |= VAR_16;
 } else if (VAR_9 == VAR_4) {
  VAR_13 |= VAR_16;
  VAR_15 &= ~VAR_16;
 } else if (VAR_9 == VAR_3) {
  VAR_13 |= VAR_16;
  if (FUNC_0(&VAR_10->gpio, VAR_8->irq - VAR_10->irq_base))
   VAR_15 &= ~VAR_16;
  else
   VAR_15 |= VAR_16;
  VAR_10->irq_bothedge[(VAR_8->irq - VAR_10->irq_base) >> 4] |= VAR_16;
 } else if (VAR_9 == VAR_7) {
  VAR_13 &= ~VAR_16;
  VAR_14 &= ~VAR_16;
 } else if (VAR_9 == VAR_6) {
  VAR_13 &= ~VAR_16;
  VAR_14 |= VAR_16;
 } else {





  FUNC_5(VAR_10->dev, "irq type not changed\n");
 }
 FUNC_4(VAR_10, VAR_11 + VAR_1,
        VAR_14);
 FUNC_4(VAR_10, VAR_11 + VAR_0,
        VAR_15);
 FUNC_4(VAR_10, VAR_11 + VAR_2,
        VAR_13);
 FUNC_8(&VAR_10->lock, VAR_17);
 return 0;
}
