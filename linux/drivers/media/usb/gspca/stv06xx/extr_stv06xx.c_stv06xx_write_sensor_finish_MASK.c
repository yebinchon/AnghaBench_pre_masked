
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_device {int dummy; } ;
struct TYPE_2__ {scalar_t__* usb_buf; struct usb_device* dev; } ;
struct sd {scalar_t__ bridge; TYPE_1__ gspca_dev; } ;
typedef scalar_t__ __u8 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usb_device*,int ,int,int,int,int ,scalar_t__*,int,int ) ;
 int FUNC_1 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct sd *VAR_2)
{
 int VAR_3 = 0;

 if (VAR_2->bridge == VAR_0) {
  struct usb_device *VAR_4 = VAR_2->gspca_dev.dev;
  __u8 *VAR_5 = VAR_2->gspca_dev.usb_buf;

  VAR_5[0] = 0;
  VAR_3 = FUNC_0(VAR_4, FUNC_1(VAR_4, 0),
          0x04, 0x40, 0x1704, 0, VAR_5, 1,
          VAR_1);
 }

 return (VAR_3 < 0) ? VAR_3 : 0;
}
