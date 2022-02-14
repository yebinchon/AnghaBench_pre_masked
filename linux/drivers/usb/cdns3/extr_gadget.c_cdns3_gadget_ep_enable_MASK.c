
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct usb_ep {struct usb_endpoint_descriptor const* desc; } ;
struct usb_endpoint_descriptor {scalar_t__ bDescriptorType; scalar_t__ bInterval; int wMaxPacketSize; } ;
struct TYPE_3__ {struct usb_endpoint_descriptor const* desc; } ;
struct cdns3_endpoint {int flags; scalar_t__ type; int num; int dir; int pcs; int ccs; scalar_t__ num_trbs; scalar_t__ free_trbs; scalar_t__ dequeue; scalar_t__ enqueue; scalar_t__ wa1_set; int interval; TYPE_1__ endpoint; int name; struct cdns3_device* cdns3_dev; } ;
struct cdns3_device {scalar_t__ dev_ver; int lock; TYPE_2__* regs; int dev; } ;
struct TYPE_4__ {int ep_sts; int ep_cfg; int ep_sts_en; int ep_ien; int ep_cmd; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
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
 int FUNC_1 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_2 (struct cdns3_endpoint*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct cdns3_endpoint*) ;
 int FUNC_5 (struct cdns3_device*,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (struct cdns3_device*,struct cdns3_endpoint*,int) ;
 scalar_t__ FUNC_8 (int ,int,char*,int ) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ,char*,...) ;
 struct cdns3_endpoint* FUNC_11 (struct usb_ep*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int,int,int,int) ;
 int FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (struct cdns3_endpoint*) ;
 scalar_t__ FUNC_17 (int) ;
 scalar_t__ FUNC_18 (struct usb_endpoint_descriptor const*) ;
 int FUNC_19 (int,int *) ;

__attribute__((used)) static int FUNC_20(struct usb_ep *VAR_16,
      const struct usb_endpoint_descriptor *VAR_17)
{
 struct cdns3_endpoint *VAR_18;
 struct cdns3_device *VAR_19;
 u32 VAR_20 = VAR_11;
 u32 VAR_21;
 unsigned long VAR_22;
 int VAR_23 = 1;
 int VAR_24;
 int VAR_25;

 VAR_18 = FUNC_11(VAR_16);
 VAR_19 = VAR_18->cdns3_dev;

 if (!VAR_16 || !VAR_17 || VAR_17->bDescriptorType != VAR_14) {
  FUNC_9(VAR_19->dev, "usbss: invalid parameters\n");
  return -VAR_1;
 }

 if (!VAR_17->wMaxPacketSize) {
  FUNC_10(VAR_19->dev, "usbss: missing wMaxPacketSize\n");
  return -VAR_1;
 }

 if (FUNC_8(VAR_19->dev, VAR_18->flags & VAR_5,
     "%s is already enabled\n", VAR_18->name))
  return 0;

 FUNC_14(&VAR_19->lock, VAR_22);

 VAR_18->endpoint.desc = VAR_17;
 VAR_18->type = FUNC_18(VAR_17);
 VAR_18->interval = VAR_17->bInterval ? FUNC_0(VAR_17->bInterval - 1) : 0;

 if (VAR_18->interval > VAR_13 &&
     VAR_18->type == VAR_15) {
  FUNC_10(VAR_19->dev, "Driver is limited to %d period\n",
   VAR_13);

  VAR_24 = -VAR_1;
  goto exit;
 }

 VAR_24 = FUNC_2(VAR_18);

 if (VAR_24)
  goto exit;

 VAR_21 = VAR_18->num | VAR_18->dir;
 FUNC_5(VAR_19, VAR_21);

 FUNC_16(VAR_18);

 FUNC_19(VAR_4, &VAR_19->regs->ep_cmd);

 VAR_24 = FUNC_13(&VAR_19->regs->ep_cmd, VAR_25,
     !(VAR_25 & (VAR_3 | VAR_4)),
     1, 1000);

 if (FUNC_17(VAR_24)) {
  FUNC_4(VAR_18);
  VAR_24 = -VAR_1;
  goto exit;
 }


 FUNC_6(&VAR_19->regs->ep_ien,
          FUNC_0(FUNC_3(VAR_21)));

 if (VAR_19->dev_ver < VAR_0)
  FUNC_7(VAR_19, VAR_18, VAR_20);

 FUNC_19(VAR_20, &VAR_19->regs->ep_sts_en);
 if (VAR_18->type == VAR_15 && !VAR_18->dir)
  VAR_23 = 0;

 if (VAR_23)
  FUNC_6(&VAR_19->regs->ep_cfg, VAR_2);

 VAR_16->desc = VAR_17;
 VAR_18->flags &= ~(VAR_6 | VAR_9 | VAR_10 |
       VAR_8 | VAR_7);
 VAR_18->flags |= VAR_5 | VAR_12;
 VAR_18->wa1_set = 0;
 VAR_18->enqueue = 0;
 VAR_18->dequeue = 0;
 VAR_20 = FUNC_12(&VAR_19->regs->ep_sts);
 VAR_18->pcs = !!FUNC_1(VAR_20);
 VAR_18->ccs = !!FUNC_1(VAR_20);

 VAR_18->free_trbs = VAR_18->num_trbs - 1;
exit:
 FUNC_15(&VAR_19->lock, VAR_22);

 return VAR_24;
}
