
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct usb_device {int dummy; } ;
struct TYPE_2__ {scalar_t__* usb_buf; struct usb_device* dev; } ;
struct sd {TYPE_1__ gspca_dev; } ;
struct gspca_dev {int dummy; } ;
typedef scalar_t__ __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,scalar_t__ const,scalar_t__) ;
 int FUNC_1 (struct usb_device*,int ,int,int,int,scalar_t__ const,scalar_t__*,int,int ) ;
 int FUNC_2 (struct usb_device*,int ) ;

int FUNC_3(struct sd *VAR_2, const u8 VAR_3, u8 *VAR_4)
{
 int VAR_5;
 struct gspca_dev *VAR_6 = (struct gspca_dev *) VAR_2;
 struct usb_device *VAR_7 = VAR_2->gspca_dev.dev;
 __u8 *VAR_8 = VAR_2->gspca_dev.usb_buf;

 VAR_5 = FUNC_1(VAR_7, FUNC_2(VAR_7, 0),
         0x04, 0xc0, 0x14,
         0x8100 + VAR_3, VAR_8,
         1, VAR_1);
 *VAR_4 = VAR_8[0];

 FUNC_0(VAR_6, VAR_0, "Reading bridge register 0x%x containing 0x%x\n",
    VAR_3, *VAR_4);



 return (VAR_5 < 0) ? VAR_5 : 0;
}
