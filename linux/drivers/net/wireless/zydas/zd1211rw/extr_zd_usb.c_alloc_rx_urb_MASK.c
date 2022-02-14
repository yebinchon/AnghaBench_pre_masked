
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd_usb {int dummy; } ;
struct usb_device {int dummy; } ;
struct urb {int transfer_flags; int transfer_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (struct usb_device*,int ,int ,int *) ;
 struct urb* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct urb*,struct usb_device*,int ,void*,int ,int ,struct zd_usb*) ;
 int FUNC_3 (struct urb*) ;
 int FUNC_4 (struct usb_device*,int ) ;
 struct usb_device* FUNC_5 (struct zd_usb*) ;

__attribute__((used)) static struct urb *FUNC_6(struct zd_usb *VAR_5)
{
 struct usb_device *VAR_6 = FUNC_5(VAR_5);
 struct urb *VAR_7;
 void *VAR_8;

 VAR_7 = FUNC_1(0, VAR_1);
 if (!VAR_7)
  return ((void*)0);
 VAR_8 = FUNC_0(VAR_6, VAR_3, VAR_1,
        &VAR_7->transfer_dma);
 if (!VAR_8) {
  FUNC_3(VAR_7);
  return ((void*)0);
 }

 FUNC_2(VAR_7, VAR_6, FUNC_4(VAR_6, VAR_0),
     VAR_8, VAR_3,
     VAR_4, VAR_5);
 VAR_7->transfer_flags |= VAR_2;

 return VAR_7;
}
