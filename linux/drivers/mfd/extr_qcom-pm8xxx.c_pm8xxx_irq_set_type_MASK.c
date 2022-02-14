
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pm_irq_chip {int* config; } ;
struct irq_data {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct pm_irq_chip* FUNC_0 (struct irq_data*) ;
 unsigned int FUNC_1 (struct irq_data*) ;
 int FUNC_2 (struct pm_irq_chip*,int,int) ;

__attribute__((used)) static int FUNC_3(struct irq_data *VAR_9, unsigned int VAR_10)
{
 struct pm_irq_chip *VAR_11 = FUNC_0(VAR_9);
 unsigned int VAR_12 = FUNC_1(VAR_9);
 int VAR_13;
 u8 VAR_14, VAR_15;

 VAR_14 = VAR_12 / 8;
 VAR_13 = VAR_12 % 8;

 VAR_11->config[VAR_12] = (VAR_13 << VAR_3)
       | VAR_6;
 if (VAR_10 & (VAR_2 | VAR_0)) {
  if (VAR_10 & VAR_2)
   VAR_11->config[VAR_12] &= ~VAR_8;
  if (VAR_10 & VAR_0)
   VAR_11->config[VAR_12] &= ~VAR_7;
 } else {
  VAR_11->config[VAR_12] |= VAR_5;

  if (VAR_10 & VAR_1)
   VAR_11->config[VAR_12] &= ~VAR_8;
  else
   VAR_11->config[VAR_12] &= ~VAR_7;
 }

 VAR_15 = VAR_11->config[VAR_12] | VAR_4;
 return FUNC_2(VAR_11, VAR_14, VAR_15);
}
