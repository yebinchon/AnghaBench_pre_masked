
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int flags; int start; } ;
struct platform_device {int dev; int name; } ;
struct net_device {unsigned long base_addr; int irq; } ;
struct ei_device {unsigned long* reg_offset; int * mem; int rxcr_base; } ;
struct ax_device {int irqflags; unsigned long* reg_offsets; int * map2; TYPE_1__* plat; } ;
struct TYPE_2__ {unsigned long* reg_offsets; int rcr_val; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct net_device*,int *) ;
 struct net_device* FUNC_1 (int) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,char*,...) ;
 TYPE_1__* FUNC_4 (int *) ;
 int FUNC_5 (struct net_device*) ;
 void* FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (int *) ;
 struct ei_device* FUNC_8 (struct net_device*) ;
 struct resource* FUNC_9 (struct platform_device*,int ,int) ;
 int FUNC_10 (struct platform_device*,struct net_device*) ;
 int FUNC_11 (int ,unsigned long) ;
 int FUNC_12 (int ,unsigned long,int ) ;
 unsigned long FUNC_13 (struct resource*) ;
 struct ax_device* FUNC_14 (struct net_device*) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_7)
{
 struct net_device *VAR_8;
 struct ei_device *VAR_9;
 struct ax_device *VAR_10;
 struct resource *VAR_11, *VAR_12, *VAR_13;
 unsigned long VAR_14, VAR_15 = 0;
 int VAR_16 = 0;

 VAR_8 = FUNC_1(sizeof(struct ax_device));
 if (VAR_8 == ((void*)0))
  return -VAR_0;


 FUNC_0(VAR_8, &VAR_7->dev);
 VAR_9 = FUNC_8(VAR_8);
 VAR_10 = FUNC_14(VAR_8);

 VAR_10->plat = FUNC_4(&VAR_7->dev);
 FUNC_10(VAR_7, VAR_8);

 VAR_9->rxcr_base = VAR_10->plat->rcr_val;


 VAR_11 = FUNC_9(VAR_7, VAR_2, 0);
 if (!VAR_11) {
  FUNC_3(&VAR_7->dev, "no IRQ specified\n");
  VAR_16 = -VAR_1;
  goto exit_mem;
 }

 VAR_8->irq = VAR_11->start;
 VAR_10->irqflags = VAR_11->flags & VAR_6;

 if (VAR_11->flags & VAR_3)
  VAR_10->irqflags |= VAR_5;

 VAR_12 = FUNC_9(VAR_7, VAR_4, 0);
 if (!VAR_12) {
  FUNC_3(&VAR_7->dev, "no MEM specified\n");
  VAR_16 = -VAR_1;
  goto exit_mem;
 }

 VAR_14 = FUNC_13(VAR_12);





 if (VAR_10->plat->reg_offsets)
  VAR_9->reg_offset = VAR_10->plat->reg_offsets;
 else {
  VAR_9->reg_offset = VAR_10->reg_offsets;
  for (VAR_16 = 0; VAR_16 < 0x18; VAR_16++)
   VAR_10->reg_offsets[VAR_16] = (VAR_14 / 0x18) * VAR_16;
 }

 if (!FUNC_12(VAR_12->start, VAR_14, VAR_7->name)) {
  FUNC_3(&VAR_7->dev, "cannot reserve registers\n");
  VAR_16 = -VAR_1;
  goto exit_mem;
 }

 VAR_9->mem = FUNC_6(VAR_12->start, VAR_14);
 VAR_8->base_addr = (unsigned long)VAR_9->mem;

 if (VAR_9->mem == ((void*)0)) {
  FUNC_3(&VAR_7->dev, "Cannot ioremap area %pR\n", VAR_12);

  VAR_16 = -VAR_1;
  goto exit_req;
 }


 VAR_13 = FUNC_9(VAR_7, VAR_4, 1);
 if (!VAR_13) {
  if (!VAR_10->plat->reg_offsets) {
   for (VAR_16 = 0; VAR_16 < 0x20; VAR_16++)
    VAR_10->reg_offsets[VAR_16] = (VAR_14 / 0x20) * VAR_16;
  }
 } else {
  VAR_15 = FUNC_13(VAR_13);

  if (!FUNC_12(VAR_13->start, VAR_15, VAR_7->name)) {
   FUNC_3(&VAR_7->dev, "cannot reserve registers\n");
   VAR_16 = -VAR_1;
   goto exit_mem1;
  }

  VAR_10->map2 = FUNC_6(VAR_13->start, VAR_15);
  if (!VAR_10->map2) {
   FUNC_3(&VAR_7->dev, "cannot map reset register\n");
   VAR_16 = -VAR_1;
   goto exit_mem2;
  }

  VAR_9->reg_offset[0x1f] = VAR_10->map2 - VAR_9->mem;
 }


 VAR_16 = FUNC_2(VAR_8);
 if (!VAR_16)
  return 0;

 if (!VAR_10->map2)
  goto exit_mem1;

 FUNC_7(VAR_10->map2);

 exit_mem2:
 if (VAR_13)
  FUNC_11(VAR_13->start, VAR_15);

 exit_mem1:
 FUNC_7(VAR_9->mem);

 exit_req:
 FUNC_11(VAR_12->start, VAR_14);

 exit_mem:
 FUNC_10(VAR_7, ((void*)0));
 FUNC_5(VAR_8);

 return VAR_16;
}
