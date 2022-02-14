
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hcd {int rsrc_len; int rsrc_start; } ;
struct resource {int start; } ;
struct TYPE_2__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct usb_hcd* FUNC_0 (struct platform_device*) ;
 struct resource* FUNC_1 (struct platform_device*,int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct resource*) ;
 int FUNC_4 (int ,int ,int ,int) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct usb_hcd*) ;
 int FUNC_7 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_3)
{
 struct usb_hcd *VAR_4 = FUNC_0(VAR_3);
 struct resource *VAR_5;

 FUNC_7(VAR_4);
 FUNC_2(VAR_4->rsrc_start, VAR_4->rsrc_len);
 FUNC_6(VAR_4);
 VAR_5 = FUNC_1(VAR_3, VAR_0, 1);
 if (VAR_5)
  FUNC_2(VAR_5->start, FUNC_3(VAR_5));



 FUNC_4(VAR_3->dev.parent, VAR_2, 0, 1 << 6);
 FUNC_5(VAR_3->dev.parent, VAR_1, 0);

 return 0;
}
