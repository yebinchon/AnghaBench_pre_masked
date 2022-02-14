
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct resource {int start; } ;
struct platform_device {int dummy; } ;
struct gpio_desc {int dummy; } ;
struct device {int of_node; } ;
struct atmel_nand_controller {struct device* dev; } ;
struct atmel_nand {int numcs; int base; struct gpio_desc* cdgpio; TYPE_3__* cs; } ;
struct TYPE_5__ {struct gpio_desc* gpio; int type; } ;
struct TYPE_4__ {int dma; struct gpio_desc* virt; } ;
struct TYPE_6__ {int id; struct gpio_desc* csgpio; TYPE_2__ rb; TYPE_1__ io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct gpio_desc*) ;
 int FUNC_1 (struct gpio_desc*) ;
 int FUNC_2 (struct atmel_nand_controller*,struct atmel_nand*) ;
 int FUNC_3 (struct device*,char*,int) ;
 struct gpio_desc* FUNC_4 (struct device*,int *,int,int ) ;
 struct gpio_desc* FUNC_5 (struct device*,struct resource*) ;
 struct atmel_nand* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (int *,int ) ;
 struct resource* FUNC_8 (struct platform_device*,int ,int ) ;
 struct platform_device* FUNC_9 (struct device*) ;

__attribute__((used)) static int
FUNC_10(struct atmel_nand_controller *VAR_6)
{
 struct device *VAR_7 = VAR_6->dev;
 struct platform_device *VAR_8 = FUNC_9(VAR_7);
 struct atmel_nand *VAR_9;
 struct gpio_desc *VAR_10;
 struct resource *VAR_11;





 VAR_9 = FUNC_6(VAR_6->dev, sizeof(*VAR_9) + sizeof(*VAR_9->cs),
       VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->numcs = 1;

 VAR_11 = FUNC_8(VAR_8, VAR_5, 0);
 VAR_9->cs[0].io.virt = FUNC_5(VAR_7, VAR_11);
 if (FUNC_0(VAR_9->cs[0].io.virt))
  return FUNC_1(VAR_9->cs[0].io.virt);

 VAR_9->cs[0].io.dma = VAR_11->start;
 VAR_9->cs[0].id = 3;


 VAR_10 = FUNC_4(VAR_7, ((void*)0), 0, VAR_3);
 if (FUNC_0(VAR_10)) {
  FUNC_3(VAR_7, "Failed to get R/B gpio (err = %ld)\n",
   FUNC_1(VAR_10));
  return FUNC_1(VAR_10);
 }

 if (VAR_10) {
  VAR_9->cs[0].rb.type = VAR_0;
  VAR_9->cs[0].rb.gpio = VAR_10;
 }


 VAR_10 = FUNC_4(VAR_7, ((void*)0), 1, VAR_4);
 if (FUNC_0(VAR_10)) {
  FUNC_3(VAR_7, "Failed to get CS gpio (err = %ld)\n",
   FUNC_1(VAR_10));
  return FUNC_1(VAR_10);
 }

 VAR_9->cs[0].csgpio = VAR_10;


 VAR_10 = FUNC_4(VAR_6->dev, ((void*)0), 2, VAR_3);
 if (FUNC_0(VAR_10)) {
  FUNC_3(VAR_7,
   "Failed to get detect gpio (err = %ld)\n",
   FUNC_1(VAR_10));
  return FUNC_1(VAR_10);
 }

 VAR_9->cdgpio = VAR_10;

 FUNC_7(&VAR_9->base, VAR_6->dev->of_node);

 return FUNC_2(VAR_6, VAR_9);
}
