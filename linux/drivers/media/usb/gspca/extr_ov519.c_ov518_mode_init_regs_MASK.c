
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct usb_host_interface {TYPE_2__* endpoint; } ;
struct TYPE_7__ {int width; int height; } ;
struct TYPE_8__ {TYPE_3__ pixfmt; int usb_err; int alt; int iface; int dev; } ;
struct sd {scalar_t__ bridge; scalar_t__ revision; int sensor; int clockdiv; TYPE_4__ gspca_dev; } ;
struct gspca_dev {int dummy; } ;
struct TYPE_5__ {int wMaxPacketSize; } ;
struct TYPE_6__ {TYPE_1__ desc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (struct gspca_dev*,char*) ;
 int FUNC_1 (struct sd*,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sd*,int,int,int) ;
 int FUNC_4 (struct sd*,int,int) ;
 int FUNC_5 (struct sd*,int,int,int) ;
 struct usb_host_interface* FUNC_6 (struct usb_interface*,int ) ;
 struct usb_interface* FUNC_7 (int ,int ) ;

__attribute__((used)) static void FUNC_8(struct sd *VAR_4)
{
 struct gspca_dev *VAR_5 = (struct gspca_dev *)VAR_4;
 int VAR_6, VAR_7, VAR_8;
 struct usb_host_interface *VAR_9;
 struct usb_interface *VAR_10;

 VAR_10 = FUNC_7(VAR_4->gspca_dev.dev, VAR_4->gspca_dev.iface);
 VAR_9 = FUNC_6(VAR_10, VAR_4->gspca_dev.alt);
 if (!VAR_9) {
  FUNC_0(VAR_5, "Couldn't get altsetting\n");
  VAR_4->gspca_dev.usb_err = -VAR_2;
  return;
 }

 VAR_8 = FUNC_2(VAR_9->endpoint[0].desc.wMaxPacketSize);
 FUNC_3(VAR_4, VAR_3, VAR_8 & ~7, 2);


 FUNC_4(VAR_4, 0x2b, 0);
 FUNC_4(VAR_4, 0x2c, 0);
 FUNC_4(VAR_4, 0x2d, 0);
 FUNC_4(VAR_4, 0x2e, 0);
 FUNC_4(VAR_4, 0x3b, 0);
 FUNC_4(VAR_4, 0x3c, 0);
 FUNC_4(VAR_4, 0x3d, 0);
 FUNC_4(VAR_4, 0x3e, 0);

 if (VAR_4->bridge == VAR_0) {

  FUNC_5(VAR_4, 0x20, 0x08, 0x08);


  FUNC_5(VAR_4, 0x28, 0x80, 0xf0);
  FUNC_5(VAR_4, 0x38, 0x80, 0xf0);
 } else {
  FUNC_4(VAR_4, 0x28, 0x80);
  FUNC_4(VAR_4, 0x38, 0x80);
 }

 VAR_6 = VAR_4->gspca_dev.pixfmt.width / 16;
 VAR_7 = VAR_4->gspca_dev.pixfmt.height / 4;

 FUNC_4(VAR_4, 0x29, VAR_6);
 FUNC_4(VAR_4, 0x2a, VAR_7);

 FUNC_4(VAR_4, 0x39, VAR_6);
 FUNC_4(VAR_4, 0x3a, VAR_7);


 FUNC_4(VAR_4, 0x2f, 0x80);


 if (VAR_4->bridge == VAR_1 && VAR_4->revision == 0 &&
           VAR_4->sensor == 128)
  VAR_4->clockdiv = 0;
 else
  VAR_4->clockdiv = 1;



 FUNC_4(VAR_4, 0x51, 0x04);
 FUNC_4(VAR_4, 0x22, 0x18);
 FUNC_4(VAR_4, 0x23, 0xff);

 if (VAR_4->bridge == VAR_1) {
  switch (VAR_4->sensor) {
  case 128:
   if (VAR_4->revision > 0 &&
     VAR_4->gspca_dev.pixfmt.width == 640) {
    FUNC_4(VAR_4, 0x20, 0x60);
    FUNC_4(VAR_4, 0x21, 0x1f);
   } else {
    FUNC_4(VAR_4, 0x20, 0x00);
    FUNC_4(VAR_4, 0x21, 0x19);
   }
   break;
  case 129:
   FUNC_4(VAR_4, 0x20, 0x00);
   FUNC_4(VAR_4, 0x21, 0x19);
   break;
  default:
   FUNC_4(VAR_4, 0x21, 0x19);
  }
 } else
  FUNC_4(VAR_4, 0x71, 0x17);



 FUNC_1(VAR_4, 0x54, 0x23);

 FUNC_4(VAR_4, 0x2f, 0x80);

 if (VAR_4->bridge == VAR_1) {
  FUNC_4(VAR_4, 0x24, 0x94);
  FUNC_4(VAR_4, 0x25, 0x90);
  FUNC_3(VAR_4, 0xc4, 400, 2);
  FUNC_3(VAR_4, 0xc6, 540, 2);
  FUNC_3(VAR_4, 0xc7, 540, 2);
  FUNC_3(VAR_4, 0xc8, 108, 2);
  FUNC_3(VAR_4, 0xca, 131098, 3);
  FUNC_3(VAR_4, 0xcb, 532, 2);
  FUNC_3(VAR_4, 0xcc, 2400, 2);
  FUNC_3(VAR_4, 0xcd, 32, 2);
  FUNC_3(VAR_4, 0xce, 608, 2);
 } else {
  FUNC_4(VAR_4, 0x24, 0x9f);
  FUNC_4(VAR_4, 0x25, 0x90);
  FUNC_3(VAR_4, 0xc4, 400, 2);
  FUNC_3(VAR_4, 0xc6, 381, 2);
  FUNC_3(VAR_4, 0xc7, 381, 2);
  FUNC_3(VAR_4, 0xc8, 128, 2);
  FUNC_3(VAR_4, 0xca, 183331, 3);
  FUNC_3(VAR_4, 0xcb, 746, 2);
  FUNC_3(VAR_4, 0xcc, 1750, 2);
  FUNC_3(VAR_4, 0xcd, 45, 2);
  FUNC_3(VAR_4, 0xce, 851, 2);
 }

 FUNC_4(VAR_4, 0x2f, 0x80);
}
