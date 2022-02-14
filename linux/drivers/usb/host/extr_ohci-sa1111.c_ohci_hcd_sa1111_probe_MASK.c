
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int controller; } ;
struct usb_hcd {int rsrc_len; int rsrc_start; TYPE_1__ self; int regs; } ;
struct TYPE_4__ {int start; } ;
struct sa1111_dev {int mapbase; int dev; TYPE_2__ res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct sa1111_dev*,int) ;
 int FUNC_6 (struct sa1111_dev*) ;
 int FUNC_7 (struct sa1111_dev*) ;
 int FUNC_8 (struct usb_hcd*,int,int ) ;
 struct usb_hcd* FUNC_9 (int *,int *,char*) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_12(struct sa1111_dev *VAR_6)
{
 struct usb_hcd *VAR_7;
 int VAR_8, VAR_9;

 if (FUNC_10())
  return -VAR_1;







 VAR_7 = FUNC_9(&VAR_5, &VAR_6->dev, "sa1111");
 if (!VAR_7)
  return -VAR_2;

 VAR_7->rsrc_start = VAR_6->res.start;
 VAR_7->rsrc_len = FUNC_4(&VAR_6->res);

 VAR_9 = FUNC_5(VAR_6, 1);
 if (VAR_9 <= 0) {
  VAR_8 = VAR_9 ? : -VAR_3;
  goto err1;
 }

 if (!FUNC_3(VAR_7->rsrc_start, VAR_7->rsrc_len, VAR_4)) {
  FUNC_0(&VAR_6->dev, "request_mem_region failed\n");
  VAR_8 = -VAR_0;
  goto err1;
 }

 VAR_7->regs = VAR_6->mapbase;

 VAR_8 = FUNC_6(VAR_6);
 if (VAR_8)
  goto err2;

 VAR_8 = FUNC_8(VAR_7, VAR_9, 0);
 if (VAR_8 == 0) {
  FUNC_1(VAR_7->self.controller);
  return VAR_8;
 }

 FUNC_7(VAR_6);
 err2:
 FUNC_2(VAR_7->rsrc_start, VAR_7->rsrc_len);
 err1:
 FUNC_11(VAR_7);
 return VAR_8;
}
