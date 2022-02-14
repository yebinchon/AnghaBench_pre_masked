
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct usb_hcd {TYPE_1__* driver; } ;
struct TYPE_14__ {int of_node; struct TYPE_14__* parent; int dma_pfn_offset; int dma_mask; int groups; int * type; int * bus; } ;
struct TYPE_12__ {int bDescriptorType; int bLength; } ;
struct TYPE_13__ {TYPE_2__ desc; int urb_list; } ;
struct usb_device {int lpm_disable_count; int can_submit; char* devpath; int level; unsigned int portnum; int wusb; int authorized; void* active_duration; void* connect_time; TYPE_4__ dev; int filelist; struct usb_device* parent; struct usb_bus* bus; scalar_t__ route; TYPE_3__ ep0; int urbnum; int state; } ;
struct usb_bus {int busnum; TYPE_7__* sysdev; TYPE_4__* controller; } ;
struct TYPE_15__ {int dma_pfn_offset; int dma_mask; } ;
struct TYPE_11__ {int (* alloc_dev ) (struct usb_hcd*,struct usb_device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 struct usb_hcd* FUNC_2 (struct usb_bus*) ;
 int FUNC_3 (TYPE_4__*,char*,int ,...) ;
 int FUNC_4 (TYPE_7__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,TYPE_7__*) ;
 void* VAR_4 ;
 int FUNC_7 (struct usb_device*) ;
 struct usb_device* FUNC_8 (int,int ) ;
 int FUNC_9 (TYPE_4__*,int) ;
 int FUNC_10 (TYPE_4__*,int ) ;
 int FUNC_11 (char*,int,char*,...) ;
 int FUNC_12 (struct usb_hcd*,struct usb_device*) ;
 scalar_t__ FUNC_13 (int) ;
 int VAR_5 ;
 scalar_t__ FUNC_14 (struct usb_bus*) ;
 int VAR_6 ;
 int FUNC_15 (struct usb_device*,struct usb_hcd*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_16 (struct usb_device*,TYPE_3__*,int) ;
 int FUNC_17 (struct usb_hcd*) ;
 unsigned int FUNC_18 (struct usb_hcd*,unsigned int) ;
 int FUNC_19 (struct usb_device*,unsigned int) ;
 int FUNC_20 (struct usb_hcd*) ;

struct usb_device *FUNC_21(struct usb_device *VAR_9,
     struct usb_bus *VAR_10, unsigned VAR_11)
{
 struct usb_device *VAR_12;
 struct usb_hcd *VAR_13 = FUNC_2(VAR_10);
 unsigned VAR_14 = 0;
 unsigned VAR_15 = VAR_11;

 VAR_12 = FUNC_8(sizeof(*VAR_12), VAR_0);
 if (!VAR_12)
  return ((void*)0);

 if (!FUNC_17(VAR_13)) {
  FUNC_7(VAR_12);
  return ((void*)0);
 }

 if (VAR_13->driver->alloc_dev && VAR_9 &&
  !VAR_13->driver->alloc_dev(VAR_13, VAR_12)) {
  FUNC_20(FUNC_2(VAR_10));
  FUNC_7(VAR_12);
  return ((void*)0);
 }

 FUNC_5(&VAR_12->dev);
 VAR_12->dev.bus = &VAR_6;
 VAR_12->dev.type = &VAR_8;
 VAR_12->dev.groups = VAR_7;
 VAR_12->dev.dma_mask = VAR_10->sysdev->dma_mask;
 VAR_12->dev.dma_pfn_offset = VAR_10->sysdev->dma_pfn_offset;
 FUNC_10(&VAR_12->dev, FUNC_4(VAR_10->sysdev));
 VAR_12->state = VAR_3;
 VAR_12->lpm_disable_count = 1;
 FUNC_1(&VAR_12->urbnum, 0);

 FUNC_0(&VAR_12->ep0.urb_list);
 VAR_12->ep0.desc.bLength = VAR_2;
 VAR_12->ep0.desc.bDescriptorType = VAR_1;

 FUNC_16(VAR_12, &VAR_12->ep0, 0);
 VAR_12->can_submit = 1;
 if (FUNC_13(!VAR_9)) {
  VAR_12->devpath[0] = '0';
  VAR_12->route = 0;

  VAR_12->dev.parent = VAR_10->controller;
  FUNC_6(&VAR_12->dev, VAR_10->sysdev);
  FUNC_3(&VAR_12->dev, "usb%d", VAR_10->busnum);
  VAR_14 = 1;
 } else {

  if (VAR_9->devpath[0] == '0') {
   FUNC_11(VAR_12->devpath, sizeof VAR_12->devpath,
    "%d", VAR_11);

   VAR_12->route = 0;
  } else {
   FUNC_11(VAR_12->devpath, sizeof VAR_12->devpath,
    "%s.%d", VAR_9->devpath, VAR_11);

   if (VAR_11 < 15)
    VAR_12->route = VAR_9->route +
     (VAR_11 << ((VAR_9->level - 1)*4));
   else
    VAR_12->route = VAR_9->route +
     (15 << ((VAR_9->level - 1)*4));
  }

  VAR_12->dev.parent = &VAR_9->dev;
  FUNC_3(&VAR_12->dev, "%d-%s", VAR_10->busnum, VAR_12->devpath);

  if (!VAR_9->parent) {

   VAR_15 = FUNC_18(VAR_13,
    VAR_11);
  }
  VAR_12->dev.of_node = FUNC_19(VAR_9, VAR_15);


 }

 VAR_12->portnum = VAR_11;
 VAR_12->bus = VAR_10;
 VAR_12->parent = VAR_9;
 FUNC_0(&VAR_12->filelist);
 VAR_12->authorized = FUNC_15(VAR_12, VAR_13);
 if (!VAR_14)
  VAR_12->wusb = FUNC_14(VAR_10) ? 1 : 0;

 return VAR_12;
}
