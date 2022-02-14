
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct usb_device {int dummy; } ;
struct TYPE_2__ {int* usb_buf; struct usb_device* dev; } ;
struct sd {TYPE_1__ gspca_dev; } ;
struct gspca_dev {int dummy; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,int,int,int) ;
 int FUNC_1 (struct usb_device*,int ,int,int,int,int ,int*,int,int ) ;
 int FUNC_2 (struct usb_device*,int ) ;

int FUNC_3(struct sd *VAR_2, u16 VAR_3, u16 VAR_4)
{
 int VAR_5;
 struct gspca_dev *VAR_6 = (struct gspca_dev *)VAR_2;
 struct usb_device *VAR_7 = VAR_2->gspca_dev.dev;
 __u8 *VAR_8 = VAR_2->gspca_dev.usb_buf;

 u8 VAR_9 = (VAR_4 > 0xff) ? 2 : 1;

 VAR_8[0] = VAR_4 & 0xff;
 VAR_8[1] = (VAR_4 >> 8) & 0xff;

 VAR_5 = FUNC_1(VAR_7, FUNC_2(VAR_7, 0),
         0x04, 0x40, VAR_3, 0, VAR_8, VAR_9,
         VAR_1);

 FUNC_0(VAR_6, VAR_0, "Written 0x%x to address 0x%x, status: %d\n",
    VAR_4, VAR_3, VAR_5);

 return (VAR_5 < 0) ? VAR_5 : 0;
}
