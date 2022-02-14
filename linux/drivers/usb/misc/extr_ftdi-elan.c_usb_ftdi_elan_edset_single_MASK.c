
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_ftdi {int dummy; } ;
struct urb {int dummy; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (struct usb_ftdi*,int ,void*,struct urb*,int ,int ,int ,void (*) (void*,struct urb*,int *,int,int,int,int,int,int,int,int,int)) ;
 struct usb_ftdi* FUNC_1 (struct platform_device*) ;

int FUNC_2(struct platform_device *VAR_0, u8 VAR_1,
          void *VAR_2, struct urb *VAR_3, u8 VAR_4, u8 VAR_5, u8 VAR_6,
          void (*VAR_7) (void *VAR_8, struct urb *VAR_9, u8 *VAR_10, int VAR_11,
       int VAR_12, int VAR_13, int VAR_14, int VAR_15,
       int VAR_16, int VAR_17, int VAR_18, int VAR_19))
{
 struct usb_ftdi *VAR_20 = FUNC_1(VAR_0);
 return FUNC_0(VAR_20, VAR_1, VAR_2, VAR_3, VAR_4,
          VAR_5, VAR_6, VAR_7);
}
