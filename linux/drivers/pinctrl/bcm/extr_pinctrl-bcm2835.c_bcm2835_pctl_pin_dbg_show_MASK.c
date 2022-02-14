
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct pinctrl_dev {int dummy; } ;
struct TYPE_2__ {int domain; } ;
struct gpio_chip {TYPE_1__ irq; } ;
struct bcm2835_pinctrl {size_t* irq_type; struct gpio_chip gpio_chip; } ;
typedef enum bcm2835_fsel { ____Placeholder_bcm2835_fsel } bcm2835_fsel ;


 int VAR_0 ;
 char** VAR_1 ;
 int FUNC_0 (struct bcm2835_pinctrl*,int ,unsigned int) ;
 int FUNC_1 (struct bcm2835_pinctrl*,unsigned int) ;
 int FUNC_2 (int ,unsigned int) ;
 int * VAR_2 ;
 struct bcm2835_pinctrl* FUNC_3 (struct pinctrl_dev*) ;
 int FUNC_4 (struct seq_file*,char*,char const*,char*,int,int ) ;

__attribute__((used)) static void FUNC_5(struct pinctrl_dev *VAR_3,
  struct seq_file *VAR_4,
  unsigned VAR_5)
{
 struct bcm2835_pinctrl *VAR_6 = FUNC_3(VAR_3);
 struct gpio_chip *VAR_7 = &VAR_6->gpio_chip;
 enum bcm2835_fsel VAR_8 = FUNC_1(VAR_6, VAR_5);
 const char *VAR_9 = VAR_1[VAR_8];
 int VAR_10 = FUNC_0(VAR_6, VAR_0, VAR_5);
 int VAR_11 = FUNC_2(VAR_7->irq.domain, VAR_5);

 FUNC_4(VAR_4, "function %s in %s; irq %d (%s)",
  VAR_9, VAR_10 ? "hi" : "lo",
  VAR_11, VAR_2[VAR_6->irq_type[VAR_5]]);
}
