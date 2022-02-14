
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct irq_desc {int dummy; } ;
struct irq_data {TYPE_1__* chip; } ;
struct asic3 {unsigned int irq_base; int* irq_bothedge; int dev; int lock; } ;
struct TYPE_2__ {int (* irq_ack ) (struct irq_data*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct asic3*,unsigned long,int) ;
 void* FUNC_2 (struct asic3*,scalar_t__) ;
 int FUNC_3 (struct asic3*,scalar_t__,int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (unsigned int) ;
 struct asic3* FUNC_6 (struct irq_desc*) ;
 struct irq_data* FUNC_7 (struct irq_desc*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (struct irq_data*) ;

__attribute__((used)) static void FUNC_11(struct irq_desc *VAR_10)
{
 struct asic3 *VAR_11 = FUNC_6(VAR_10);
 struct irq_data *VAR_12 = FUNC_7(VAR_10);
 int VAR_13, VAR_14;
 unsigned long VAR_15;

 VAR_12->chip->irq_ack(VAR_12);

 for (VAR_13 = 0 ; VAR_13 < VAR_8; VAR_13++) {
  u32 VAR_16;
  int VAR_17;

  FUNC_8(&VAR_11->lock, VAR_15);
  VAR_16 = FUNC_2(VAR_11,
          FUNC_0(VAR_7, VAR_9));
  FUNC_9(&VAR_11->lock, VAR_15);


  if ((VAR_16 & 0x3ff) == 0)
   break;


  for (VAR_17 = 0; VAR_17 < VAR_6; VAR_17++) {
   if (VAR_16 & (1 << VAR_17)) {
    unsigned long VAR_18, VAR_19;

    VAR_18 = VAR_1
           + VAR_17 * VAR_2;
    FUNC_8(&VAR_11->lock, VAR_15);
    VAR_19 = FUNC_2(VAR_11,
           VAR_18 +
           VAR_3);

    FUNC_3(VAR_11,
           VAR_18 +
           VAR_3, 0);
    FUNC_9(&VAR_11->lock, VAR_15);

    for (VAR_14 = 0; VAR_14 < VAR_0; VAR_14++) {
     int VAR_20 = (1 << VAR_14);
     unsigned int VAR_21;

     if (!(VAR_19 & VAR_20))
      continue;

     VAR_21 = VAR_11->irq_base +
      (VAR_0 * VAR_17)
      + VAR_14;
     FUNC_5(VAR_21);
     if (VAR_11->irq_bothedge[VAR_17] & VAR_20)
      FUNC_1(VAR_11, VAR_18,
            VAR_20);
    }
   }
  }


  for (VAR_14 = VAR_5; VAR_14 < VAR_4; VAR_14++) {

   if (VAR_16 & (1 << (VAR_14 - VAR_5 + 4)))
    FUNC_5(VAR_11->irq_base + VAR_14);
  }
 }

 if (VAR_13 >= VAR_8)
  FUNC_4(VAR_11->dev, "interrupt processing overrun\n");
}
