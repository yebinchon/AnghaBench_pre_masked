
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int tmp ;
struct TYPE_4__ {int max_speed; int name; int dev; int * ops; } ;
struct udc {int irq; scalar_t__ chiprev; TYPE_1__* regs; TYPE_2__ gadget; int dev; int phys_addr; } ;
struct TYPE_3__ {int ctl; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,char*,...) ;
 int FUNC_3 (int *,char*) ;
 int VAR_6 ;
 char* VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct udc*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int,char*,int) ;
 int FUNC_7 (struct udc*) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (int *,int ,int ) ;
 struct udc* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_10 (int ,TYPE_2__*,int ) ;
 int FUNC_11 (int ,int *) ;

int FUNC_12(struct udc *VAR_15)
{
 char VAR_16[128];
 u32 VAR_17;
 int VAR_18;


 VAR_15->gadget.ops = &VAR_10;

 FUNC_3(&VAR_15->gadget.dev, "gadget");
 VAR_15->gadget.name = VAR_8;
 VAR_15->gadget.max_speed = VAR_5;


 FUNC_7(VAR_15);

 FUNC_2(VAR_15->dev, "%s\n", VAR_7);

 FUNC_6(VAR_16, sizeof(VAR_16), "%d", VAR_15->irq);


 if (VAR_15->chiprev == VAR_3 ||
     VAR_15->chiprev == VAR_4) {
  FUNC_2(VAR_15->dev, "irq %s, pci mem %08lx, chip rev %02x(Geode5536 %s)\n",
    VAR_16, VAR_15->phys_addr, VAR_15->chiprev,
    (VAR_15->chiprev == VAR_3) ?
    "A0" : "B1");
  FUNC_8(VAR_16, VAR_2);
  if (VAR_15->chiprev == VAR_3) {
   FUNC_1(VAR_15->dev, "chip revision is A0; too old\n");
   VAR_18 = -VAR_0;
   goto finished;
  }
  FUNC_2(VAR_15->dev,
    "driver version: %s(for Geode5536 B1)\n", VAR_16);
 }

 VAR_9 = VAR_15;

 VAR_18 = FUNC_10(VAR_9->dev, &VAR_15->gadget,
         VAR_6);
 if (VAR_18)
  goto finished;


 FUNC_9(&VAR_13, VAR_14, 0);
 FUNC_9(&VAR_11, VAR_12, 0);


 VAR_17 = FUNC_5(&VAR_15->regs->ctl);
 VAR_17 |= FUNC_0(VAR_1);
 FUNC_11(VAR_17, &VAR_15->regs->ctl);


 FUNC_4(VAR_15);

 return 0;

finished:
 return VAR_18;
}
