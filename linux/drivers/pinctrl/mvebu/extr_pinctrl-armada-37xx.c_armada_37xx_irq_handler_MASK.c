
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct irq_domain {int revmap_size; } ;
struct irq_desc {int dummy; } ;
struct irq_chip {int dummy; } ;
struct TYPE_2__ {struct irq_domain* domain; } ;
struct gpio_chip {TYPE_1__ irq; } ;
struct armada_37xx_pinctrl {int irq_lock; scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct armada_37xx_pinctrl*,int) ;
 int FUNC_1 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_2 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 struct armada_37xx_pinctrl* FUNC_5 (struct gpio_chip*) ;
 struct irq_chip* FUNC_6 (struct irq_desc*) ;
 struct gpio_chip* FUNC_7 (struct irq_desc*) ;
 int FUNC_8 (struct irq_domain*,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_14(struct irq_desc *VAR_5)
{
 struct gpio_chip *VAR_6 = FUNC_7(VAR_5);
 struct irq_chip *VAR_7 = FUNC_6(VAR_5);
 struct armada_37xx_pinctrl *VAR_8 = FUNC_5(VAR_6);
 struct irq_domain *VAR_9 = VAR_6->irq.domain;
 int VAR_10;

 FUNC_1(VAR_7, VAR_5);
 for (VAR_10 = 0; VAR_10 <= VAR_9->revmap_size / VAR_0; VAR_10++) {
  u32 VAR_11;
  unsigned long VAR_12;

  FUNC_11(&VAR_8->irq_lock, VAR_12);
  VAR_11 = FUNC_10(VAR_8->base + VAR_2 + 4 * VAR_10);

  VAR_11 &= FUNC_10(VAR_8->base + VAR_1 + 4 * VAR_10);
  FUNC_12(&VAR_8->irq_lock, VAR_12);
  while (VAR_11) {
   u32 VAR_13 = FUNC_3(VAR_11) - 1;
   u32 VAR_14 = FUNC_8(VAR_9, VAR_13 +
           VAR_10 * VAR_0);
   u32 VAR_15 = FUNC_9(VAR_14);

   if ((VAR_15 & VAR_4) == VAR_3) {

    if (FUNC_0(VAR_8,
     VAR_13 + VAR_10 * VAR_0)) {





     FUNC_13(1 << VAR_13,
            VAR_8->base +
            VAR_2 + 4 * VAR_10);
     goto update_status;
    }
   }

   FUNC_4(VAR_14);

update_status:

   FUNC_11(&VAR_8->irq_lock, VAR_12);
   VAR_11 = FUNC_10(VAR_8->base +
            VAR_2 + 4 * VAR_10);

   VAR_11 &= FUNC_10(VAR_8->base + VAR_1 + 4 * VAR_10);
   FUNC_12(&VAR_8->irq_lock, VAR_12);
  }
 }
 FUNC_2(VAR_7, VAR_5);
}
