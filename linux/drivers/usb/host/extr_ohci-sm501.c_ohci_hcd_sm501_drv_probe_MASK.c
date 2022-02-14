
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int controller; } ;
struct usb_hcd {int rsrc_len; scalar_t__ rsrc_start; int * regs; TYPE_2__ self; } ;
struct resource {scalar_t__ start; TYPE_1__* parent; } ;
struct device {int parent; } ;
struct platform_device {int name; struct device dev; } ;
struct hc_driver {int dummy; } ;
struct TYPE_3__ {scalar_t__ start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct usb_hcd*) ;
 int * FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 struct hc_driver VAR_8 ;
 int FUNC_7 (struct platform_device*,int ) ;
 struct resource* FUNC_8 (struct platform_device*,int ,int) ;
 int FUNC_9 (scalar_t__,int ) ;
 int FUNC_10 (scalar_t__,int ,int ) ;
 int FUNC_11 (struct resource*) ;
 int FUNC_12 (int ,int ,int,int ) ;
 int FUNC_13 (int ,int ,int) ;
 int FUNC_14 (struct usb_hcd*,int,int ) ;
 struct usb_hcd* FUNC_15 (struct hc_driver const*,struct device*,int ) ;
 scalar_t__ FUNC_16 (struct usb_hcd*,scalar_t__,scalar_t__,int ) ;
 int FUNC_17 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_9)
{
 const struct hc_driver *VAR_10 = &VAR_8;
 struct device *VAR_11 = &VAR_9->dev;
 struct resource *VAR_12, *VAR_13;
 int VAR_14, VAR_15;
 struct usb_hcd *VAR_16 = ((void*)0);

 VAR_15 = VAR_14 = FUNC_7(VAR_9, 0);
 if (VAR_14 < 0)
  goto err0;

 VAR_13 = FUNC_8(VAR_9, VAR_4, 1);
 if (VAR_13 == ((void*)0)) {
  FUNC_0(VAR_11, "no resource definition for memory\n");
  VAR_14 = -VAR_1;
  goto err0;
 }

 if (!FUNC_10(VAR_13->start, FUNC_11(VAR_13), VAR_9->name)) {
  FUNC_0(VAR_11, "request_mem_region failed\n");
  VAR_14 = -VAR_0;
  goto err0;
 }


 VAR_12 = FUNC_8(VAR_9, VAR_4, 0);
 if (VAR_12 == ((void*)0)) {
  FUNC_0(VAR_11, "no resource definition for registers\n");
  VAR_14 = -VAR_1;
  goto err1;
 }

 VAR_16 = FUNC_15(VAR_10, &VAR_9->dev, FUNC_1(&VAR_9->dev));
 if (!VAR_16) {
  VAR_14 = -VAR_2;
  goto err1;
 }

 VAR_16->rsrc_start = VAR_12->start;
 VAR_16->rsrc_len = FUNC_11(VAR_12);

 if (!FUNC_10(VAR_16->rsrc_start, VAR_16->rsrc_len, VAR_9->name)) {
  FUNC_0(VAR_11, "request_mem_region failed\n");
  VAR_14 = -VAR_0;
  goto err3;
 }

 VAR_16->regs = FUNC_4(VAR_16->rsrc_start, VAR_16->rsrc_len);
 if (VAR_16->regs == ((void*)0)) {
  FUNC_0(VAR_11, "cannot remap registers\n");
  VAR_14 = -VAR_3;
  goto err4;
 }

 FUNC_6(FUNC_3(VAR_16));
 if (FUNC_16(VAR_16, VAR_13->start,
        VAR_13->start - VAR_13->parent->start,
        FUNC_11(VAR_13)) < 0)
  goto err5;
 VAR_14 = FUNC_14(VAR_16, VAR_15, VAR_5);
 if (VAR_14)
  goto err5;
 FUNC_2(VAR_16->self.controller);



 FUNC_13(VAR_11->parent, VAR_6, 1);
 FUNC_12(VAR_11->parent, VAR_7, 1 << 6, 0);

 return 0;
err5:
 FUNC_5(VAR_16->regs);
err4:
 FUNC_9(VAR_16->rsrc_start, VAR_16->rsrc_len);
err3:
 FUNC_17(VAR_16);
err1:
 FUNC_9(VAR_13->start, FUNC_11(VAR_13));
err0:
 return VAR_14;
}
