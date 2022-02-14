
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int controller; } ;
struct usb_hcd {scalar_t__ rsrc_len; scalar_t__ rsrc_start; int regs; TYPE_2__ self; } ;
struct platform_device {int num_resources; int dev; TYPE_1__* resource; } ;
struct TYPE_3__ {scalar_t__ flags; scalar_t__ start; scalar_t__ end; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*,...) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int VAR_6 ;
 int FUNC_9 (scalar_t__,scalar_t__) ;
 int FUNC_10 (int ) ;
 int VAR_7 ;
 int FUNC_11 (struct platform_device*,int ) ;
 int FUNC_12 (scalar_t__,scalar_t__) ;
 int FUNC_13 (scalar_t__,scalar_t__,int ) ;
 int FUNC_14 (struct usb_hcd*,int,int ) ;
 struct usb_hcd* FUNC_15 (int *,int *,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_16 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_10)
{
 int VAR_11, VAR_12;
 struct usb_hcd *VAR_13 = 0;

 if (VAR_10->num_resources != 2) {
  FUNC_6(&VAR_10->dev, "invalid num_resources: %i\n",
         VAR_10->num_resources);
  return -VAR_1;
 }

 if (VAR_10->resource[0].flags != VAR_5
   || VAR_10->resource[1].flags != VAR_4) {
  FUNC_6(&VAR_10->dev, "invalid resource type\n");
  return -VAR_1;
 }

 VAR_9 = FUNC_2(&VAR_10->dev, "usb_hhc_ck");
 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);

 if (!FUNC_4())
  VAR_8 = FUNC_2(&VAR_10->dev, "usb_dc_ck");
 else
  VAR_8 = FUNC_2(&VAR_10->dev, "lb_ck");

 if (FUNC_0(VAR_8)) {
  FUNC_3(VAR_9);
  return FUNC_1(VAR_8);
 }


 VAR_13 = FUNC_15(&VAR_7, &VAR_10->dev,
   FUNC_7(&VAR_10->dev));
 if (!VAR_13) {
  VAR_11 = -VAR_2;
  goto err0;
 }
 VAR_13->rsrc_start = VAR_10->resource[0].start;
 VAR_13->rsrc_len = VAR_10->resource[0].end - VAR_10->resource[0].start + 1;

 if (!FUNC_13(VAR_13->rsrc_start, VAR_13->rsrc_len, VAR_6)) {
  FUNC_5(&VAR_10->dev, "request_mem_region failed\n");
  VAR_11 = -VAR_0;
  goto err1;
 }

 VAR_13->regs = FUNC_9(VAR_13->rsrc_start, VAR_13->rsrc_len);
 if (!VAR_13->regs) {
  FUNC_6(&VAR_10->dev, "can't ioremap OHCI HCD\n");
  VAR_11 = -VAR_2;
  goto err2;
 }

 VAR_12 = FUNC_11(VAR_10, 0);
 if (VAR_12 < 0) {
  VAR_11 = -VAR_3;
  goto err3;
 }
 VAR_11 = FUNC_14(VAR_13, VAR_12, 0);
 if (VAR_11)
  goto err3;

 FUNC_8(VAR_13->self.controller);
 return 0;
err3:
 FUNC_10(VAR_13->regs);
err2:
 FUNC_12(VAR_13->rsrc_start, VAR_13->rsrc_len);
err1:
 FUNC_16(VAR_13);
err0:
 FUNC_3(VAR_8);
 FUNC_3(VAR_9);
 return VAR_11;
}
