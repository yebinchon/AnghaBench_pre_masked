
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; int max_speed; int speed; int * ops; } ;
struct isp1760_udc {int irq; int irqname; TYPE_1__ gadget; int vbus_timer; int lock; int regs; struct isp1760_device* isp; } ;
struct isp1760_device {int dev; int regs; struct isp1760_udc udc; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,struct isp1760_udc*) ;
 int FUNC_2 (struct isp1760_udc*) ;
 int FUNC_3 (struct isp1760_udc*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int ,unsigned long,int ,struct isp1760_udc*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int ,TYPE_1__*) ;

int FUNC_10(struct isp1760_device *VAR_8, int VAR_9,
    unsigned long VAR_10)
{
 struct isp1760_udc *VAR_11 = &VAR_8->udc;
 int VAR_12;

 VAR_11->irq = -1;
 VAR_11->isp = VAR_8;
 VAR_11->regs = VAR_8->regs;

 FUNC_7(&VAR_11->lock);
 FUNC_8(&VAR_11->vbus_timer, VAR_7, 0);

 VAR_12 = FUNC_2(VAR_11);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_11->irqname = FUNC_4(VAR_1, "%s (udc)", FUNC_0(VAR_8->dev));
 if (!VAR_11->irqname)
  return -VAR_0;

 VAR_12 = FUNC_6(VAR_9, VAR_5, VAR_2 | VAR_10,
     VAR_11->irqname, VAR_11);
 if (VAR_12 < 0)
  goto error;

 VAR_11->irq = VAR_9;






 VAR_11->gadget.ops = &VAR_6;
 VAR_11->gadget.speed = VAR_4;
 VAR_11->gadget.max_speed = VAR_3;
 VAR_11->gadget.name = "isp1761_udc";

 FUNC_3(VAR_11);

 VAR_12 = FUNC_9(VAR_8->dev, &VAR_11->gadget);
 if (VAR_12 < 0)
  goto error;

 return 0;

error:
 if (VAR_11->irq >= 0)
  FUNC_1(VAR_11->irq, VAR_11);
 FUNC_5(VAR_11->irqname);

 return VAR_12;
}
