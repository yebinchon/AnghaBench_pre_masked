
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int controller; } ;
struct usb_hcd {TYPE_1__ self; int regs; int rsrc_len; int rsrc_start; } ;
struct s3c2410_hcd_info {int dummy; } ;
struct platform_device {TYPE_2__* resource; int dev; } ;
struct TYPE_5__ {int start; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,char*) ;
 struct s3c2410_hcd_info* FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (struct platform_device*,struct usb_hcd*) ;
 int FUNC_9 (struct platform_device*) ;
 int FUNC_10 (struct s3c2410_hcd_info*,int,int) ;
 int FUNC_11 (struct usb_hcd*,int ,int ) ;
 int VAR_3 ;
 struct usb_hcd* FUNC_12 (int *,int *,char*) ;
 int FUNC_13 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_4)
{
 struct usb_hcd *VAR_5 = ((void*)0);
 struct s3c2410_hcd_info *VAR_6 = FUNC_3(&VAR_4->dev);
 int VAR_7;

 FUNC_10(VAR_6, 1, 1);
 FUNC_10(VAR_6, 2, 1);

 VAR_5 = FUNC_12(&VAR_2, &VAR_4->dev, "s3c24xx");
 if (VAR_5 == ((void*)0))
  return -VAR_0;

 VAR_5->rsrc_start = VAR_4->resource[0].start;
 VAR_5->rsrc_len = FUNC_7(&VAR_4->resource[0]);

 VAR_5->regs = FUNC_6(&VAR_4->dev, &VAR_4->resource[0]);
 if (FUNC_0(VAR_5->regs)) {
  VAR_7 = FUNC_1(VAR_5->regs);
  goto err_put;
 }

 VAR_1 = FUNC_5(&VAR_4->dev, "usb-host");
 if (FUNC_0(VAR_1)) {
  FUNC_2(&VAR_4->dev, "cannot get usb-host clock\n");
  VAR_7 = FUNC_1(VAR_1);
  goto err_put;
 }

 VAR_3 = FUNC_5(&VAR_4->dev, "usb-bus-host");
 if (FUNC_0(VAR_3)) {
  FUNC_2(&VAR_4->dev, "cannot get usb-bus-host clock\n");
  VAR_7 = FUNC_1(VAR_3);
  goto err_put;
 }

 FUNC_8(VAR_4, VAR_5);

 VAR_7 = FUNC_11(VAR_5, VAR_4->resource[1].start, 0);
 if (VAR_7 != 0)
  goto err_ioremap;

 FUNC_4(VAR_5->self.controller);
 return 0;

 err_ioremap:
 FUNC_9(VAR_4);

 err_put:
 FUNC_13(VAR_5);
 return VAR_7;
}
