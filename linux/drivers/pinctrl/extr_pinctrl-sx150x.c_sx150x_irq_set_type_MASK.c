
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sx150x_pinctrl {int dummy; } ;
struct irq_data {unsigned int hwirq; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 struct sx150x_pinctrl* FUNC_0 (int ) ;
 int FUNC_1 (struct irq_data*) ;
 int FUNC_2 (struct sx150x_pinctrl*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct irq_data *VAR_7, unsigned int VAR_8)
{
 struct sx150x_pinctrl *VAR_9 =
   FUNC_0(FUNC_1(VAR_7));
 unsigned int VAR_10, VAR_11 = 0;

 if (VAR_8 & (VAR_3 | VAR_4))
  return -VAR_0;

 VAR_10 = VAR_7->hwirq;

 if (VAR_8 & VAR_2)
  VAR_11 |= VAR_6;
 if (VAR_8 & VAR_1)
  VAR_11 |= VAR_5;

 FUNC_2(VAR_9, VAR_10, VAR_11);
 return 0;
}
