
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_usbvision {unsigned char* ctrl_urb_buffer; size_t dev_model; int dev; } ;
typedef int init_values ;
typedef int __u16 ;
struct TYPE_2__ {scalar_t__ video_norm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (unsigned char*,char*,int) ;
 int FUNC_1 (int ,int ,int ,int,int ,int ,unsigned char*,int,int ) ;
 int FUNC_2 (int ,int) ;
 TYPE_1__* VAR_15 ;
 int FUNC_3 (struct usb_usbvision*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct usb_usbvision *VAR_16)
{
 int VAR_17;
 int VAR_18;
 static char VAR_19[38][3] = {
  { 0x04, 0x12, 0x08 }, { 0x05, 0xff, 0xc8 }, { 0x06, 0x18, 0x07 }, { 0x07, 0x90, 0x00 },
  { 0x09, 0x00, 0x00 }, { 0x0a, 0x00, 0x00 }, { 0x0b, 0x08, 0x00 }, { 0x0d, 0xcc, 0xcc },
  { 0x0e, 0x13, 0x14 }, { 0x10, 0x9b, 0x83 }, { 0x11, 0x5a, 0x3f }, { 0x12, 0xe4, 0x73 },
  { 0x13, 0x88, 0x84 }, { 0x14, 0x89, 0x80 }, { 0x15, 0x00, 0x20 }, { 0x16, 0x00, 0x00 },
  { 0x17, 0xff, 0xa0 }, { 0x18, 0x6b, 0x20 }, { 0x19, 0x22, 0x40 }, { 0x1a, 0x10, 0x07 },
  { 0x1b, 0x00, 0x47 }, { 0x1c, 0x03, 0xe0 }, { 0x1d, 0x00, 0x00 }, { 0x1e, 0x00, 0x00 },
  { 0x1f, 0x00, 0x00 }, { 0x20, 0x00, 0x00 }, { 0x21, 0x00, 0x00 }, { 0x22, 0x00, 0x00 },
  { 0x23, 0x00, 0x00 }, { 0x24, 0x00, 0x00 }, { 0x25, 0x00, 0x00 }, { 0x26, 0x00, 0x00 },
  { 0x27, 0x00, 0x00 }, { 0x28, 0x00, 0x00 }, { 0x29, 0x00, 0x00 }, { 0x08, 0x80, 0x60 },
  { 0x0f, 0x2d, 0x24 }, { 0x0c, 0x80, 0x80 }
 };
 unsigned char *VAR_20 = VAR_16->ctrl_urb_buffer;


 if (VAR_15[VAR_16->dev_model].video_norm == VAR_14)
  VAR_19[4][1] = 0x34;

 for (VAR_18 = 0; VAR_18 < sizeof(VAR_19) / 3; VAR_18++) {
  FUNC_3(VAR_16, VAR_8, VAR_10);
  FUNC_0(VAR_20, VAR_19[VAR_18], 3);
  VAR_17 = FUNC_1(VAR_16->dev,
         FUNC_2(VAR_16->dev, 1),
         VAR_5,
         VAR_11 | VAR_13 |
         VAR_12, 0,
         (__u16) VAR_7, VAR_20,
         3, VAR_0);
  if (VAR_17 < 0)
   return VAR_17;
  FUNC_3(VAR_16, VAR_8, VAR_9);

  FUNC_3(VAR_16, VAR_6, 3 | 0x10);
  FUNC_3(VAR_16, VAR_3, 0);
  FUNC_3(VAR_16, VAR_8, VAR_10);
  FUNC_3(VAR_16, VAR_3, VAR_4);
  FUNC_3(VAR_16, VAR_8, VAR_10 | VAR_1);
  FUNC_3(VAR_16, VAR_8, VAR_10 | VAR_2);
  FUNC_3(VAR_16, VAR_8, VAR_10 | VAR_1 | VAR_2);
 }

 return 0;
}
