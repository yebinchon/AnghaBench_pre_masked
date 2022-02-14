
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct msm_pingroup {int intr_detection_width; int intr_target_bit; int intr_target_kpss_val; int intr_raw_status_bit; int intr_detection_bit; int intr_polarity_bit; } ;
struct msm_pinctrl {int lock; int dual_edge_irqs; TYPE_1__* soc; } ;
struct irq_data {size_t hwirq; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_2__ {struct msm_pingroup* groups; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;





 int FUNC_2 (size_t,int ) ;
 struct msm_pinctrl* FUNC_3 (struct gpio_chip*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct gpio_chip* FUNC_4 (struct irq_data*) ;
 int FUNC_5 (struct irq_data*,int ) ;
 int FUNC_6 (struct msm_pinctrl*,struct msm_pingroup const*,struct irq_data*) ;
 int FUNC_7 (struct msm_pinctrl*,struct msm_pingroup const*) ;
 int FUNC_8 (struct msm_pinctrl*,struct msm_pingroup const*) ;
 int FUNC_9 (int,struct msm_pinctrl*,struct msm_pingroup const*) ;
 int FUNC_10 (int,struct msm_pinctrl*,struct msm_pingroup const*) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (size_t,int ) ;
 scalar_t__ FUNC_14 (size_t,int ) ;

__attribute__((used)) static int FUNC_15(struct irq_data *VAR_2, unsigned int VAR_3)
{
 struct gpio_chip *VAR_4 = FUNC_4(VAR_2);
 struct msm_pinctrl *VAR_5 = FUNC_3(VAR_4);
 const struct msm_pingroup *VAR_6;
 unsigned long VAR_7;
 u32 VAR_8;

 VAR_6 = &VAR_5->soc->groups[VAR_2->hwirq];

 FUNC_11(&VAR_5->lock, VAR_7);




 if (VAR_6->intr_detection_width == 1 && VAR_3 == 132)
  FUNC_13(VAR_2->hwirq, VAR_5->dual_edge_irqs);
 else
  FUNC_2(VAR_2->hwirq, VAR_5->dual_edge_irqs);


 VAR_8 = FUNC_8(VAR_5, VAR_6);
 VAR_8 &= ~(7 << VAR_6->intr_target_bit);
 VAR_8 |= VAR_6->intr_target_kpss_val << VAR_6->intr_target_bit;
 FUNC_10(VAR_8, VAR_5, VAR_6);






 VAR_8 = FUNC_7(VAR_5, VAR_6);
 VAR_8 |= FUNC_0(VAR_6->intr_raw_status_bit);
 if (VAR_6->intr_detection_width == 2) {
  VAR_8 &= ~(3 << VAR_6->intr_detection_bit);
  VAR_8 &= ~(1 << VAR_6->intr_polarity_bit);
  switch (VAR_3) {
  case 130:
   VAR_8 |= 1 << VAR_6->intr_detection_bit;
   VAR_8 |= FUNC_0(VAR_6->intr_polarity_bit);
   break;
  case 131:
   VAR_8 |= 2 << VAR_6->intr_detection_bit;
   VAR_8 |= FUNC_0(VAR_6->intr_polarity_bit);
   break;
  case 132:
   VAR_8 |= 3 << VAR_6->intr_detection_bit;
   VAR_8 |= FUNC_0(VAR_6->intr_polarity_bit);
   break;
  case 128:
   break;
  case 129:
   VAR_8 |= FUNC_0(VAR_6->intr_polarity_bit);
   break;
  }
 } else if (VAR_6->intr_detection_width == 1) {
  VAR_8 &= ~(1 << VAR_6->intr_detection_bit);
  VAR_8 &= ~(1 << VAR_6->intr_polarity_bit);
  switch (VAR_3) {
  case 130:
   VAR_8 |= FUNC_0(VAR_6->intr_detection_bit);
   VAR_8 |= FUNC_0(VAR_6->intr_polarity_bit);
   break;
  case 131:
   VAR_8 |= FUNC_0(VAR_6->intr_detection_bit);
   break;
  case 132:
   VAR_8 |= FUNC_0(VAR_6->intr_detection_bit);
   VAR_8 |= FUNC_0(VAR_6->intr_polarity_bit);
   break;
  case 128:
   break;
  case 129:
   VAR_8 |= FUNC_0(VAR_6->intr_polarity_bit);
   break;
  }
 } else {
  FUNC_1();
 }
 FUNC_9(VAR_8, VAR_5, VAR_6);

 if (FUNC_14(VAR_2->hwirq, VAR_5->dual_edge_irqs))
  FUNC_6(VAR_5, VAR_6, VAR_2);

 FUNC_12(&VAR_5->lock, VAR_7);

 if (VAR_3 & (128 | 129))
  FUNC_5(VAR_2, VAR_1);
 else if (VAR_3 & (131 | 130))
  FUNC_5(VAR_2, VAR_0);

 return 0;
}
