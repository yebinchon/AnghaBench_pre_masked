
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct ab8500_usb {int flags; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,int,int *,int ,int,char*,struct ab8500_usb*) ;
 int FUNC_2 (struct platform_device*,char*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_8,
  struct ab8500_usb *VAR_9)
{
 int VAR_10;
 int VAR_11;

 if (VAR_9->flags & VAR_1) {
  VAR_11 = FUNC_2(VAR_8, "USB_LINK_STATUS");
  if (VAR_11 < 0)
   return VAR_11;
  VAR_10 = FUNC_1(&VAR_8->dev, VAR_11, ((void*)0),
    VAR_7,
    VAR_3 | VAR_5 | VAR_4,
    "usb-link-status", VAR_9);
  if (VAR_10 < 0) {
   FUNC_0(VAR_9->dev, "request_irq failed for link status irq\n");
   return VAR_10;
  }
 }

 if (VAR_9->flags & VAR_0) {
  VAR_11 = FUNC_2(VAR_8, "ID_WAKEUP_F");
  if (VAR_11 < 0)
   return VAR_11;
  VAR_10 = FUNC_1(&VAR_8->dev, VAR_11, ((void*)0),
    VAR_6,
    VAR_3 | VAR_5 | VAR_4,
    "usb-id-fall", VAR_9);
  if (VAR_10 < 0) {
   FUNC_0(VAR_9->dev, "request_irq failed for ID fall irq\n");
   return VAR_10;
  }
 }

 if (VAR_9->flags & VAR_2) {
  VAR_11 = FUNC_2(VAR_8, "VBUS_DET_F");
  if (VAR_11 < 0)
   return VAR_11;
  VAR_10 = FUNC_1(&VAR_8->dev, VAR_11, ((void*)0),
    VAR_6,
    VAR_3 | VAR_5 | VAR_4,
    "usb-vbus-fall", VAR_9);
  if (VAR_10 < 0) {
   FUNC_0(VAR_9->dev, "request_irq failed for Vbus fall irq\n");
   return VAR_10;
  }
 }

 return 0;
}
