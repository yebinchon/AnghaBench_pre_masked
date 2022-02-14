
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
struct sd {int sensor; int clockdiv; TYPE_4__ gspca_dev; scalar_t__ frame_rate; } ;
struct gspca_dev {int dummy; } ;
struct TYPE_5__ {int wMaxPacketSize; } ;
struct TYPE_6__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_0 (struct gspca_dev*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sd*,int ,int) ;
 struct usb_host_interface* FUNC_3 (struct usb_interface*,int ) ;
 struct usb_interface* FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct sd *VAR_19)
{
 struct gspca_dev *VAR_20 = (struct gspca_dev *)VAR_19;
 int VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;
 int VAR_26 = 0;
 struct usb_host_interface *VAR_27;
 struct usb_interface *VAR_28;

 VAR_28 = FUNC_4(VAR_19->gspca_dev.dev, VAR_19->gspca_dev.iface);
 VAR_27 = FUNC_3(VAR_28, VAR_19->gspca_dev.alt);
 if (!VAR_27) {
  FUNC_0(VAR_20, "Couldn't get altsetting\n");
  VAR_19->gspca_dev.usb_err = -VAR_0;
  return;
 }

 VAR_23 = FUNC_1(VAR_27->endpoint[0].desc.wMaxPacketSize);
 FUNC_2(VAR_19, VAR_16, VAR_23 >> 5);

 FUNC_2(VAR_19, VAR_7, 0x01);
 FUNC_2(VAR_19, VAR_15, 0x01);
 FUNC_2(VAR_19, VAR_12, 0x03);




 VAR_21 = (VAR_19->gspca_dev.pixfmt.width >> 3) - 1;
 VAR_22 = (VAR_19->gspca_dev.pixfmt.height >> 3) - 1;

 FUNC_2(VAR_19, VAR_5, VAR_21);
 FUNC_2(VAR_19, VAR_2, VAR_22);
 FUNC_2(VAR_19, VAR_6, 0x00);
 FUNC_2(VAR_19, VAR_3, 0x00);


 FUNC_2(VAR_19, VAR_4, 0x03);


 FUNC_2(VAR_19, VAR_13, VAR_21);
 FUNC_2(VAR_19, VAR_10, VAR_22);
 FUNC_2(VAR_19, VAR_14, 0x00);
 FUNC_2(VAR_19, VAR_11, 0x00);


 if (VAR_18 > 0)
  VAR_19->frame_rate = VAR_18;

 switch (VAR_19->sensor) {
 case 137:

  VAR_19->clockdiv = 3;
  break;



 case 134:
 case 133:
 case 132:
 case 131:
 case 129:
  if (VAR_19->gspca_dev.pixfmt.width == 320)
   VAR_26 = 1;

 case 136:
 case 135:
 case 130:
  switch (VAR_19->frame_rate) {
  case 30:
  case 25:

   if (VAR_19->gspca_dev.pixfmt.width != 640) {
    VAR_19->clockdiv = 0;
    break;
   }


  default:


   VAR_19->clockdiv = 1;
   break;
  case 10:
   VAR_19->clockdiv = 2;
   break;
  case 5:
   VAR_19->clockdiv = 5;
   break;
  }
  if (VAR_26) {
   VAR_19->clockdiv = (VAR_19->clockdiv + 1) * 2 - 1;

   if (VAR_19->clockdiv > 10)
    VAR_19->clockdiv = 10;
  }
  break;

 case 128:

  VAR_19->clockdiv = 0;
  break;
 }


 VAR_24 = (VAR_26 ? 60 : 30) / (VAR_19->clockdiv + 1) + 1;
 VAR_25 = VAR_24 * VAR_19->gspca_dev.pixfmt.width *
   VAR_19->gspca_dev.pixfmt.height * 3 / 2;

 if (VAR_25 > 1000 * VAR_23) {

  FUNC_2(VAR_19, VAR_8, 0x07);
  FUNC_2(VAR_19, VAR_9, 0x03);
 } else {
  FUNC_2(VAR_19, VAR_8, 0x06);
  FUNC_2(VAR_19, VAR_9, 0x00);
 }

 FUNC_2(VAR_19, VAR_17, VAR_1);
 FUNC_2(VAR_19, VAR_17, 0);
}
