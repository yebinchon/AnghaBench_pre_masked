
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int max_speed; int speed; char* name; int sg_supported; int quirk_avoids_skb_reserve; int ep_list; int * ops; } ;
struct cdns3_device {int onchip_buffers; int setup_dma; int setup_buf; int sysdev; void* zlp_buf; int dev; TYPE_2__ gadget; void* dev_ver; TYPE_1__* regs; int aligned_buf_list; int aligned_buf_wq; int pending_status_wq; int lock; } ;
struct cdns3 {struct cdns3_device* gadget_dev; int dev; TYPE_1__* dev_regs; } ;
struct TYPE_3__ {int usb_cap2; int usb_cap1; int usb_cap6; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (void*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int) ;




 int VAR_4 ;
 int FUNC_4 (struct cdns3_device*) ;
 int VAR_5 ;
 int FUNC_5 (struct cdns3_device*) ;
 int VAR_6 ;
 int FUNC_6 (int ,char*,void*) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (int ,char*,int*) ;
 int FUNC_9 (int ,int,int *,int ) ;
 int FUNC_10 (int ,int,int ,int ) ;
 int FUNC_11 (void*) ;
 void* FUNC_12 (int,int ) ;
 void* FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,TYPE_2__*) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static int FUNC_17(struct cdns3 *VAR_7)
{
 struct cdns3_device *VAR_8;
 u32 VAR_9;
 int VAR_10;

 VAR_8 = FUNC_12(sizeof(*VAR_8), VAR_3);
 if (!VAR_8)
  return -VAR_1;

 VAR_7->gadget_dev = VAR_8;
 VAR_8->sysdev = VAR_7->dev;
 VAR_8->dev = VAR_7->dev;
 VAR_8->regs = VAR_7->dev_regs;

 FUNC_8(VAR_8->dev, "cdns,on-chip-buff-size",
     &VAR_8->onchip_buffers);

 if (VAR_8->onchip_buffers <= 0) {
  u32 VAR_11 = FUNC_13(&VAR_8->regs->usb_cap2);

  VAR_8->onchip_buffers = FUNC_3(VAR_11);
 }

 if (!VAR_8->onchip_buffers)
  VAR_8->onchip_buffers = 256;

 VAR_9 = FUNC_16(VAR_7->dev);


 switch (VAR_9) {
 case 131:
 case 130:
 case 129:
  break;
 default:
  FUNC_7(VAR_7->dev, "invalid maximum_speed parameter %d\n",
   VAR_9);

 case 128:

  VAR_9 = 129;
  break;
 }


 VAR_8->gadget.max_speed = VAR_9;
 VAR_8->gadget.speed = 128;
 VAR_8->gadget.ops = &VAR_5;
 VAR_8->gadget.name = "usb-ss-gadget";
 VAR_8->gadget.sg_supported = 1;
 VAR_8->gadget.quirk_avoids_skb_reserve = 1;

 FUNC_14(&VAR_8->lock);
 FUNC_2(&VAR_8->pending_status_wq,
    VAR_6);

 FUNC_2(&VAR_8->aligned_buf_wq,
    VAR_4);


 FUNC_1(&VAR_8->gadget.ep_list);
 FUNC_1(&VAR_8->aligned_buf_list);

 VAR_10 = FUNC_5(VAR_8);
 if (VAR_10) {
  FUNC_7(VAR_8->dev, "Failed to create endpoints\n");
  goto err1;
 }


 VAR_8->setup_buf = FUNC_9(VAR_8->sysdev, 8,
       &VAR_8->setup_dma, VAR_2);
 if (!VAR_8->setup_buf) {
  VAR_10 = -VAR_1;
  goto err2;
 }

 VAR_8->dev_ver = FUNC_13(&VAR_8->regs->usb_cap6);

 FUNC_6(VAR_8->dev, "Device Controller version: %08x\n",
  FUNC_13(&VAR_8->regs->usb_cap6));
 FUNC_6(VAR_8->dev, "USB Capabilities:: %08x\n",
  FUNC_13(&VAR_8->regs->usb_cap1));
 FUNC_6(VAR_8->dev, "On-Chip memory configuration: %08x\n",
  FUNC_13(&VAR_8->regs->usb_cap2));

 VAR_8->dev_ver = FUNC_0(VAR_8->dev_ver);

 VAR_8->zlp_buf = FUNC_12(VAR_0, VAR_3);
 if (!VAR_8->zlp_buf) {
  VAR_10 = -VAR_1;
  goto err3;
 }


 VAR_10 = FUNC_15(VAR_8->dev, &VAR_8->gadget);
 if (VAR_10 < 0) {
  FUNC_7(VAR_8->dev,
   "Failed to register USB device controller\n");
  goto err4;
 }

 return 0;
err4:
 FUNC_11(VAR_8->zlp_buf);
err3:
 FUNC_10(VAR_8->sysdev, 8, VAR_8->setup_buf,
     VAR_8->setup_dma);
err2:
 FUNC_4(VAR_8);
err1:
 VAR_7->gadget_dev = ((void*)0);
 return VAR_10;
}
