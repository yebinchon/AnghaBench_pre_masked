
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {unsigned int hwirq; } ;
struct iproc_gpio {int dev; int lock; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 unsigned int VAR_4 ;
 int FUNC_0 (int ,char*,unsigned int,int,int,int) ;
 int FUNC_1 (int ,char*,unsigned int) ;
 struct iproc_gpio* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (struct iproc_gpio*,int ,unsigned int,int) ;
 struct gpio_chip* FUNC_4 (struct irq_data*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct irq_data *VAR_5, unsigned int VAR_6)
{
 struct gpio_chip *VAR_7 = FUNC_4(VAR_5);
 struct iproc_gpio *VAR_8 = FUNC_2(VAR_7);
 unsigned VAR_9 = VAR_5->hwirq;
 bool VAR_10 = 0;
 bool VAR_11 = 0;
 bool VAR_12 = 0;
 unsigned long VAR_13;

 switch (VAR_6 & VAR_4) {
 case 130:
  VAR_12 = 1;
  break;

 case 131:
  break;

 case 132:
  VAR_11 = 1;
  break;

 case 129:
  VAR_10 = 1;
  VAR_12 = 1;
  break;

 case 128:
  VAR_10 = 1;
  break;

 default:
  FUNC_1(VAR_8->dev, "invalid GPIO IRQ type 0x%x\n",
   VAR_6);
  return -VAR_0;
 }

 FUNC_5(&VAR_8->lock, VAR_13);
 FUNC_3(VAR_8, VAR_3, VAR_9,
         VAR_10);
 FUNC_3(VAR_8, VAR_1, VAR_9, VAR_11);
 FUNC_3(VAR_8, VAR_2, VAR_9,
         VAR_12);
 FUNC_6(&VAR_8->lock, VAR_13);

 FUNC_0(VAR_8->dev,
  "gpio:%u level_triggered:%d dual_edge:%d rising_or_high:%d\n",
  VAR_9, VAR_10, VAR_11, VAR_12);

 return 0;
}
