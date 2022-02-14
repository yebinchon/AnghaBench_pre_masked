
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int of_node; } ;
struct platform_device {TYPE_3__ dev; } ;
struct gpio_chip {char* label; int of_node; scalar_t__ base; TYPE_3__* parent; int ngpio; } ;
struct ocelot_pinctrl {TYPE_2__* dev; TYPE_1__* desc; struct gpio_chip gpio_chip; } ;
struct TYPE_5__ {int of_node; } ;
struct TYPE_4__ {int npins; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,struct gpio_chip*,struct ocelot_pinctrl*) ;
 int FUNC_1 (struct gpio_chip*,int *,int ,int ,int ) ;
 int FUNC_2 (struct gpio_chip*,int *,int,int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 struct gpio_chip VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_5,
        struct ocelot_pinctrl *VAR_6)
{
 struct gpio_chip *VAR_7;
 int VAR_8, VAR_9;

 VAR_6->gpio_chip = VAR_2;

 VAR_7 = &VAR_6->gpio_chip;
 VAR_7->ngpio = VAR_6->desc->npins;
 VAR_7->parent = &VAR_5->dev;
 VAR_7->base = 0;
 VAR_7->of_node = VAR_6->dev->of_node;
 VAR_7->label = "ocelot-gpio";

 VAR_8 = FUNC_0(&VAR_5->dev, VAR_7, VAR_6);
 if (VAR_8)
  return VAR_8;

 VAR_9 = FUNC_3(VAR_5->dev.of_node, 0);
 if (VAR_9 <= 0)
  return VAR_9;

 VAR_8 = FUNC_1(VAR_7, &VAR_4, 0, VAR_1,
       VAR_0);
 if (VAR_8)
  return VAR_8;

 FUNC_2(VAR_7, &VAR_4, VAR_9,
         VAR_3);

 return 0;
}
