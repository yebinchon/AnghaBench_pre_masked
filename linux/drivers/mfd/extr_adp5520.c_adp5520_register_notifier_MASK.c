
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct device {int dummy; } ;
struct adp5520_chip {int notifier_list; int dev; scalar_t__ irq; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,unsigned int) ;
 int FUNC_1 (int *,struct notifier_block*) ;
 struct adp5520_chip* FUNC_2 (struct device*) ;

int FUNC_3(struct device *VAR_6, struct notifier_block *VAR_7,
    unsigned int VAR_8)
{
 struct adp5520_chip *VAR_9 = FUNC_2(VAR_6);

 if (VAR_9->irq) {
  FUNC_0(VAR_9->dev, VAR_1,
   VAR_8 & (VAR_2 | VAR_3 |
   VAR_4 | VAR_0));

  return FUNC_1(&VAR_9->notifier_list,
    VAR_7);
 }

 return -VAR_5;
}
