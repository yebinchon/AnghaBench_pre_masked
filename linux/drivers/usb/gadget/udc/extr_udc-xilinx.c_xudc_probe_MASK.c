
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_17__ {int dev; int name; int * ep0; int speed; int max_speed; int * ops; } ;
struct xusb_udc {scalar_t__ (* read_fn ) (scalar_t__) ;scalar_t__ dma_enabled; scalar_t__ addr; int (* write_fn ) (scalar_t__,scalar_t__,int) ;TYPE_5__ gadget; int * dev; int lock; TYPE_3__* ep; TYPE_2__* req; } ;
struct xusb_req {int dummy; } ;
struct resource {scalar_t__ start; } ;
struct TYPE_16__ {struct device_node* of_node; } ;
struct platform_device {TYPE_4__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_15__ {int ep_usb; } ;
struct TYPE_13__ {int * buf; } ;
struct TYPE_14__ {TYPE_1__ usb_req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_2 (TYPE_4__*,char*,int) ;
 int FUNC_3 (TYPE_4__*,char*,int) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,char*,int ,int,scalar_t__,char*) ;
 scalar_t__ FUNC_6 (TYPE_4__*,struct resource*) ;
 void* FUNC_7 (TYPE_4__*,int,int ) ;
 int FUNC_8 (TYPE_4__*,int,int ,int ,int ,struct xusb_udc*) ;
 int VAR_17 ;
 scalar_t__ FUNC_9 (struct device_node*,char*) ;
 int FUNC_10 (struct platform_device*,int ) ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;
 int FUNC_12 (struct platform_device*,struct xusb_udc*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 int FUNC_16 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_17 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_18 (scalar_t__,scalar_t__,int) ;
 int FUNC_19 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_20 (struct xusb_udc*) ;
 int VAR_18 ;
 scalar_t__ FUNC_21 (scalar_t__) ;
 scalar_t__ FUNC_22 (scalar_t__) ;
 int FUNC_23 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_24 (scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_19 ;

__attribute__((used)) static int FUNC_25(struct platform_device *VAR_20)
{
 struct device_node *VAR_21 = VAR_20->dev.of_node;
 struct resource *VAR_22;
 struct xusb_udc *VAR_23;
 int VAR_24;
 int VAR_25;
 u32 VAR_26;
 u8 *VAR_27;

 VAR_23 = FUNC_7(&VAR_20->dev, sizeof(*VAR_23), VAR_1);
 if (!VAR_23)
  return -VAR_0;


 VAR_23->req = FUNC_7(&VAR_20->dev, sizeof(struct xusb_req),
    VAR_1);
 if (!VAR_23->req)
  return -VAR_0;

 VAR_27 = FUNC_7(&VAR_20->dev, VAR_3, VAR_1);
 if (!VAR_27)
  return -VAR_0;

 VAR_23->req->usb_req.buf = VAR_27;


 VAR_22 = FUNC_11(VAR_20, VAR_2, 0);
 VAR_23->addr = FUNC_6(&VAR_20->dev, VAR_22);
 if (FUNC_0(VAR_23->addr))
  return FUNC_1(VAR_23->addr);

 VAR_24 = FUNC_10(VAR_20, 0);
 if (VAR_24 < 0)
  return VAR_24;
 VAR_25 = FUNC_8(&VAR_20->dev, VAR_24, VAR_18, 0,
          FUNC_4(&VAR_20->dev), VAR_23);
 if (VAR_25 < 0) {
  FUNC_2(&VAR_20->dev, "unable to request irq %d", VAR_24);
  goto fail;
 }

 VAR_23->dma_enabled = FUNC_9(VAR_21, "xlnx,has-builtin-dma");


 VAR_23->gadget.ops = &VAR_19;
 VAR_23->gadget.max_speed = VAR_5;
 VAR_23->gadget.speed = VAR_6;
 VAR_23->gadget.ep0 = &VAR_23->ep[VAR_8].ep_usb;
 VAR_23->gadget.name = VAR_17;

 FUNC_13(&VAR_23->lock);


 VAR_23->write_fn = FUNC_24;
 VAR_23->read_fn = FUNC_22;
 VAR_23->write_fn(VAR_23->addr, VAR_16, VAR_4);
 if ((VAR_23->read_fn(VAR_23->addr + VAR_16))
   != VAR_4) {
  VAR_23->write_fn = FUNC_23;
  VAR_23->read_fn = FUNC_21;
 }
 VAR_23->write_fn(VAR_23->addr, VAR_16, 0);

 FUNC_20(VAR_23);


 VAR_23->write_fn(VAR_23->addr, VAR_7, 0);

 VAR_25 = FUNC_19(&VAR_20->dev, &VAR_23->gadget);
 if (VAR_25)
  goto fail;

 VAR_23->dev = &VAR_23->gadget.dev;


 VAR_26 = VAR_12 | VAR_14 |
       VAR_11 | VAR_10 |
       VAR_15 |
       VAR_13;

 VAR_23->write_fn(VAR_23->addr, VAR_9, VAR_26);

 FUNC_12(VAR_20, VAR_23);

 FUNC_5(&VAR_20->dev, "%s at 0x%08X mapped to %p %s\n",
   VAR_17, (u32)VAR_22->start, VAR_23->addr,
   VAR_23->dma_enabled ? "with DMA" : "without DMA");

 return 0;
fail:
 FUNC_3(&VAR_20->dev, "probe failed, %d\n", VAR_25);
 return VAR_25;
}
