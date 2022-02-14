
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_pingroup {int in_bit; int intr_polarity_bit; } ;
struct msm_pinctrl {int dev; } ;
struct irq_data {int dummy; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,unsigned int,unsigned int) ;
 unsigned int FUNC_2 (struct msm_pinctrl*,struct msm_pingroup const*) ;
 unsigned int FUNC_3 (struct msm_pinctrl*,struct msm_pingroup const*) ;
 unsigned int FUNC_4 (struct msm_pinctrl*,struct msm_pingroup const*) ;
 int FUNC_5 (unsigned int,struct msm_pinctrl*,struct msm_pingroup const*) ;

__attribute__((used)) static void FUNC_6(struct msm_pinctrl *VAR_0,
       const struct msm_pingroup *VAR_1,
       struct irq_data *VAR_2)
{
 int VAR_3 = 100;
 unsigned VAR_4, VAR_5, VAR_6;
 unsigned VAR_7;

 do {
  VAR_4 = FUNC_4(VAR_0, VAR_1) & FUNC_0(VAR_1->in_bit);

  VAR_7 = FUNC_2(VAR_0, VAR_1);
  VAR_7 ^= FUNC_0(VAR_1->intr_polarity_bit);
  FUNC_5(VAR_4, VAR_0, VAR_1);

  VAR_5 = FUNC_4(VAR_0, VAR_1) & FUNC_0(VAR_1->in_bit);
  VAR_6 = FUNC_3(VAR_0, VAR_1);
  if (VAR_6 || (VAR_4 == VAR_5))
   return;
 } while (VAR_3-- > 0);
 FUNC_1(VAR_0->dev, "dual-edge irq failed to stabilize, %#08x != %#08x\n",
  VAR_4, VAR_5);
}
