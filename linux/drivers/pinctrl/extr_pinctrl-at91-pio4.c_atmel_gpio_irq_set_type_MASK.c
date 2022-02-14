
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {size_t hwirq; } ;
struct atmel_pioctrl {struct atmel_pin** pins; } ;
struct atmel_pin {int bank; int line; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_8 ;






 unsigned int FUNC_1 (struct atmel_pioctrl*,int ,int ) ;
 int FUNC_2 (struct atmel_pioctrl*,int ,int ,unsigned int) ;
 int VAR_9 ;
 int VAR_10 ;
 struct atmel_pioctrl* FUNC_3 (struct irq_data*) ;
 int FUNC_4 (struct irq_data*,int ) ;

__attribute__((used)) static int FUNC_5(struct irq_data *VAR_11, unsigned VAR_12)
{
 struct atmel_pioctrl *VAR_13 = FUNC_3(VAR_11);
 struct atmel_pin *VAR_14 = VAR_13->pins[VAR_11->hwirq];
 unsigned VAR_15;

 FUNC_2(VAR_13, VAR_14->bank, VAR_7,
    FUNC_0(VAR_14->line));
 VAR_15 = FUNC_1(VAR_13, VAR_14->bank, VAR_0);
 VAR_15 &= (~VAR_5);

 switch (VAR_12) {
 case 131:
  FUNC_4(VAR_11, VAR_9);
  VAR_15 |= VAR_6;
  break;
 case 132:
  FUNC_4(VAR_11, VAR_9);
  VAR_15 |= VAR_2;
  break;
 case 133:
  FUNC_4(VAR_11, VAR_9);
  VAR_15 |= VAR_1;
  break;
 case 129:
  FUNC_4(VAR_11, VAR_10);
  VAR_15 |= VAR_4;
  break;
 case 130:
  FUNC_4(VAR_11, VAR_10);
  VAR_15 |= VAR_3;
  break;
 case 128:
 default:
  return -VAR_8;
 }

 FUNC_2(VAR_13, VAR_14->bank, VAR_0, VAR_15);

 return 0;
}
