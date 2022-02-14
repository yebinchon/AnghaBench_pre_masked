
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usb_hcd {int dummy; } ;
struct tmio_hcd {scalar_t__ ccr; } ;
struct platform_device {int dev; } ;
struct ohci_hcd {int num_ports; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*,int) ;
 struct ohci_hcd* FUNC_1 (struct usb_hcd*) ;
 struct tmio_hcd* FUNC_2 (struct usb_hcd*) ;
 struct usb_hcd* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct platform_device *VAR_9)
{
 struct usb_hcd *VAR_10 = FUNC_3(VAR_9);
 struct ohci_hcd *VAR_11 = FUNC_1(VAR_10);
 struct tmio_hcd *VAR_12 = FUNC_2(VAR_10);
 u16 VAR_13;

 VAR_13 = VAR_5 | VAR_4;
 switch (VAR_11->num_ports) {
  default:
   FUNC_0(&VAR_9->dev, "Unsupported amount of ports: %d\n", VAR_11->num_ports);

  case 3:
   VAR_13 |= VAR_8;

  case 2:
   VAR_13 |= VAR_7;

  case 1:
   VAR_13 |= VAR_6;
 }
 FUNC_5(0, VAR_12->ccr + VAR_2);
 FUNC_5(0, VAR_12->ccr + VAR_1);
 FUNC_4(0, VAR_12->ccr + VAR_0);
 FUNC_4(0, VAR_12->ccr + VAR_0 + 2);
 FUNC_4(VAR_13, VAR_12->ccr + VAR_3);
}
