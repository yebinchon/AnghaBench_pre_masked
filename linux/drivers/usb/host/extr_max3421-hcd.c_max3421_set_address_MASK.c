
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_hcd {int dummy; } ;
struct usb_device {int devnum; } ;
struct max3421_hcd {int loaded_epnum; struct usb_device* loaded_dev; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct max3421_hcd* FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (struct usb_hcd*,int ) ;
 int FUNC_3 (struct usb_hcd*,int ,int) ;
 int FUNC_4 (struct usb_device*,int,int) ;
 int FUNC_5 (struct usb_device*,int,int,int) ;

__attribute__((used)) static void
FUNC_6(struct usb_hcd *VAR_7, struct usb_device *VAR_8, int VAR_9,
      int VAR_10)
{
 struct max3421_hcd *VAR_11 = FUNC_1(VAR_7);
 int VAR_12, VAR_13, VAR_14, VAR_15;
 struct usb_device *VAR_16;
 u8 VAR_17;

 VAR_16 = VAR_11->loaded_dev;
 VAR_12 = VAR_11->loaded_epnum;

 VAR_13 = (VAR_8 == VAR_16 && VAR_9 == VAR_12);
 if (VAR_13 && !VAR_10)
  return;

 if (VAR_16 && !VAR_13) {

  u8 VAR_18 = FUNC_2(VAR_7, VAR_5);

  VAR_14 = (VAR_18 >> VAR_2) & 1;
  VAR_15 = (VAR_18 >> VAR_3) & 1;


  FUNC_5(VAR_16, VAR_12, 0, VAR_14);
  FUNC_5(VAR_16, VAR_12, 1, VAR_15);
 }

 VAR_14 = FUNC_4(VAR_8, VAR_9, 0);
 VAR_15 = FUNC_4(VAR_8, VAR_9, 1);
 VAR_17 = (FUNC_0(VAR_14 + VAR_0) |
  FUNC_0(VAR_15 + VAR_1));

 VAR_11->loaded_epnum = VAR_9;
 FUNC_3(VAR_7, VAR_4, VAR_17);






 VAR_11->loaded_dev = VAR_8;
 FUNC_3(VAR_7, VAR_6, VAR_8->devnum);
}
