
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct resource {int start; } ;
struct TYPE_4__ {int platform_data; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_3__ {TYPE_2__* parent; } ;
struct pcmcia_socket {int features; unsigned long io_offset; void* map_size; scalar_t__ cb_dev; int pci_irq; TYPE_1__ dev; int owner; int * ops; int * resource_ops; struct bcm63xx_pcmcia_socket* driver_data; } ;
struct bcm63xx_pcmcia_socket {struct resource* reg_res; void* base; void* io_base; int timer; struct resource* common_res; int pd; void* attr_res; struct pcmcia_socket socket; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 void* FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (void*) ;
 scalar_t__ VAR_22 ;
 int FUNC_2 (struct bcm63xx_pcmcia_socket*) ;
 struct bcm63xx_pcmcia_socket* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_23 ;
 int FUNC_6 (struct bcm63xx_pcmcia_socket*,int ) ;
 int FUNC_7 (struct pcmcia_socket*) ;
 int FUNC_8 (struct bcm63xx_pcmcia_socket*,int,int ) ;
 void* FUNC_9 (struct platform_device*,int ,int) ;
 int FUNC_10 (struct platform_device*,struct bcm63xx_pcmcia_socket*) ;
 int FUNC_11 (int ,unsigned int) ;
 int FUNC_12 (int ,unsigned int,char*) ;
 void* FUNC_13 (struct resource*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_24)
{
 struct bcm63xx_pcmcia_socket *VAR_25;
 struct pcmcia_socket *VAR_26;
 struct resource *VAR_27, *VAR_28;
 unsigned int VAR_29 = 0, VAR_30 = 0;
 u32 VAR_31;
 int VAR_32;

 VAR_25 = FUNC_3(sizeof(*VAR_25), VAR_3);
 if (!VAR_25)
  return -VAR_2;
 FUNC_14(&VAR_25->lock);
 VAR_26 = &VAR_25->socket;
 VAR_26->driver_data = VAR_25;


 VAR_25->common_res = FUNC_9(VAR_24, VAR_5, 1);
 VAR_25->attr_res = FUNC_9(VAR_24, VAR_5, 2);
 VAR_28 = FUNC_9(VAR_24, VAR_4, 0);
 VAR_25->pd = VAR_24->dev.platform_data;
 if (!VAR_25->common_res || !VAR_25->attr_res || !VAR_28 || !VAR_25->pd) {
  VAR_32 = -VAR_1;
  goto err;
 }


 VAR_27 = FUNC_9(VAR_24, VAR_5, 0);
 VAR_29 = FUNC_13(VAR_27);
 if (!FUNC_12(VAR_27->start, VAR_29, "bcm63xx_pcmcia")) {
  VAR_32 = -VAR_1;
  goto err;
 }
 VAR_25->reg_res = VAR_27;

 VAR_25->base = FUNC_0(VAR_27->start, VAR_29);
 if (!VAR_25->base) {
  VAR_32 = -VAR_2;
  goto err;
 }


 VAR_27 = FUNC_9(VAR_24, VAR_5, 3);
 VAR_30 = FUNC_13(VAR_27);
 VAR_25->io_base = FUNC_0(VAR_27->start, VAR_30);
 if (!VAR_25->io_base) {
  VAR_32 = -VAR_2;
  goto err;
 }


 VAR_26->resource_ops = &VAR_23;
 VAR_26->ops = &VAR_20;
 VAR_26->owner = VAR_18;
 VAR_26->dev.parent = &VAR_24->dev;
 VAR_26->features = VAR_17 | VAR_16;
 VAR_26->io_offset = (unsigned long)VAR_25->io_base;
 VAR_26->pci_irq = VAR_28->start;
 VAR_26->map_size = FUNC_13(VAR_25->common_res);


 FUNC_15(&VAR_25->timer, VAR_21, 0);




 VAR_31 = FUNC_6(VAR_25, VAR_8);
 VAR_31 &= VAR_6;
 VAR_31 |= VAR_7;
 FUNC_8(VAR_25, VAR_31, VAR_8);






 VAR_31 = VAR_9;
 VAR_31 |= 10 << VAR_13;
 VAR_31 |= 6 << VAR_11;
 VAR_31 |= 3 << VAR_14;
 VAR_31 |= 3 << VAR_10;
 FUNC_8(VAR_25, VAR_31, VAR_12);

 VAR_32 = FUNC_7(VAR_26);
 if (VAR_32)
  goto err;


 FUNC_4(&VAR_25->timer,
    VAR_22 + FUNC_5(VAR_0));

 FUNC_10(VAR_24, VAR_25);
 return 0;

err:
 if (VAR_25->io_base)
  FUNC_1(VAR_25->io_base);
 if (VAR_25->base)
  FUNC_1(VAR_25->base);
 if (VAR_25->reg_res)
  FUNC_11(VAR_25->reg_res->start, VAR_29);
 FUNC_2(VAR_25);
 return VAR_32;
}
